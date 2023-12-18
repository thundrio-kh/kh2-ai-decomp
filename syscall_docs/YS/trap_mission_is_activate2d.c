---
---
---
name: trap_mission_is_activate2d
---
---
---
category: mission
---
---
---
documentation level: complete
---
---
---
syscall 4, 21 ; trap_mission_is_activate2d (0 in, 1 out)
pop is_activated ; (bool) 
---
---
---
description: checks if the mission custom hud is activated
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
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
---
---
---
example usage from obj\B_EX120\b_ex.bdscript
TR10:
 popToSp 0
 popToSp 4
 syscall 4, 21 ; trap_mission_is_activate2d (0 in, 1 out)
 jz L9584
 pushFromFSp 4
 dup 
 pushImm 75
 sub 
 jz L9548
 jmp L9564
