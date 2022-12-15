---
---
---
name: trap_obj_jump_height_to_uptime
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
syscall 1, 100 ; trap_obj_jump_height_to_uptime (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::MATH::JumpHeightToUpTime(double height)
/----- (00000000005071E0) ----------------------------------------------------
void __fastcall YS::trap_obj_jump_height_to_uptime(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::MATH::JumpHeightToUpTime(*(float *)&(*args)[0]);
}
->
/----- (00000000004C12A8) ----------------------------------------------------
float __fastcall YS::MATH::JumpHeightToUpTime(double height)
{
  return __fsqrts(__fabs((float)((float)((float)height * (float)2.0) / (float)0.40816328)));
}


---
---
---
appears in:

---
---
---
example usage from NA

