import re,os
# comments should have - not :

for root, dirs, files in os.walk(os.path.join("bdscript")):
    for ff in files:
        fn = os.path.join(root, ff)
        text = open(fn).read()

        text = re.sub(r' ;.*(:)', '', text)

        open(fn, "w").write(text)