---
---
---
name: trap_area_init
---
---
---
category: unused
---
---
---
documentation level: incomplete
---
---
---
push unk1 ; (unknown) 
push unk2 ; (unknown) 
push unk3 ; (unknown) 
syscall 1, 35 ; trap_area_init (3 in, 0 out)
---
---
---
description: Unknown
---
---
---
decompiled code:

/----- (0000000000503054) ----------------------------------------------------
void __fastcall YS::trap_area_init(BD_VALUE_21 *args)
{
  byte_8F4D5C = *(_DWORD *)args;
  byte_8F4D5D = *(_DWORD *)&(*args)[4];
  byte_8F4D5E = *(_DWORD *)&(*args)[8];
}
// 8F4D5C: using guessed type char byte_8F4D5C;
// 8F4D5D: using guessed type char byte_8F4D5D;
// 8F4D5E: using guessed type char byte_8F4D5E;

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

