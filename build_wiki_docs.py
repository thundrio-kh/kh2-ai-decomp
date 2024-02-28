import os
import re
import shutil

incomplete = 0
complete = 0
doc_levels = {}
files_to_print = []

category_mapping = {}
toc_urls = {}

variable_types = set()

if os.path.exists('formatted_docs'):
    shutil.rmtree('formatted_docs')

for root, dirs, files in os.walk(os.path.join("syscall_docs")):
    for ff in files:
        fn = os.path.join(root, ff)
        if ".DS_Store" in fn:
            continue

        out_fn = fn.replace('syscall_docs', 'formatted_docs')[:-2] + ".md"
        if not (os.path.exists(os.path.dirname(out_fn))):
            os.makedirs(os.path.dirname(out_fn))

        doc = open(fn).read()
        sections = doc.split("""---
---
---""")
        # name
        name = sections[1]
        name = re.findall(r'name:(.*)\b', name)[0].strip()
        # category
        category = sections[2]
        category = re.findall(r'category:(.*)\b', category)[0].strip()

        # toc url
        toc_urls[name] = out_fn[15:]

        ## Add to category mapping
        if not category in category_mapping:
            category_mapping[category.lower()] = []
        category_mapping[category.lower()].append(name)

        # documentation level
        doc_level = sections[3]
        doc_level = re.findall(r'documentation level:(.*)\b', sections[3])[0].strip()
        # args
        arguments = sections[4].strip()
        # description
        description = sections[5].strip().split("description:")[-1].strip()
        # decompiled code
        # appears in
        appears_in = sections[7].strip().split("\n")[1:]
        # example usage from
        example_usage_from = sections[8]
        example_usage_from = re.findall(r'example usage from (.*)\n', sections[8])[0].strip()
        example_usage = '\n'.join(sections[8].strip().split("\n")[1:])

        page = "## "
        page += '*{}*'.format(name) if doc_level == 'complete' else name
        page += '*' if doc_level == 'untested' else ''
        page += ' ({})'.format(category)
        page += '\n\n'
        page += "`"
        syscall_line = re.findall(r'(syscall.*)\b', arguments)[0]
        page += syscall_line + ')'
        n_in_params = int(re.findall(r'syscall.*\((.*)?in', syscall_line)[0].strip())
        n_out_params = int(re.findall(r'syscall.* in,(.*)?out', syscall_line)[0].strip())
        page += "`"
        page += '\n\n'
        page += description
        page += '\n\n'
        page += '#### Input parameters\n'
        page += '| Name | Type | Description\n'
        page += '|------|------|------------\n'
        # push pos ; (kn::FVector *)  (A position vector)
        input_args = [a for a in arguments.split("\n") if a.startswith("push")]
        if not int(n_in_params) == len(input_args):
            raise ValueError("Number of input arguments does not match")
        # IMMEDIATE TODO have logic to validate n arguments
        for arg in input_args:
            parens = re.findall(r'.*?\((.*?)\)',arg)
            arg_name = re.findall(r'push (.*) ;', arg)[0]
            arg_type = parens[0]
            variable_types.add(arg_type)
            arg_description = parens[1] if len(parens) > 1 else ''
            page += '| {}   | {}   | {}\n'.format(arg_name, arg_type, arg_description)
        page += '\n\n'
        output_args = [a for a in arguments.split("\n") if a.startswith("pop")]
        if not int(n_out_params) == len(output_args):
            raise ValueError("Number of output arguments does not match")
        if output_args:
            page += '#### Return Parameters\n'
            page += '| Name | Type\n'
            page += '|------|-----\n'
            for arg in output_args:
                parens = re.findall(r'.*?\((.*?)\)',arg)
                arg_name = re.findall(r'pop (.*) ;', arg)[0]
                arg_type = parens[0]
                variable_types.add(arg_type)
                page += '| {}   | {}   \n'.format(arg_name, arg_type)

        appears_table = '| filename | Entity (obj)\n'
        appears_table += '|----------|-------------\n'
        # obj\M_EX910\m_ex.bdscript ((M) Samurai)
        for obj in appears_in:
            obj_fn = obj.strip().split(" ")[0]
            obj_entity = re.findall(r'\(.*\)', obj)[0] if '(' in obj else ''
            appears_table += '| {}       | {}          \n'.format(obj_fn, obj_entity)
        if not appears_in:
            appears_table = ''
        page += """\n\n<details>\n\t<summary>Appears in:</summary>\n{}\n</details>\n\n""".format(appears_table)

        page += """<details>\n\t<summary>Example Usage From {}</summary>\n```\n{}\n```\n</details>\n\n""".format(example_usage_from, example_usage)

    
        with open(out_fn, 'w') as f:
            f.write(page)

        try:
            doc_level = re.findall(r'documentation level:(.*)\b', doc)[0].strip()
            if doc_level not in doc_levels:
                doc_levels[doc_level] = 0
            doc_levels[doc_level] += 1
            if doc_level not in ["untested", "complete", "incomplete"]:
                files_to_print.append(fn)
        except:
            doc_levels['error'] += 1

open("arg_types.txt","w").write("\n".join(sorted(variable_types)))


max_len = 0
for cat in category_mapping.values():
    if len(cat) > max_len:
        max_len = len(cat)
for cat_k in category_mapping:
    category_mapping[cat_k] = sorted(category_mapping[cat_k])


with open("category_split.csv", "w") as f:
    sorted_categories = sorted(category_mapping.keys())
    f.write(",".join(sorted_categories))
    f.write("\n")
    for i in range(max_len):
        line = []
        for cat in sorted_categories:
            line.append(category_mapping[cat][i] if len(category_mapping[cat]) > i else '')
        f.write(",".join(line))
        f.write("\n")
    print(category_mapping[cat])

toc = ''
for c in sorted_categories:
    toc += "## {}\n".format(c)
    for v in category_mapping[c]:
        toc += "* [{}]({})\n".format(v, toc_urls[v])
    toc += "\n\n"

open("formatted_docs/toc.md", "w").write(toc)

for k,v in doc_levels.items():
    print("{}: {}".format(k,v))

print("Check")
for fn in sorted(files_to_print):
    print("\t{}".format(fn))