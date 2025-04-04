import re, os

def create_act_labels(txt):
    # ie when the act table is added to, we can automatically change the names of the variables to make sense. 
    return txt

def create_thread_labels(txt):
    # ie when a new magic thread is added to, we can automatically name the label name to make more sense
    return txt

def create_known_labels(txt):
    # add names for things like Float_to_vector where I know what they do
    return txt

def create_table_memory(txt):
    # name the variable name for act_table by looking for trap_obj_set_act_table
    return txt

def create_this_memory(txt):
    # name the this variable name by looking for the first line after obj_main, hopefully it's always a push.wp
    return txt

def create_db_names(txt):
    # name the variable names coming out of the txts
    return txt

renames = [
    create_act_labels,
    create_thread_labels,
    create_known_labels,
    create_table_memory,
    create_this_memory,
    create_db_names
]

scanone = ""
for root, dirs, files in os.walk(os.path.join("bdscript")):
    for ff in files:
        fn = os.path.join(root, ff)
        # try:
        if scanone and scanone not in fn:
            continue

        content = open(fn).read()
        for r in renames:
            content = r(content)
        open(fn, "w").write(content)