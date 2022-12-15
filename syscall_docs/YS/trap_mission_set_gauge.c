---
---
---
name: trap_mission_set_gauge
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
syscall 4, 8 ; trap_mission_set_gauge (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::SetGauge(double value, int id)
/----- (00000000004F6630) ----------------------------------------------------
void __fastcall YS::trap_mission_set_gauge(BD_VALUE_20 *args)
{
  YS::MISSION::SetGauge(*(float *)&(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000455EFC) ----------------------------------------------------
void __fastcall YS::MISSION::SetGauge(double value, int id)
{
  int v4; // r31
  unsigned int v5; // r3

  if ( YS::MISSION::IsActive() && !*(_DWORD *)&(*YS::MISSION::GetCurrent())[1320] )
  {
    v4 = 52 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 400 + 0xCLL) & 1) != 0 )
    {
      v5 = (unsigned int)YS::MISSION::GetCurrent();
      YS::MISSION_GAUGE::set((YS::MISSION_GAUGE_3 *const)(v5 + v4 + 400), value);
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

