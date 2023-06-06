---
---
---
name: trap_mission_get_timer_second
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
syscall 4, 40 ; trap_mission_get_timer_second (1 in, 1 out)
pop value ; (int) 
---
---
---
description: returns the number of seconds remaining on the specified timer
---
---
---
decompiled code:
__int64 __fastcall YS::MISSION::GetTimerSecond(int id)
/----- (00000000004F62F0) ----------------------------------------------------
void __fastcall YS::trap_mission_get_timer_second(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::GetTimerSecond(*(_DWORD *)args);
}
->
/----- (00000000004554F0) ----------------------------------------------------
__int64 __fastcall YS::MISSION::GetTimerSecond(int id)
{
  int v2; // r31
  unsigned int v3; // r3
  int v4; // r3

  if ( YS::MISSION::IsExec()
    && (v2 = 44 * id, (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 188 + 0xCLL) & 1) != 0) )
  {
    v3 = (unsigned int)YS::MISSION::GetCurrent();
    v4 = YS::MISSION_TIMER::get((YS::MISSION_TIMER_0 *const)(v3 + v2 + 188));
  }
  else
  {
    v4 = 0;
  }
  return (v4 + 59) / 0x3Cu;
}


---
---
---
appears in:
msn\AL13_TRAP\al13.bdscript
msn\AL13_TRAP_FREE\al13.bdscript
msn\AL13_TRAP_FREE2\al13.bdscript
msn\HE_COLOSSEUM_2\he_c.bdscript
msn\HE_COLOSSEUM_2_FOG\he_c.bdscript
msn\HE_COLOSSEUM_6\he_c.bdscript
msn\HE_COLOSSEUM_6_FOG\he_c.bdscript
msn\HE_COLOSSEUM_8_CEL\he_c.bdscript
msn\HE_COL_2_10\he_c.bdscript
msn\HE_COL_6_10\he_c.bdscript
msn\HE_COL_8_31\he_c.bdscript
msn\HE_COL_8_35\he_c.bdscript
msn\HE_COL_8_40\he_c.bdscript
msn\TT06_BAGGAGE_01\tt06.bdscript
msn\TT06_BAGGAGE_02\tt06.bdscript
msn\TT06_LETTER_01\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT06_WORK_BAGGAGE\tt06.bdscript
msn\TT06_WORK_LETTER\tt06.bdscript
msn\TT07_POSTER_01\tt07.bdscript
msn\TT07_POSTER_02\tt07.bdscript
msn\TT07_WORK_POSTER\tt07.bdscript
msn\TT07_WORK_WORM\tt07.bdscript
msn\TT07_WORM_01\tt07.bdscript
msn\TT07_WORM_02\tt07.bdscript
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\M_EX350_01\m_ex.bdscript ((M) Mushroom 1 (EX))
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_03\m_ex.bdscript ((M) Mushroom 3 (EX))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_05\m_ex.bdscript ((M) Mushroom 5 (EX))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_07\m_ex.bdscript ((M) Mushroom 7 (EX))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_09\m_ex.bdscript ((M) Mushroom 9 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
---
---
---
example usage from msn\AL13_TRAP\al13.bdscript
L363:
 pushFromFWp W8
 pushImm 5
 sub 
 msb 
 jz L494
 pushImm 0
 syscall 4, 40 ; trap_mission_get_timer_second (1 in, 1 out)
 popToSp 0
 pushFromFWp W8
 pushImm 0
 sub 
 eqz 
 dup 
 jz L397
 pushFromFSp 0
 pushImm 120
 sub 
 info 
 eqzv 
