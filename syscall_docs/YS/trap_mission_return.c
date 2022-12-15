---
---
---
name: trap_mission_return
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
syscall 4, 32 ; trap_mission_return (0 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

