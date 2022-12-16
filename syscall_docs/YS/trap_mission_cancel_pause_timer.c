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
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from obj\M_EX950\m_ex.bdscript
L1183:
 syscall 4, 24 ; trap_mission_cancel_pause_timer (0 in, 0 out)
 pushImm 16
 syscall 6, 47 ; trap_obj_stop_end_all (1 in, 0 out)
 pushFromFSp 4
 pushImm 0
 sub 
 neqz 
 jz L1208
 pushFromFSp 4
 pushImmf 30
 syscall 1, 184 ; trap_light_fadeout (2 in, 0 out)
 jmp L1208
