---
---
---
name: trap_mission_set_count
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
syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetCount(int value, int id)
/----- (00000000004F63E4) ----------------------------------------------------
void __fastcall YS::trap_mission_set_count(BD_VALUE_20 *args)
{
  YS::MISSION::SetCount(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (000000000045575C) ----------------------------------------------------
void __fastcall YS::MISSION::SetCount(int value, int id)
{
  int v4; // r31
  unsigned int v5; // r3

  if ( YS::MISSION::IsActive() )
  {
    v4 = 56 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232 + 0xCLL) & 1) != 0 )
    {
      v5 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION_COUNT::set((YS::MISSION_COUNT_3 *const)(v5 + v4 + 232), value);
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

