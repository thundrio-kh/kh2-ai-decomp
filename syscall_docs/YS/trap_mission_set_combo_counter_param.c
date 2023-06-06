---
---
---
name: trap_mission_set_combo_counter_param
---
---
---
category: mission_combocounter
---
---
---
documentation level: untested
---
---
---
push start ; (int)  (start value for the combo counter)
push max ; (int)  (max value for the combo counter)
push warning ; (int)  (value that will be the warning for the combo counter)
push id ; (int)  (id of a combo counter)
syscall 4, 51 ; trap_mission_set_combo_counter_param (4 in, 0 out)
---
---
---
description: Set parameters for the combo counter
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetComboCounterParam(int start, int max, int warning, int id)
/----- (00000000004F6928) ----------------------------------------------------
void __fastcall YS::trap_mission_set_combo_counter_param(BD_VALUE_20 *args)
{
  YS::MISSION::SetComboCounterParam(
    *(_DWORD *)args,
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(_DWORD *)&(*args)[12]);
}
->
/----- (0000000000456A84) ----------------------------------------------------
void __fastcall YS::MISSION::SetComboCounterParam(int start, int max, int warning, int id)
{
  int v8; // r31
  unsigned int v9; // r3

  if ( YS::MISSION::IsActive() )
  {
    v8 = id << 6;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v8 + 608 + 0xCLL) & 1) != 0 )
    {
      v9 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION_COUNT::set_param((YS::MISSION_COUNT_3 *const)(v9 + v8 + 608), start, max, warning);
    }
  }
}


---
---
---
appears in:
msn\HB09_SKATE_01\hb09.bdscript
msn\TT06_PERFORM_02\tt06.bdscript
---
---
---
example usage from msn\HB09_SKATE_01\hb09.bdscript
L190:
 pushFromFSp 0
 fetchValue 0
 syscall 4, 36 ; trap_score_score (1 in, 1 out)
 pushFromFSp 4
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 pushImm 0
 pushImm 0
 pushFromFSp 0
 fetchValue 0
 syscall 4, 36 ; trap_score_score (1 in, 1 out)
 pushImm 1
 add 
 pushImm 0
 syscall 4, 51 ; trap_mission_set_combo_counter_param (4 in, 0 out)
