import os, re


SOURCE_PATH = 'C:\\Users\\12sam\\Desktop\\dissassem\\kh2disassem\\source'
N = "kn"

for f in os.listdir(os.path.join("source",N)):
    fn = os.path.join("source", N, f)
    if os.path.isdir(fn):
        continue
    text = open(fn).read().strip()
    lines = text.split('\n')
    lastline = lines[-1].strip()
    if lastline.startswith("//BASIC"):
        continue
    elif lastline.startswith("//COMPLICATED"):
        functions = lastline.split(" ")[1:]
    elif lastline.startswith("//CHEAT"):
        functions = [lastline.split(" ")[-1]]
    else:
        functions = [re.findall(r'([A-Za-z][A-Za-z\d_]*::[A-Za-z\d_:]*?)\(', text)[-1]]

    for function in functions:
        pname = os.path.join(SOURCE_PATH, function.replace("::",os.sep)+".c")
        if not os.path.isfile(pname):
            print("{} - {} no exist".format(f[:-2], function))

        #print('{} - {}'.format(f[:-2], ','.join(functions)))

