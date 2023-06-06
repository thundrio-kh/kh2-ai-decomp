---
---
---
name: trap_mission_increment_count
---
---
---
category: mission_counter
---
---
---
documentation level: untested
---
---
---
push counter_id ; (int)  (id of a counter)
syscall 4, 6 ; trap_mission_increment_count (1 in, 0 out)
---
---
---
description: Adds one to a counter
---
---
---
decompiled code:
void __fastcall YS::MISSION::AddCount(int value, int id)
/----- (00000000004F6418) ----------------------------------------------------
void __fastcall YS::trap_mission_increment_count(BD_VALUE_20 *args)
{
  YS::MISSION::AddCount(1, *(_DWORD *)args);
}
->
/----- (00000000004558AC) ----------------------------------------------------
void __fastcall YS::MISSION::AddCount(int value, int id)
{
  int v4; // r31
  YS::MISSION_COUNT_3 *v5; // r29
  unsigned int v6; // r3

  if ( YS::MISSION::IsActive() )
  {
    v4 = 56 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232 + 0xCLL) & 1) != 0
      && YS::MISSION::IsExec()
      && (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232 + 0xCLL) & 1) != 0 )
    {
      v5 = (YS::MISSION_COUNT_3 *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232);
      v6 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION_COUNT::set(v5, *(_DWORD *)(v6 + v4 + 276) + value);
    }
  }
}


---
---
---
appears in:
msn\AL00_MS101\ms_a.bdscript
msn\AL00_SKATE_01\al00.bdscript
msn\AL14_MS202_FREE\al14.bdscript
msn\BB01_MS101\ms_a.bdscript
msn\CA01_MS101\ms_a.bdscript
msn\CA09_MEDAL\ca_m.bdscript
msn\CA10_MEDAL\ca_m.bdscript
msn\CA12_MEDAL\ca_m.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA15_MEDAL\ca_m.bdscript
msn\HB17_MS405\hb17.bdscript
msn\HE06_MS101\ms_a.bdscript
msn\HE19_MS204\ms_a.bdscript
msn\MU07_MS106\mu07.bdscript
msn\NM10_MS203\nm10.bdscript
msn\NM10_MS203_FREE\nm10.bdscript
msn\TR02_MS102_FREE\tr02.bdscript
msn\TT04_MS107\tt04.bdscript
msn\TT04_MS301\tt04.bdscript
msn\TT06_LETTER_01\tt06.bdscript
msn\TT06_LETTER_02\tt06.bdscript
msn\TT06_WORK_LETTER\tt06.bdscript
msn\TT07_CLEAN_01\tt07.bdscript
msn\TT07_CLEAN_02\tt07.bdscript
msn\TT07_POSTER_01\tt07.bdscript
msn\TT07_POSTER_02\tt07.bdscript
msn\TT07_WORK_CLEAN\tt07.bdscript
msn\TT07_WORK_POSTER\tt07.bdscript
msn\TT08_MS701\ms_a.bdscript
msn\TT14_MS109\tt_d.bdscript
obj\M_EX350_01\m_ex.bdscript ((M) Mushroom 1 (EX))
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_09\m_ex.bdscript ((M) Mushroom 9 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
---
---
---
example usage from msn\AL00_MS101\ms_a.bdscript
TR6:
 popToSp 0
 popToSp 4
 pushFromFSp 0
 gosub 4, L118
 memcpyToSp 16, 16
 pushFromPSp 16
 gosub 12, L138
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 130 ; trap_obj_cmp (2 in, 1 out)
 eqz 
 jz L117
 pushImm 0
 syscall 4, 6 ; trap_mission_increment_count (1 in, 0 out)
 jmp L117
