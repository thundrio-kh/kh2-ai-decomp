---
---
---
name: trap_mission_add_gauge
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
syscall 4, 9 ; trap_mission_add_gauge (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::AddGauge(double value, int id)
/----- (00000000004F6660) ----------------------------------------------------
void __fastcall YS::trap_mission_add_gauge(BD_VALUE_20 *args)
{
  YS::MISSION::AddGauge(*(float *)&(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000455FA8) ----------------------------------------------------
void __fastcall YS::MISSION::AddGauge(double value, int id)
{
  int v4; // r31
  double v5; // fp31
  unsigned int v6; // r3

  if ( YS::MISSION::IsActive() )
  {
    v4 = 52 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 400 + 0xCLL) & 1) != 0 )
    {
      v5 = (float)(*(float *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 400 + 0x2CLL) + (float)value);
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

---
---
---
example usage from NA

