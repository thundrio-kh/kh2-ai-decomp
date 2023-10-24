import os
import re

incomplete = 0
complete = 0
doc_levels = {}
files_to_print = []

for root, dirs, files in os.walk(os.path.join("syscall_docs")):
    for ff in files:
        fn = os.path.join(root, ff)
        if ".DS_Store" in fn:
            continue
        doc = open(fn).read()
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