---
---
---
name: trap_sheet_attack_level
---
---
---
category: sheet
---
---
---
documentation level: stub
---
---
---
push sheet ; (YS::SHEET_44 *) (An object stat sheet)
syscall 1, 357 ; trap_sheet_attack_level (1 in, 1 out)
pop attack_level ; (int) 
---
---
---
description: Gets the attack level of an object
---
---
---
decompiled code:

/----- (000000000050AA54) ----------------------------------------------------
void __fastcall YS::trap_sheet_attack_level(BD_VALUE_21 *args)
{
  *(_DWORD *)args = *(unsigned __int8 *)(*(unsigned int *)args + 0x24CLL);
}

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

