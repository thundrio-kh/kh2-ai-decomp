---
---
---
name: trap_sheet_set_attack_level
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown) 
push unk2 ; (unknown) 
syscall 1, 358 ; trap_sheet_set_attack_level (2 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

