---
---
---
name: trap_mission_get_gauge_warning_ratio
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
push gauge_id ; (int)  (id of a gauge)
syscall 4, 28 ; trap_mission_get_gauge_warning_ratio (1 in, 1 out)
pop value ; (float) 
---
---
---
description: Returns the a value from 0.0 to 1.0 representing the current progress of the specified gauge getting to the warning level. Unused in game.
---
---
---
decompiled code:
float __fastcall YS::MISSION::GetGaugeWarningRatio(int id)
/----- (00000000004F6744) ----------------------------------------------------
void __fastcall YS::trap_mission_get_gauge_warning_ratio(BD_VALUE_20 *args)
{
  *(float *)&(*args)[0] = YS::MISSION::GetGaugeWarningRatio(*(_DWORD *)args);
}
->
/----- (0000000000456270) ----------------------------------------------------
float __fastcall YS::MISSION::GetGaugeWarningRatio(int id)
{
  int v2; // r31
  unsigned int v3; // r3

  if ( !YS::MISSION::IsExec() )
    return 0.0;
  v2 = 52 * id;
  if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 400 + 0xCLL) & 1) == 0 )
    return 0.0;
  v3 = (unsigned int)YS::MISSION::GetCurrent();
  return (float)*(int *)(v3 + v2 + 400 + 0x1CLL) / (float)*(int *)(v3 + v2 + 400 + 0x18LL);
}


---
---
---
appears in:

---
---
---
example usage from NA

