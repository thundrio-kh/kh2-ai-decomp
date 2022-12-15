---
---
---
name: trap_light_set_fog_near
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
syscall 1, 257 ; trap_light_set_fog_near (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000509C24) ----------------------------------------------------
void __fastcall YS::trap_light_set_fog_near(BD_VALUE_21 *args)
{
  *(float *)(*(unsigned int *)args + 0x18LL) = *(float *)&(*args)[4];
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

