# when run this script uses regex to parse the b_ex.bdscript file and print out every unique word that starts with 'trap'
import re
from collections import Counter

with open("b_ex.bdscript", "r") as f:
    text = f.read()
words = re.findall(r"trap\w+", text)

for word in sorted(Counter(words).keys()):
    print(word)
    
    
