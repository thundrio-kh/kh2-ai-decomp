---
---
---
name: trap_sheet_set_attack_level
---
---
---
category: sheet
---
---
---
documentation level: complete
---
---
---
push sheet ; (YS::SHEET_44 *) (An object stat sheet)
push level ; (int)  (The new attack level)
syscall 1, 358 ; trap_sheet_set_attack_level (2 in, 0 out)
---
---
---
description: Set the attack level of an object
---
---
---
decompiled code:

/----- (000000000050AA64) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_attack_level(BD_VALUE_21 *args)
{
  *(_BYTE *)(*(unsigned int *)args + 0x24CLL) = *(_DWORD *)&(*args)[4];
}

//BASIC
---
---
---
appears in:
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
---
---
---
example usage from obj\N_CM020_BTL\n_cm.bdscript
L5357:
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 358 ; trap_sheet_set_attack_level (2 in, 0 out)
 pushImm 0
 popToSpVal 168
 jmp L5491
