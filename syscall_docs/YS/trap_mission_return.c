---
---
---
name: trap_mission_return
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
syscall 4, 32 ; trap_mission_return (0 in, 0 out)
---
---
---
description: Unlocks a mission and returns control/settings to normal
---
---
---
decompiled code:
void __cdecl YS::MISSION::Return()
/----- (00000000004F6154) ----------------------------------------------------
void __fastcall YS::trap_mission_return(BD_VALUE_20 *args)
{
  YS::MISSION::Return();
}
->
/----- (0000000000452E4C) ----------------------------------------------------
void __cdecl YS::MISSION::Return()
{
  *(_DWORD *)(unsigned int)(YS::Current + 4) &= 0xFFFFFFEF;
  YS::STATUS::CageOff();
  YS::STATUS::Flag &= 0xFFFFFFFD;
  YS::INDICATION::Enable();
  if ( YS::Current && *(_BYTE *)(*(unsigned int *)((unsigned int)YS::Current + 8LL) + 8LL) )
    YS::SELECTOR::ResetPauseMode(*(unsigned __int8 *)(*(unsigned int *)((unsigned int)YS::Current + 8LL) + 8LL));
  SOUND::SE3DEnable();
  YS::MUTEX::unlock((YS::MUTEX *const)&YS::MUTEX::Mission, 0);
}
// 2A9EC40: using guessed type int YS::Current;
// 2A9F320: using guessed type int YS::MUTEX::Mission;
// 2AAD548: using guessed type int YS::STATUS::Flag;


---
---
---
appears in:
msn\HB16_MS404D\hb16.bdscript
msn\TR04_MS202\tr04.bdscript
---
---
---
example usage from msn\HB16_MS404D\hb16.bdscript
L87:
 gosub 4, L109
 pushImm 42
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 pushImm 40
 syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
 pushImm 41
 syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
 syscall 1, 187 ; trap_status_prize_drain_start (0 in, 0 out)
 syscall 4, 32 ; trap_mission_return (0 in, 0 out)
 ret 
