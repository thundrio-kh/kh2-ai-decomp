---
---
---
name: trap_mission_set_combo_counter_warning_se
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
push num ; (int)  (id of sound effect to play. ID of 10 is used in game)
push id ; (int)  (id of a combo counter)
syscall 4, 53 ; trap_mission_set_combo_counter_warning_se (2 in, 0 out)
---
---
---
description: Set the sound effect that will play when the combo counter reaches the warning value
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetComboCounterWarningSe(int num, int id)
/----- (00000000004F699C) ----------------------------------------------------
void __fastcall YS::trap_mission_set_combo_counter_warning_se(BD_VALUE_20 *args)
{
  YS::MISSION::SetComboCounterWarningSe(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000456BC0) ----------------------------------------------------
void __fastcall YS::MISSION::SetComboCounterWarningSe(int num, int id)
{
  int v4; // r31

  if ( YS::MISSION::IsExec() )
  {
    v4 = id << 6;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 608 + 0xCLL) & 1) != 0 )
      *(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 608 + 0x28LL) = num;
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
L221:
 pushImm 10
 pushImm 0
 syscall 4, 53 ; trap_mission_set_combo_counter_warning_se (2 in, 0 out)
 ret 
