---
---
---
name: trap_mission_pause_timer
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
syscall 4, 13 ; trap_mission_pause_timer (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::Timer::pauseOn(u_int mode)
/----- (00000000004F6264) ----------------------------------------------------
void __fastcall YS::trap_mission_pause_timer(BD_VALUE_20 *args)
{
  dk::Timer::pauseOn(2u);
}
->
/----- (000000000007F2D4) ----------------------------------------------------
void __fastcall dk::Timer::pauseOn(u_int mode)
{
  dk::`anonymous namespace'::s_updateDisable |= mode;
}
// A0AC2C: using guessed type int dk::`anonymous namespace'::s_updateDisable;


---
---
---
appears in:

---
---
---
example usage from NA

