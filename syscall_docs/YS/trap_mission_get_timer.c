---
---
---
name: trap_mission_get_timer
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
push timer_id ; (int)  (id of a timer)
syscall 4, 26 ; trap_mission_get_timer (1 in, 1 out)
pop value ; (float) 
---
---
---
description: return the number of minutes on the specified timer
---
---
---
decompiled code:
__int64 __fastcall YS::MISSION::GetTimer(int id)
/----- (00000000004F62B4) ----------------------------------------------------
void __fastcall YS::trap_mission_get_timer(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::GetTimer(*(_DWORD *)args);
}
->
/----- (0000000000455460) ----------------------------------------------------
__int64 __fastcall YS::MISSION::GetTimer(int id)
{
  int v2; // r31
  unsigned int v3; // r3

  if ( !YS::MISSION::IsExec() )
    return 0LL;
  v2 = 44 * id;
  if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 188 + 0xCLL) & 1) == 0 )
    return 0LL;
  v3 = (unsigned int)YS::MISSION::GetCurrent();
  return YS::MISSION_TIMER::get((YS::MISSION_TIMER_0 *const)(v3 + v2 + 188));
}


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
obj\M_EX350_01\m_ex.bdscript ((M) Mushroom 1 (EX))
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
