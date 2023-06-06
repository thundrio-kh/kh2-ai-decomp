---
---
---
name: trap_mission_reset_pause_mode
---
---
---
category: mission
---
---
---
documentation level: untested
---
---
---
syscall 4, 23 ; trap_mission_reset_pause_mode (0 in, 0 out)
---
---
---
description: Reset the pause mode
---
---
---
decompiled code:
void __cdecl YS::MISSION::ResetPauseMode()
/----- (00000000004F60B4) ----------------------------------------------------
void __fastcall YS::trap_mission_reset_pause_mode(BD_VALUE_20 *args)
{
  YS::MISSION::ResetPauseMode();
}
->
/----- (0000000000452E08) ----------------------------------------------------
void __cdecl YS::MISSION::ResetPauseMode()
{
  if ( YS::Current )
  {
    if ( *(_BYTE *)(*(unsigned int *)((unsigned int)YS::Current + 8LL) + 8LL) )
      YS::SELECTOR::ResetPauseMode(*(unsigned __int8 *)(*(unsigned int *)((unsigned int)YS::Current + 8LL) + 8LL));
  }
}
// 2A9EC40: using guessed type int YS::Current;


---
---
---
appears in:
msn\CA09_MEDAL\ca_m.bdscript
msn\CA10_MEDAL\ca_m.bdscript
msn\CA12_MEDAL\ca_m.bdscript
msn\CA13_MEDAL\ca_m.bdscript
msn\CA14_MEDAL\ca_m.bdscript
msn\CA15_MEDAL\ca_m.bdscript
msn\TT02_MS201\save.bdscript
---
---
---
example usage from msn\CA09_MEDAL\ca_m.bdscript
L247:
 syscall 4, 23 ; trap_mission_reset_pause_mode (0 in, 0 out)
 ret 
