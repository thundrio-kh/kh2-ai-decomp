---
---
---
name: trap_special_last_xemnus_laser_end
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
syscall 8, 5 ; trap_special_last_xemnus_laser_end (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl ryj::LAST_XEMNUS_LASER::End()
/----- (00000000006175AC) ----------------------------------------------------
void __fastcall ryj::trap_special_last_xemnus_laser_end(BD_VALUE_23 *args)
{
  ryj::LAST_XEMNUS_LASER::End();
}
->
/----- (0000000000619B0C) ----------------------------------------------------
void __cdecl ryj::LAST_XEMNUS_LASER::End()
{
  __int64 v0; // r3

  v0 = (unsigned int)ryj::LastXemnusLaser;
  if ( !ryj::LastXemnusLaser )
  {
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\last_xemnus_laser.cpp", 871);
    v0 = (unsigned int)ryj::LastXemnusLaser;
  }
  *(_DWORD *)(v0 + 3520) = 7;
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

