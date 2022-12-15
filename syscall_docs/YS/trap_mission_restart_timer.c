---
---
---
name: trap_mission_restart_timer
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
syscall 4, 7 ; trap_mission_restart_timer (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::RestartTimer(int second, int id)
/----- (00000000004F61E8) ----------------------------------------------------
void __fastcall YS::trap_mission_restart_timer(BD_VALUE_20 *args)
{
  YS::MISSION::RestartTimer(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000455380) ----------------------------------------------------
void __fastcall YS::MISSION::RestartTimer(int second, int id)
{
  int v4; // r30
  YS::MISSION_TIMER_0 *v5; // r30
  int v6; // r4

  if ( YS::MISSION::IsActive() )
  {
    v4 = 44 * id;
    if ( (*(_DWORD *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 188 + 0xCLL) & 1) != 0 )
    {
      v5 = (YS::MISSION_TIMER_0 *)((unsigned int)YS::MISSION::GetCurrent() + v4 + 188);
      if ( (*(_DWORD *)&v5->baseclass_0[12] & 4) == 0 )
        ((void (__fastcall *)(YS::MISSION_TIMER_0 *))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v5->baseclass_0
                                                                                      + 0xCLL))(v5);
      v6 = second;
      if ( second < 0 )
        v6 = *(_DWORD *)&v5->baseclass_0[24];
      YS::MISSION_TIMER::start(v5, v6);
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

