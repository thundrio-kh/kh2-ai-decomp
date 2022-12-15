---
---
---
name: trap_light_set_fog_far
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
syscall 1, 258 ; trap_light_set_fog_far (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000509C34) ----------------------------------------------------
void __fastcall YS::trap_light_set_fog_far(BD_VALUE_21 *args)
{
  *(float *)(*(unsigned int *)args + 0x1CLL) = *(float *)&(*args)[4];
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

