---
---
---
name: trap_damage_blow_speed
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
syscall 2, 33 ; trap_damage_blow_speed (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004F4100) ----------------------------------------------------
void __fastcall YS::trap_damage_blow_speed(BD_VALUE_19 *args)
{
  *(float *)&(*args)[0] = (float)*(__int16 *)(*(unsigned int *)(*(unsigned int *)args + 0x20LL) + 0xELL);
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

