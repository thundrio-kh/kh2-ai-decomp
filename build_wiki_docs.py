import os
import re
import shutil

incomplete = 0
complete = 0
doc_levels = {}
files_to_print = []

if os.path.exists('formatted_docs'):
    shutil.rmtree('formatted_docs')

for root, dirs, files in os.walk(os.path.join("syscall_docs")):
    for ff in files:
        fn = os.path.join(root, ff)
        if ".DS_Store" in fn:
            continue

        fn = 'syscall_docs/Ti/trap_get_path_last_point_pos.c' # DEBUG ONLY DELETE ME

        out_fn = fn.replace('syscall_docs', 'formatted_docs')
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
        page += re.findall(r'(syscall.*)\n', arguments)[0]
        page += '\n\n'
        page += description
        page += '\n\n'
        page += '#### Input parameters\n'
        page += '| Name | Type | Description\n'
        page += '|------|------|------------\n'
        # push pos ; (kn::FVector *)  (A position vector)
        for arg in re.findall(r'(.*)\nsyscall.*\b', arguments):
            parens = re.findall(r'.*?\((.*?)\)',arg)
            arg_name = re.findall(r'push (.*) ;', arg)[0]
            arg_type = parens[0]
            arg_description = parens[1]
            page += '| {}   | {}   | {}\n'.format(arg_name, arg_type, arg_description)
        page += '\n\n'
        output_args = re.findall(r'syscall.*\n(.*)', arguments)
        if output_args:
            page += '#### Return Parameters\n'
            page += '| Name | Type\n'
            page += '|------|-----\n'
            for arg in re.findall(r'syscall.*\n(.*)', arguments):
                parens = re.findall(r'.*?\((.*?)\)',arg)
                arg_name = re.findall(r'pop (.*) ;', arg)[0]
                arg_type = parens[0]
                page += '| {}   | {}   \n'.format(arg_name, arg_type)

        appears_table = '| filename | Entity (obj)\n'
        appears_table += '|----------|-------------\n'
        # obj\M_EX910\m_ex.bdscript ((M) Samurai)
        for obj in appears_in:
            obj_fn = obj.strip().split(" ")[0]
            obj_entity = re.findall(r'\(.*\)', obj)[0]
            appears_table += '| {}       | {}          \n'.format(obj_fn, obj_entity)
        if not appears_in:
            appears_table = ''
        page += """\n\n<details>\n\t<summary>Appears in:</summary>\n{}\n</details>\n\n""".format(appears_table)

        page += """<details>\n\t<summary>Example Usage From {}</summary>\n{}\n</details>\n\n""".format(example_usage_from, example_usage)

    
        0/0

        try:
            doc_level = re.findall(r'documentation level:(.*)\b', doc)[0].strip()
            if doc_level not in doc_levels:
                doc_levels[doc_level] = 0
            doc_levels[doc_level] += 1
            if doc_level not in ["untested", "complete", "incomplete"]:
                files_to_print.append(fn)
        except:
            doc_levels['error'] += 1

for k,v in doc_levels.items():
    print("{}: {}".format(k,v))

print("Check")
for fn in sorted(files_to_print):
    print("\t{}".format(fn))