import os, re
from kh2lib.kh2lib import kh2lib
SOURCE_PATH = 'C:\\Users\\12sam\\Desktop\\dissassem\\kh2disassem\\source'
syscall_list = [s.split("\t") for s in open("syscall_list.tsv").read().split("\n")]

output_template = """SPLITCHAR
SPLITCHAR
SPLITCHAR
name: {}
SPLITCHAR
SPLITCHAR
SPLITCHAR
category: {}
SPLITCHAR
SPLITCHAR
SPLITCHAR
documentation level: {}
SPLITCHAR
SPLITCHAR
SPLITCHAR
{}
SPLITCHAR
SPLITCHAR
SPLITCHAR
description: {}
SPLITCHAR
SPLITCHAR
SPLITCHAR
decompiled code:
{}
SPLITCHAR
SPLITCHAR
SPLITCHAR
appears in:
{}
SPLITCHAR
SPLITCHAR
SPLITCHAR
example usage from {}
{}
""".replace("SPLITCHAR", "---")

trapcode_fns = {}
trap_functions = {}
trap_argspecs = {}
for root, dirs, files in os.walk(os.path.join("source")):
    for ff in files:
        fn = os.path.join(root, ff)
        trapname = ff[:-2]
        trapcode_fns[trapname] = fn
        functionlist = []
        headers = []

        text = open(fn).read().strip()
        functionlist.append(text) # the trap function
        lines = text.split('\n')
        lastline = lines[-1].strip()
        if lastline.startswith("//BASIC"):
            functions = []
        elif lastline.startswith("//COMPLICATED"):
            functions = lastline.split(" ")[1:]
        elif lastline.startswith("//CHEAT"):
            functions = [lastline.split(" ")[-1]]
        else:
            functions = [re.findall(r'([A-Za-z][A-Za-z\d_]*::[A-Za-z\d_:]*?)\(', text)[-1]]
        for function in functions:
            pname = os.path.join(SOURCE_PATH, function.replace("::",os.sep)+".c")
            function_text = open(pname).read()
            functionlist.append(function_text)
            headers.append(function_text.split("\n")[1]) # First line is always a comment
        final_trap_text = '\n'.join(headers) + '\n' + '\n->\n'.join(functionlist)
        trap_functions[trapname] = final_trap_text

argspec_details = open("syscall_details").read().split("\n\n")
for i in range(0, len(argspec_details), 2):
    trapname = re.findall(r'(.*)\n',argspec_details[i])[0]
    trap_argspecs[trapname] = argspec_details[i+1]

trap_appears = {}
trap_examples = {}
trap_params = {}
for root, dirs, files in os.walk(os.path.join("bdscript")):
    for ff in files:
        fn = os.path.join(root, ff)

        text = open(fn).read()

        for tname in trap_argspecs:

            # JUST BUILD THIS
            # re.findall(r'\n.*?\n.*?\n.*?trap_vector_mul.*?\n.*?\n', text)

            # syscall_search = re.findall(r'\((\d).*?(\d)', trap_argspecs[tname]) # syscall 0, 2 ; trap_puts (1 in, 0 out)
            # nin = int(syscall_search[0][0])
            # nout = int(syscall_search[0][1])

            # re_string = r'\n'
            # for _ in range(nin):
            #     re_string += '.*\n'
            # re_string += tname
            # re_string += ".*\n"
            # for _ in range(nout):
            #     re_string += '.*\n'

# push unk1 ; (unknown) 
# push unk2 ; (unknown) 
# syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
# pop unk ; (unknown) 

            if tname+" " in text:
                syscall_params = re.findall(r'\((\d*).*?(\d)', trap_argspecs[tname]) # syscall 0, 2 ; trap_puts (1 in, 0 out)
                nin = int(syscall_params[0][0])

                param_re = r'\n(' + '\n'.join(['.*?' for _ in range(nin)]) + '\n).*?' + tname + ' '

                if tname not in trap_params:
                    trap_params[tname] = [{} for _ in range(nin)]

                if tname not in trap_appears:
                    trap_appears[tname] = []
                if "00common" in fn:
                    endname = "00common"
                else:
                    endname = fn[9:]
                trap_appears[tname].append(endname)

                if nin > 0:
                    param_finds = re.findall(param_re, text)
                    for find in param_finds:
                        params = find.strip().split("\n")
                        for i in range(len(params)):
                            param = params[i].strip()
                            param_words = param.split(" ")
                            inst = param_words[0]
                            values = " ".join(param_words[1:])
                            if inst not in trap_params[tname][i]:
                                trap_params[tname][i][inst] = set()
                            trap_params[tname][i][inst].add(values)

                if not tname in trap_examples:
                    example_label = re.findall(r'([TL]R?\d*:[^:]*?'+tname+' [^:]*?)\n.*?:', text)[0]
                    trap_examples[tname] = (endname, example_label)

objects = {
    obj.split("\t")[1]: obj.split("\t")[2]
    for obj in open("objlist.tsv").read().split("\n")
}
for syscall in syscall_list:
    tableidx = syscall[0]
    funcidx = syscall[1]
    name = syscall[2]
    category = ""
    doclevel = "stub"
    argspec = trap_argspecs.get(name, "Not Found")
    nin = len(trap_params.get(name, [])) # not strictly true
    if name in trap_params and nin > 0 :
        argspec_lines = argspec.split("\n")
        for i in range(nin):
            argexamples = trap_params[name][i]
            for inst in argexamples:
                MAX_EXAMPLES = 5
                list_examples = sorted(list(argexamples[inst]))
                if not inst.startswith("pushImm") and len(list_examples) > MAX_EXAMPLES:
                    list_examples = list_examples[:MAX_EXAMPLES] + ["..."]
                values = ','.join(list_examples)
                argspec_lines[i] += " ({}: {})".format(inst, values)
        argspec = "\n".join(argspec_lines)

    description = ""
    decompiled_code = trap_functions.get(name, "Not Found")

    appears_in = ["{} ({})".format(n, objects.get(n.split(os.sep)[-2], "")) if n.startswith("obj") else n for n in trap_appears.get(name, [])]
    example_name = trap_examples.get(name, ["NA"])[0]
    examplecode = trap_examples.get(name, [""])[-1]

    trapfn = trapcode_fns.get(name, os.path.join("source", name+".c"))

    docfn = "syscall_docs" + os.sep + trapfn[7:]
    docdir = os.path.dirname(docfn)
    if not os.path.isdir(docdir):
        os.makedirs(docdir)

    with open(docfn, "w") as f:
        f.write(output_template.format(
            name,
            category,
            doclevel,
            argspec,
            description,
            decompiled_code,
            '\n'.join(appears_in),
            example_name,
            examplecode
        ))

    if argspec == "Not Found":
        print("NA - {}".format(name))