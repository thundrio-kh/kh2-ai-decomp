---
---
---
name: trap_mission_get_gauge_ratio
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
syscall 4, 12 ; trap_mission_get_gauge_ratio (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::MISSION::GetGaugeRatio(int id)
/----- (00000000004F66C0) ----------------------------------------------------
void __fastcall YS::trap_mission_get_gauge_ratio(BD_VALUE_20 *args)
{
  *(float *)&(*args)[0] = YS::MISSION::GetGaugeRatio(*(_DWORD *)args);
}
->
/----- (00000000004561B8) ----------------------------------------------------
float __fastcall YS::MISSION::GetGaugeRatio(int id)
{
  int v2; // r31
  __int64 v3; // r3

  if ( !YS::MISSION::IsExec() )
    return 0.0;
  v2 = 52 * id;
  if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v2 + 400 + 0xCLL) & 1) == 0 )
    return 0.0;
  v3 = (unsigned int)YS::MISSION::GetCurrent() + v2 + 400;
  return *(float *)(v3 + 44) / (float)*(int *)(v3 + 24);
}


---
---
---
appears in:

---
---
---
example usage from NA

