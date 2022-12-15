---
---
---
name: trap_mission_disable_count
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
syscall 4, 44 ; trap_mission_disable_count (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::DisableCount(int id)
/----- (00000000004F6530) ----------------------------------------------------
void __fastcall YS::trap_mission_disable_count(BD_VALUE_20 *args)
{
  YS::MISSION::DisableCount(*(_DWORD *)args);
}
->
/----- (0000000000455B50) ----------------------------------------------------
void __fastcall YS::MISSION::DisableCount(int id)
{
  int v2; // r31
  unsigned int v3; // r3

  if ( YS::MISSION::IsExec() )
  {
    v2 = 56 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 232 + 0xCLL) & 1) != 0 )
    {
      v3 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION2D::disable((YS::MISSION2D_19 *const)(v3 + v2 + 232));
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

