---
---
---
name: trap_sheet_set_hitback_addition
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
syscall 1, 348 ; trap_sheet_set_hitback_addition (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (000000000050AA44) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_hitback_addition(BD_VALUE_21 *args)
{
  *(float *)(*(unsigned int *)args + 0x1C8LL) = *(float *)&(*args)[4];
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

