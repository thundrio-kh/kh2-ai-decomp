import os
# Indexes the bdscripts
i = ['bdscript', 'root', 'ard', 'msn', 'obj', 'magic', 'limit', 'gumimenu']

x = {k:{} for k in i}

for root, dirs, files in os.walk(os.path.join("bdscript")):
    for ff in files:
        fn = os.path.join(root, ff)
        lines = open(fn).read().split("\n")
        category = root.replace("bdscript/", "").split("/")[0]
        x[category][fn] = len(lines)

with open("bdscript_index.json", "w") as f:
    import json
    json.dump(x, f, indent=4)

for c in i:
    # loop through all the keys in the dictionary x[c] but sorted by the value of the key
    for k in sorted(x[c], key=x[c].get):
        print(c, k, x[c][k])