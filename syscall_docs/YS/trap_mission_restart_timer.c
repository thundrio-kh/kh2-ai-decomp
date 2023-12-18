---
---
---
name: trap_mission_restart_timer
---
---
---
category: mission_timer
---
---
---
documentation level: untested
---
---
---
push time ; (int)  (Value the timer should be set to?)
push timer_id ; (int)  (id of a timer)
syscall 4, 7 ; trap_mission_restart_timer (2 in, 0 out)
---
---
---
description: Restarts a paused timer. if time parameter is < 1, timer counts up instead of down
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
msn\CA07_MS105\ca07.bdscript
msn\EH26_MS108\eh26.bdscript
---
---
---
example usage from msn\CA07_MS105\ca07.bdscript
L184:
 pushImm -1
 pushImm 0
 syscall 4, 7 ; trap_mission_restart_timer (2 in, 0 out)
 pushImm 17353
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
