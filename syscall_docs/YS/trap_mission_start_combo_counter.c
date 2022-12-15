---
---
---
name: trap_mission_start_combo_counter
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
syscall 4, 25 ; trap_mission_start_combo_counter (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::AddComboCounter(int add, double time, int id)
/----- (00000000004F67F8) ----------------------------------------------------
void __fastcall YS::trap_mission_start_combo_counter(BD_VALUE_20 *args)
{
  YS::MISSION::AddComboCounter(1, *(float *)&(*args)[0], 0);
}
->
/----- (00000000004567D8) ----------------------------------------------------
void __fastcall YS::MISSION::AddComboCounter(int add, double time, int id)
{
  int v6; // r31
  unsigned int v7; // r3

  if ( YS::MISSION::IsActive() )
  {
    v6 = id << 6;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v6 + 608 + 0xCLL) & 1) != 0 )
    {
      v7 = (unsigned int)YS::MISSION::GetCurrent();
      YS::COMBOCOUNTER::add((YS::COMBOCOUNTER_6 *const)(v7 + v6 + 608), add, time);
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

