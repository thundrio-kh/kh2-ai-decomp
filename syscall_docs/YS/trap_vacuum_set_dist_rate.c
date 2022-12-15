---
---
---
name: trap_vacuum_set_dist_rate
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
syscall 2, 84 ; trap_vacuum_set_dist_rate (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F58C4) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_dist_rate(BD_VALUE_19 *args)
{
  *(float *)(*(unsigned int *)args + 0x2CLL) = *(float *)&(*args)[4];
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

