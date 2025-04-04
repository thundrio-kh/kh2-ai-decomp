import os, sys, re
# Made because jz and jnz needed to be swapped

instructions = {
    "pushImm": "push",
    "pushImmf": "push.s",
    "pushFromPSp": "push.sp",
    "pushFromPWp": "push.wp",
    "pushFromPSpVal": "push.sp.d",
    "pushFromPAi": "push.bd",
    "pushFromFSp": "push.d.sp",
    "pushFromFWp": "push.d.wp",
    "pushFromFSpVal": "push.d.sp.d",
    "pushFromFAi": "push.d.bd",
    "popToSp": "pop.sp",
    "popToWp": "pop.wp",
    "popToSpVal": "pop.sp.d",
    "popToAi": "pop.bd",
    "memcpyToSp": "memcpy.sp",
    "memcpyToWp": "memcpy.wp",
    "memcpyToSpVal": "memcpy.sp.d",
    "memcpyToSpAi": "memcpy.bd",
    "fetchValue": "push.d.pop",
    "citf": "cvt.w.s",
    "inv": "not",
    "eqz": "seqz",
    "msb": "sltz",
    "info": "slez",
    "neqz": "snez",
    "msbi": "sgez",
    "ipos": "sgtz",
    "cfti": "cvt.s.w",
    "negf": "neg.s",
    "absf": "abs.s",
    "infzf": "sltz.s",
    "infoezf": "slez.s",
    "eqzf": "seqz.s",
    "neqzf": "snez.s",
    "supoezf": "sgez.s",
    "supzf": "sgtz.s",
    "eqzv": "land",
    "neqzv": "lor",
    "addf": "add.s",
    "subf": "sub.s",
    "mulf": "mul.s",
    "divf": "div.s",
    "modf": "mod.s",
    "jmp": "b",
    "jz": "beqz",
    "jnz": "bnez",
    "gosub": "jal",
    "gosub32": "jal32",

    "TR0": "OBJ_INIT",
    "TR1": "OBJ_MAIN",
    "TR2": "UNIT_INIT",
    "TR3": "UNIT_MAIN",
    "TR4": "UNIT_FINALIZER",
    "TR5": "TEST",
    "TR6": "OBJ_DAMAGE",
    "TR7": "NEWGAME",
    "TR8": "PROGRESS_CALLBACK",
    "TR9": "GAMEOVER",
    "TR10": "SIGNAL_CALLBACK",
    "TR11": "REACTION_CALLBACK",
    "TR12": "SECOND_SET_CALLBACK",
    "TR13": "OBJ_FALL",
    "TR14": "OBJ_LAND",
    "TR15": "OBJ_ATTACK",
    "TR16": "OBJ_ANMATR_EFFECT",
    "TR17": "OBJ_ANMATR_CALLBACK",
    "TR18": "OBJ_CHANGE_ACT",
    "TR19": "OBJ_REFLECT",
    "TR20": "MAGIC_START",
    "TR21": "MAGIC_SHOT",
    "TR22": "LIMIT_START",
    "TR23": "LIMIT_CALL",
    "TR24": "LIMIT_ANMATR_EFFECT",
    "TR25": "LIMIT_ANMATR_CALLBACK",
    "TR26": "LIMIT_ATTACK",
    "TR27": "OBJ_IK_ADJUST_CALLBACK"
    } # old: new

# for root, dirs, files in os.walk(os.path.join("bdscript")):
for root, dirs, files in os.walk(os.path.join("..", "khbr", "khbr", "KH2", "data", "bdscript")):
    for ff in files:
        fn = os.path.join(root, ff)
        text = open(fn).read()

        for old, new in instructions.items():
            text = re.sub(r'\b'+old+r'\b', new, text)

        open(fn, "w").write(text)