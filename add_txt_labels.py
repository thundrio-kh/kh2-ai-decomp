#For each files
# REad in the text
# Go down in the text section, up to the bss section

# Todo: Learn a good fundamental understanding of Regex and replace a lot of this with regex

# rewrite the file
import os

for root, dirs, files in os.walk(os.path.join("bdscript")):
    for ff in files:
        fn = os.path.join(root, ff)
        # try:
        lines = open(fn).read().split("\n")
        txt_commands = {}
        # create a dict with {txtnum, name} for both the label and the txt
        aistart = 0
        for l in range(len(lines)):
            line = lines[l].strip()
            if line.startswith("TXT") and ":" in lines[l-1] and lines[l+1].strip().startswith("db"):
                if not aistart:
                    aistart = l
                labelline = lines[l-1].strip().split(":")[0]
                txtline = line.split(":")[0]
                aline = lines[l+1]

                aline = aline.strip().split("'")
                if len(aline) > 3:
                    print("WARN: too many ', {}".format(lines[l+1]))
                aline = aline[1]
                obj = {"txt": line.split(":")[0], "action": aline}
                txt_commands[txtline] = obj
                txt_commands[labelline] = obj


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
                            comment += "___ai: '{}' ({})".format(txt_commands[word]["action"], txt_commands[word]["txt"])
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
                        if lr_word[1] in revealed_codes:
                            if not "___ref" in line_reverse:
                                lines[l-l_r] = line_reverse.replace(lr_word[1], "L{}".format(lr_word[1]))
                                comment += "___ref"
                        elif "___unk_ref" not in line_reverse:
                            comment += "___unk_ref"
                            print("Warn Unk Ref", fn)
                    if comment:
                        lines[l-l_r] += " ; " + comment
                        
                    # These should all be of the form, pushImm word

                # Look at last 9 lines, make them L as long as it's found in revealed codes, otherwise a __unk_ref
        
        # check for possible references to line numbers
        for l in range(len(lines)):
            line = lines[l]
            words = line.split(";")[0].split(" ")
            comment = ""
            for word in words:
                if word in revealed_codes and "___possible_ref" not in line:
                    comment += "___possible_ref"
            if comment:
                lines[l] = lines[l] + " ; " + comment

        with open(fn, "w") as f:
            f.write("\n".join(lines))
        # except:
        #     print("ERR: Failure for {}".format(fn))

#TODO
# make sure all the known references actually exist as labels,
# see if possible_ref is getting placed somewhere