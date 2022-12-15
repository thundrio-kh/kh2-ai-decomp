import os, re
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

# TODO add translations for the appears 
# TODO add possible arguments to the argspec

trap_appears = {}
for root, dirs, files in os.walk(os.path.join("bdscript")):
    for ff in files:
        fn = os.path.join(root, ff)

        text = open(fn)


for syscall in syscall_list:
    tableidx = syscall[0]
    funcidx = syscall[1]
    name = syscall[2]
    category = ""
    doclevel = "stub"
    argspec = trap_argspecs.get(name, "Not Found")

    description = ""
    decompiled_code = trap_functions.get(name, "Not Found")

    appears_in = []
    example_name = "NA"
    examplecode = ""

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