---
---
---
name: trap_mission_cancel_pause_timer
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
syscall 4, 24 ; trap_mission_cancel_pause_timer (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::Timer::pauseOff(u_int mode)
/----- (00000000004F628C) ----------------------------------------------------
void __fastcall YS::trap_mission_cancel_pause_timer(BD_VALUE_20 *args)
{
  dk::Timer::pauseOff(2u);
}
->
/----- (000000000007F2E8) ----------------------------------------------------
void __fastcall dk::Timer::pauseOff(u_int mode)
{
  dk::`anonymous namespace'::s_updateDisable &= ~mode;
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

