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
msn\AL10_KINOKO_LEX\kino.bdscript
msn\CA02_SKATE_01\ca02.bdscript
msn\CA13_KINOKO_LUX\kino.bdscript
msn\HE17_KINOKO_ZEX\kino.bdscript
msn\PO09_MS401_FREE\po09.bdscript
msn\TT06_BAGGAGE_02\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT07_POSTER_02\tt07.bdscript
msn\TT07_WORM_02\tt07.bdscript
msn\TT36_KINOKO_SAI\kino.bdscript
msn\WI02_KINOKO_MAR\kino.bdscript
obj\M_EX950\m_ex.bdscript ((M) Gambler)
---
---
---
example usage from msn\AL10_KINOKO_LEX\kino.bdscript
L112:
 popToSp 0
 syscall 4, 13 ; trap_mission_pause_timer (0 in, 0 out)
 pushFromFSpVal 8
 pushImm 4
 pushFromFSpVal 0
 syscall 4, 26 ; trap_mission_get_timer (1 in, 1 out)
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 jz L140
 pushFromFSpVal 0
 syscall 4, 47 ; trap_mission_warning_timer (1 in, 0 out)
 pushImm 10
 syscall 0, 65 ; trap_sound_play_system (1 in, 0 out)
 jmp L140
