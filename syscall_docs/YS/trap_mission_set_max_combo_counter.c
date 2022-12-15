---
---
---
name: trap_mission_set_max_combo_counter
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
syscall 4, 43 ; trap_mission_set_max_combo_counter (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetMaxComboCounter(int value, int id)
/----- (00000000004F68F4) ----------------------------------------------------
void __fastcall YS::trap_mission_set_max_combo_counter(BD_VALUE_20 *args)
{
  YS::MISSION::SetMaxComboCounter(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004569F8) ----------------------------------------------------
void __fastcall YS::MISSION::SetMaxComboCounter(int value, int id)
{
  int v4; // r31
  unsigned int v5; // r3

  if ( YS::MISSION::IsExec() )
  {
    v4 = id << 6;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 608 + 0xCLL) & 1) != 0 )
    {
      v5 = (unsigned int)YS::MISSION::GetCurrent();
      YS::COMBOCOUNTER::set_combo_max((YS::COMBOCOUNTER_6 *const)(v5 + v4 + 608), value);
    }
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

