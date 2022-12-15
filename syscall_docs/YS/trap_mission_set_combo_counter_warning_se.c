---
---
---
name: trap_mission_set_combo_counter_warning_se
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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
syscall 4, 53 ; trap_mission_set_combo_counter_warning_se (2 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

