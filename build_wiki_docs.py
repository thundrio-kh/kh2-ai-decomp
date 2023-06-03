import os
import re

incomplete = 0
complete = 0

for root, dirs, files in os.walk(os.path.join("syscall_docs")):
    for ff in files:
        fn = os.path.join(root, ff)
        if ".DS_Store" in fn:
            continue
        doc = open(fn).read()
        try:
            doc_level = re.findall(r'documentation level:(.*)\b', doc)[0].strip()
            if doc_level != "stub":
                complete += 1
            else:
                incomplete += 1
        except:
            incomplete += 1

print("{}/{}".format(complete,complete+incomplete))