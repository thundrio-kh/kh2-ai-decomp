#For each files
# REad in the text
# Go down in the text section, up to the bss section

# Todo: Learn a good fundamental understanding of Regex and replace a lot of this with regex

# rewrite the file
import os
import re



scanone = ""
for root, dirs, files in os.walk(os.path.join("bdscript")):
    for ff in files:
        fn = os.path.join(root, ff)
        # try:
        if scanone and scanone not in fn:
            continue
        lines = open(fn).read().split("\n")
        txt_commands = {}
        # create a dict with {txtnum, name} for both the label and the txt
        aistart = 0

        for l in range(len(lines)):
            line = lines[l].strip()
            # B_CA000 good case
            if line.startswith("db"):
                if not aistart:
                    aistart = l
                action = line.split("'")
                if len(action) > 3:
                    print("WARN: too many ',{}".format(line))
                r = 1
                while lines[l-r].strip().endswith(":"):
                    labelline = lines[l-r].strip()
                    label = labelline.split(":")[0]
                    obj = {"txt": label, "action": action[1]}
                    txt_commands[label] = obj
                    r += 1
            #     if not aistart:
            #         0/0
            # if line.startswith("TXT") and ":" in lines[l-1] and lines[l+1].strip().startswith("db"):
            #     if not aistart:
            #         aistart = l
            #     labelline = lines[l-1].strip().split(":")[0]
            #     txtline = line.split(":")[0]
            #     aline = lines[l+1]

            #     aline = aline.strip().split("'")
            #     if len(aline) > 3:
            #         print("WARN: too many ', {}".format(lines[l+1]))
            #     aline = aline[1]
            #     obj = {"txt": line.split(":")[0], "action": aline}
            #     txt_commands[txtline] = obj
            #     txt_commands[labelline] = obj

            #     aline = aline.strip().split("'")
            #     if len(aline) > 3:
            #         print("WARN: too many ', {}".format(lines[l+1]))
            #     aline = aline[1]
            #     obj = {"txt": line.split(":")[0], "action": aline}
            #     txt_commands[txtline] = obj
            #     txt_commands[labelline] = obj
#  db 'zexion_hp',0
# TXT28504:
# L28504:
#  db 'Zexion',0,0
        # go back through the main part of the file, examine each word, if a line starts with an L or TXT look for it in the dict
        # if found, add a comment at the end "TXT: 'name'"

        for l in range(0, aistart):
            line = lines[l].strip()
            words = line.split(" ")
            comment = ""
            for word in words:
                if word.startswith("TXT") or word.startswith("L"):
                    if not "___ai" in line:
                        if word in txt_commands:
                            comment += "___ai '{}' ({})".format(txt_commands[word]["action"].replace("'", ""), txt_commands[word]["txt"])
            if comment:
                lines[l] = lines[l] + " ; " + comment

        # check for known references to line numbers
        revealed_codes = {}
        for l in range(len(lines)):
            line = lines[l]
            if line.startswith("; codeRevealer:"):
                # This can be assumed to only appear once before anything else important
                revealed_codes = [c.strip() for c in line.split("-l")[1:]]
            if "trap_act_table_add" in line:
                for l_r in range(1, 10):
                    comment = ""
                    line_reverse = lines[l-l_r]
                    lr_word = line_reverse.strip().split(" ")
                    if lr_word[1] != "0" and not lr_word[1].startswith("L"):
                        # if lr_word[1] in revealed_codes: NO longer need this check all instances where ___unk_ref would be used are actual refs
                        if not "___ref" in line_reverse:
                            lines[l-l_r] = line_reverse.replace(lr_word[1], "L{}".format(lr_word[1]))
                            comment += "___ref"
                    if comment:
                        lines[l-l_r] += " ; " + comment
                        
                    # These should all be of the form, pushImm word

                # Look at last 9 lines, make them L as long as it's found in revealed codes, otherwise a __unk_ref
        
        # check for possible references to line numbers (This script should be so much cleaner, probably could do with a ground up rewrite using regex)
        for l in range(len(lines)):
            line = lines[l]
            words = line.split(";")[0].split(" ")
            comment = ""
            for word in words:
                if word in revealed_codes and "___possible_ref" not in line:
                    comment += "___possible_ref"
            if comment:
                lines[l] = lines[l] + " ; " + comment

        # look at act table adds, find lines with __ref and go to that label and add a comment __label for action: XYZ
        found_references = {}
        for l in range(len(lines)):
            line = lines[l] 
            if "syscall 1, 6 ; trap_act_table_add (12 in, 0 out)" in line:
                arguments = {}
                for bi in range(1,13):
                    backline = lines[l-bi]
                    arguments[12-bi] = backline
                action = re.findall(r'\'(.*)\'',arguments[1])[0] # I'm making it count starting at 0 
                found_action_functions = []
                for arg in arguments:
                    ment = arguments[arg]
                    if "___ref" in ment:
                        words = ment.strip().split(";")[0].split(" ")
                        found_action_functions.append((words[1], 'label'))
                entry = arguments[3]
                entry_words = entry.strip().split(";")[0].split(" ")
                entry_value = entry_words[1]
                if entry_value != "0":
                    found_action_functions.append((entry_value,'label'))
                callbacks = [arguments[4],
                    arguments[5],
                    arguments[6],
                    arguments[7],
                    arguments[8],
                    arguments[9],
                    arguments[10],
                    arguments[11]]
                for callback in callbacks:
                    callback_words = callback.strip().split(";")[0].split(" ")
                    callback_value = callback_words[1]
                    if callback_value != "0":
                        found_action_functions.append((callback_value, 'callback'))
                found_references[action] = found_action_functions
        mapped_references = {}
        for a,refs in found_references.items():
            for r in refs:
                labelname = r[0]
                labeltype = r[1]
                if labelname not in mapped_references:
                    mapped_references[labelname] = [a, [labeltype]]
                else:
                    mapped_references[labelname][1].append(labeltype)
        for l in range(len(lines)):
            line = lines[l]
            if ":" in line:
                label = line.split(":")[0]
                if label in mapped_references:
                    actionname = mapped_references[label][0]
                    labeltypes = '_and_'.join(mapped_references[label][1])
                    if "___{}".format(labeltypes) not in line:
                        c = "" if ";" in line else " ;"
                        c += "___{} for action {}".format(labeltypes, actionname)
                        lines[l] = line + c

        with open(fn, "w") as f:
            f.write("\n".join(lines))
        # except:
        #     print("ERR: Failure for {}".format(fn))
'''
pushFromPWp W480
 pushFromPAi L11318 ; ___ai: 'appear' (TXT11318)
 pushImm 100
 pushImm L6432 ; ___ref
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
'''

#TODO
# make sure all the known references actually exist as labels,
# see if possible_ref is getting placed somewhere