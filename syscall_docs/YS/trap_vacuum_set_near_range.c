---
---
---
name: trap_vacuum_set_near_range
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
syscall 2, 83 ; trap_vacuum_set_near_range (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F58B4) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_near_range(BD_VALUE_19 *args)
{
  *(float *)(*(unsigned int *)args + 0x28LL) = *(float *)&(*args)[4];
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

