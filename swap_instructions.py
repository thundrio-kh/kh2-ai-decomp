import os, sys, re
# Made because jz and jnz needed to be swapped

if not len(sys.argv) == 3:
    raise Exception("Usage: python swap_instructions.py jz jnz")

arg1 = sys.argv[1]
arg2 = sys.argv[2]

for root, dirs, files in os.walk(os.path.join("bdscript")):
    for ff in files:
        fn = os.path.join(root, ff)
        text = open(fn).read()

        text = re.sub(r'\b'+arg1+r'\b', 'arg1___', text)
        text = re.sub(r'\b'+arg2+r'\b', 'arg2___', text)
        
        text = re.sub(r'\b'+'arg1___'+r'\b', arg2, text)
        text = re.sub(r'\b'+'arg2___'+r'\b', arg1, text)

        open(fn, "w").write(text)