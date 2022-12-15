---
---
---
name: trap_special_last_xemnus_laser_attack
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
syscall 8, 4 ; trap_special_last_xemnus_laser_attack (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl ryj::LAST_XEMNUS_LASER::Attack()
/----- (0000000000617588) ----------------------------------------------------
void __fastcall ryj::trap_special_last_xemnus_laser_attack(BD_VALUE_23 *args)
{
  ryj::LAST_XEMNUS_LASER::Attack();
}
->
/----- (0000000000619AAC) ----------------------------------------------------
void __cdecl ryj::LAST_XEMNUS_LASER::Attack()
{
  __int64 v0; // r3
  __int64 v1; // r4

  v0 = (unsigned int)ryj::LastXemnusLaser;
  if ( !ryj::LastXemnusLaser )
  {
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\last_xemnus_laser.cpp", 862);
    v0 = (unsigned int)ryj::LastXemnusLaser;
  }
  v1 = (unsigned int)ryj::LastXemnusLaser;
  *(_DWORD *)(v0 + 3520) = 3;
  *(_DWORD *)(v1 + 3556) = 0;
}
// 807488: using guessed type void *__ptr32 ryj::LastXemnusLaser;


---
---
---
appears in:

---
---
---
example usage from NA

