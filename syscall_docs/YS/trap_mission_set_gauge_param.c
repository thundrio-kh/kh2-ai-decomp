---
---
---
name: trap_mission_set_gauge_param
---
---
---
category: mission_gauge
---
---
---
documentation level: untested
---
---
---
push start ; (int) (start value of the gauge)
push max ; (int) (max value of the gauge)
push warning ; (int) (threshold for warning mode of the gauge)
push id ; (int) (id of the gauge)
syscall 4, 19 ; trap_mission_set_gauge_param (4 in, 0 out)
---
---
---
description: Set parameters for a gauge
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetGaugeParam(int start, int max, int warning, int id)
/----- (00000000004F66FC) ----------------------------------------------------
void __fastcall YS::trap_mission_set_gauge_param(BD_VALUE_20 *args)
{
  YS::MISSION::SetGaugeParam(*(_DWORD *)args, *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8], *(_DWORD *)&(*args)[12]);
}
->
/----- (0000000000455E44) ----------------------------------------------------
void __fastcall YS::MISSION::SetGaugeParam(int start, int max, int warning, int id)
{
  int v8; // r31
  unsigned int v9; // r3

  if ( YS::MISSION::IsActive() )
  {
    v8 = 52 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v8 + 400 + 0xCLL) & 1) != 0 )
    {
      v9 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION2D::set_param((YS::MISSION2D_19 *const)(v9 + v8 + 400), start, max, warning);
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

