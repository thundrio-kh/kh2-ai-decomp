---
---
---
name: trap_mission_set_warning_se
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
syscall 4, 46 ; trap_mission_set_warning_se (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetCountWarningSe(int num, int id)
/----- (00000000004F655C) ----------------------------------------------------
void __fastcall YS::trap_mission_set_warning_se(BD_VALUE_20 *args)
{
  YS::MISSION::SetCountWarningSe(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000455BD4) ----------------------------------------------------
void __fastcall YS::MISSION::SetCountWarningSe(int num, int id)
{
  int v4; // r31

  if ( YS::MISSION::IsExec() )
  {
    v4 = 56 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232 + 0xCLL) & 1) != 0 )
      *(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 232 + 0x28LL) = num;
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

