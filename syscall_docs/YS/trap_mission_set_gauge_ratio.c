---
---
---
name: trap_mission_set_gauge_ratio
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
push ratio ; (float)  (proportion of gauge that should be filled)
push id ; (int)  (id of a gauge)
syscall 4, 10 ; trap_mission_set_gauge_ratio (2 in, 0 out)
---
---
---
description: Sets a filled in ratio for the specified gauge
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetGaugeRatio(double ratio, int id)
/----- (00000000004F6690) ----------------------------------------------------
void __fastcall YS::trap_mission_set_gauge_ratio(BD_VALUE_20 *args)
{
  YS::MISSION::SetGaugeRatio(*(float *)&(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004560A4) ----------------------------------------------------
void __fastcall YS::MISSION::SetGaugeRatio(double ratio, int id)
{
  int v4; // r31
  double v5; // fp31
  unsigned int v6; // r3

  if ( YS::MISSION::IsActive() )
  {
    v4 = 52 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 400 + 0xCLL) & 1) != 0 )
    {
      v5 = (float)((float)*(int *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 400 + 0x18LL) * (float)ratio);
      if ( YS::MISSION::IsActive()
        && !*(_DWORD *)&(*YS::MISSION::GetCurrent())[1320]
        && (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 400 + 0xCLL) & 1) != 0 )
      {
        v6 = (unsigned int)YS::MISSION::GetCurrent();
        YS::MISSION_GAUGE::set((YS::MISSION_GAUGE_3 *const)(v6 + v4 + 400), v5);
      }
    }
  }
}


---
---
---
appears in:
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
---
---
---
example usage from obj\B_EX270_SIDECAR\b_ex.bdscript
L2536:
 pushImmf 0
 pushImm 0
 syscall 4, 10 ; trap_mission_set_gauge_ratio (2 in, 0 out)
 ret 
