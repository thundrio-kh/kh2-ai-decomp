---
---
---
name: trap_mission_is_activate2d
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
syscall 4, 21 ; trap_mission_is_activate2d (0 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __cdecl YS::MISSION::IsActivate2d()
/----- (00000000004F6120) ----------------------------------------------------
void __fastcall YS::trap_mission_is_activate2d(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::IsActivate2d();
}
->
/----- (0000000000456780) ----------------------------------------------------
bool __cdecl YS::MISSION::IsActivate2d()
{
  bool v0; // r31

  v0 = 0;
  if ( YS::MISSION::IsExec() && (*(_DWORD *)&(*YS::MISSION::GetCurrent())[4] & 1) != 0 )
    v0 = 1;
  return v0;
}


---
---
---
appears in:

---
---
---
example usage from NA

