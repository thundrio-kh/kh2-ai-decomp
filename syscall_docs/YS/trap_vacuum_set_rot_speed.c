---
---
---
name: trap_vacuum_set_rot_speed
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
syscall 2, 82 ; trap_vacuum_set_rot_speed (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F58A4) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_rot_speed(BD_VALUE_19 *args)
{
  *(float *)(*(unsigned int *)args + 0x24LL) = *(float *)&(*args)[4];
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

