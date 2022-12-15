---
---
---
name: trap_mission_increment_count
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
syscall 4, 6 ; trap_mission_increment_count (1 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

