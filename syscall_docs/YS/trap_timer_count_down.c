---
---
---
name: trap_timer_count_down
---
---
---
category: mission_timer
---
---
---
documentation level: untested
---
---
---
push start_value ; (int) (Value to start the timer at) 
syscall 0, 55 ; trap_timer_count_down (1 in, 0 out)
---
---
---
description: Starts a countdown timer
---
---
---
decompiled code:
void __cdecl dk::Timer::start()
/----- (00000000004B8D24) ----------------------------------------------------
void __fastcall YS::trap_timer_count_down(BD_VALUE_16 *args)
{
  dk::Timer::setCountDown(*(_DWORD *)args);
  dk::Timer::start();
}
->
/----- (000000000007F2B4) ----------------------------------------------------
void __cdecl dk::Timer::start()
{
  dk::`anonymous namespace'::s_startTime = dk::`anonymous namespace'::s_time;
  dk::`anonymous namespace'::s_mode = 1;
}
// A0AC28: using guessed type int dk::`anonymous namespace'::s_time;
// A0AC30: using guessed type int dk::`anonymous namespace'::s_startTime;
// A0AC3C: using guessed type int dk::`anonymous namespace'::s_mode;


---
---
---
appears in:

---
---
---
example usage from NA

