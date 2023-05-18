# when run this script uses regex to parse the b_ex.bdscript file and print out every unique word that starts with 'trap'
# this is used to find all the traps in the game

import re

# read b_ex.bdscript into a list
with open('b_ex.bdscript', 'r') as f:
    bdscript_list = f.readlines()

# create a set of unique words
unique_words = set()
for line in bdscript_list:
    words = line.split()
    for word in words:
        unique_words.add(word)

# filter out the words that do not start with 'trap'
trap_words = set()
for word in unique_words:
    if word.startswith('trap'):
        trap_words.add(word)

# print out every unique word that starts with 'trap'
for word in sorted(list(trap_words)):
    print(word)


# a simplified version of the above code
# read b_ex.bdscript into a list
with open('b_ex.bdscript', 'r') as f:
    bdscript_list = f.readlines()

# create a set of unique words
unique_words = set()
for line in bdscript_list:
    words = line.split()
    for word in words:
        if word.startswith('trap'):
            unique_words.add(word)

# print out every unique word that starts with 'trap'
for word in sorted(list(unique_words)):
    print(word)
    