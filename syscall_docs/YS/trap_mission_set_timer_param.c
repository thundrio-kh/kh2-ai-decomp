---
---
---
name: trap_mission_set_timer_param
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
push unk3 ; (unknown) 
push unk4 ; (unknown) 
syscall 4, 17 ; trap_mission_set_timer_param (4 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetTimerParam(int start, int max, int warning, int id)
/----- (00000000004F621C) ----------------------------------------------------
void __fastcall YS::trap_mission_set_timer_param(BD_VALUE_20 *args)
{
  YS::MISSION::SetTimerParam(*(_DWORD *)args, *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8], *(_DWORD *)&(*args)[12]);
}
->
/----- (00000000004552C8) ----------------------------------------------------
void __fastcall YS::MISSION::SetTimerParam(int start, int max, int warning, int id)
{
  int v8; // r31
  unsigned int v9; // r3

  if ( YS::MISSION::IsActive() )
  {
    v8 = 44 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v8 + 188 + 0xCLL) & 1) != 0 )
    {
      v9 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION2D::set_param((YS::MISSION2D_19 *const)(v9 + v8 + 188), start, max, warning);
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

