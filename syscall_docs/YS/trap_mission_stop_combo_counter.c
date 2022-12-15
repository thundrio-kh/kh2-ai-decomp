---
---
---
name: trap_mission_stop_combo_counter
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
syscall 4, 27 ; trap_mission_stop_combo_counter (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::ResetComboCounter(int id)
/----- (00000000004F6828) ----------------------------------------------------
void __fastcall YS::trap_mission_stop_combo_counter(BD_VALUE_20 *args)
{
  YS::MISSION::ResetComboCounter(0);
}
->
/----- (0000000000456874) ----------------------------------------------------
void __fastcall YS::MISSION::ResetComboCounter(int id)
{
  int v2; // r31
  unsigned int v3; // r3

  if ( YS::MISSION::IsActive() )
  {
    v2 = id << 6;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 608 + 0xCLL) & 1) != 0 )
    {
      v3 = (unsigned int)YS::MISSION::GetCurrent();
      YS::COMBOCOUNTER::reset((YS::COMBOCOUNTER_6 *const)(v3 + v2 + 608));
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

