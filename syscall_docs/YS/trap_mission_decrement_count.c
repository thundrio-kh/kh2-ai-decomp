---
---
---
name: trap_mission_decrement_count
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
push counter_id ; (int)  (id of counter)
syscall 4, 20 ; trap_mission_decrement_count (1 in, 0 out)
---
---
---
description: subtracts one from the value of an on screen counter
---
---
---
decompiled code:
void __fastcall YS::MISSION::AddCount(int value, int id)
/----- (00000000004F6448) ----------------------------------------------------
void __fastcall YS::trap_mission_decrement_count(BD_VALUE_20 *args)
{
  YS::MISSION::AddCount(-1, *(_DWORD *)args);
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
msn\AL10_MS102\ms_d.bdscript
msn\AL14_MS201A\ms_d.bdscript
msn\AL14_MS201B\ms_d.bdscript
msn\AL14_MS_K\ms_d.bdscript
msn\AL14_MS_O\al14.bdscript
msn\AL14_MS_S\al14.bdscript
msn\BB00_MS202\ms_d.bdscript
msn\BB04_MS201\ms_d.bdscript
msn\CA01_MS201\ms_d.bdscript
msn\CA02_MS103\ms_d.bdscript
msn\CA02_SKATE_01\ca02.bdscript
msn\CA14_MS203\ms_d.bdscript
msn\HB04_MS403\hb04.bdscript
msn\HB07_MS402\ms_d.bdscript
msn\HB20_MS401\ms_d.bdscript
msn\HE06_MS203\ms_d.bdscript
msn\HE09_MS201\ms_d.bdscript
msn\HE09_MS202\ms_d.bdscript
msn\HE17_MS105\he17.bdscript
msn\LK02_MS102\lk02.bdscript
msn\LK05_MS101\ms_d.bdscript
msn\MU01_MS101\ms_d.bdscript
msn\MU01_MS103C\mu01.bdscript
msn\MU02_MS103A\mu02.bdscript
msn\MU05_MS105\ms_d.bdscript
msn\MU08_MS107\ms_d.bdscript
msn\MU08_MS202\ms_d.bdscript
msn\MU10_MS203\ms_d.bdscript
msn\NM06_MS102\ms_d.bdscript
msn\TR02_MS102A\tr02.bdscript
msn\TR02_MS210\ms_d.bdscript
msn\TT04_MS901\ms_d.bdscript
msn\TT06_PERFORM_01\tt06.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
msn\TT06_WORK_PERFORM\tt06.bdscript
msn\TT07_CLEAN_01\tt07.bdscript
msn\TT07_CLEAN_02\tt07.bdscript
msn\TT07_SKATE_01\tt07.bdscript
msn\TT07_WORK_CLEAN\tt07.bdscript
msn\TT14_MS001\ms_d.bdscript
msn\TT19_MS602\ms_d.bdscript
msn\TT29_MS802\ms_d.bdscript
msn\TT30_MS803\ms_d.bdscript
msn\TT40_MS002\ms_d.bdscript
msn\TT40_MS003\ms_d.bdscript
---
---
---
example usage from msn\AL10_MS102\ms_d.bdscript
L33:
 pushImm 0
 syscall 4, 20 ; trap_mission_decrement_count (1 in, 0 out)
 jmp L69
