---
---
---
name: trap_mission_warning_gauge
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
syscall 4, 57 ; trap_mission_warning_gauge (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::WarningGauge(bool flag, int id)
/----- (00000000004F67BC) ----------------------------------------------------
void __fastcall YS::trap_mission_warning_gauge(BD_VALUE_20 *args)
{
  YS::MISSION::WarningGauge((_cntlzw(*(_DWORD *)args) & 0x20) == 0, *(_DWORD *)&(*args)[4]);
}
->
/----- (00000000004563D4) ----------------------------------------------------
void __fastcall YS::MISSION::WarningGauge(bool flag, int id)
{
  unsigned int *v4; // r3

  if ( YS::MISSION::IsExec() )
  {
    v4 = (unsigned int *)((unsigned int)YS::MISSION::GetCurrent() + 52 * id + 400);
    if ( (v4[3] & 1) != 0 )
    {
      if ( flag )
        ((void (*)(void))*(unsigned int *)*(unsigned int *)(*v4 + 0x14LL))();
      else
        ((void (*)(void))*(unsigned int *)*(unsigned int *)(*v4 + 0x18LL))();
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

