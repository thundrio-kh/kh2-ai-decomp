---
---
---
name: trap_mission_failed
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
syscall 4, 11 ; trap_mission_failed (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::MISSION::Failed()
/----- (00000000004F6064) ----------------------------------------------------
void __fastcall YS::trap_mission_failed(BD_VALUE_20 *args)
{
  YS::MISSION::Failed();
}
->
/----- (0000000000452C10) ----------------------------------------------------
void __cdecl YS::MISSION::Failed()
{
  __int64 v0; // r10
  __int64 v1; // r8
  __int64 v2; // r7
  __int64 v3; // r6
  __int64 v4; // r5
  __int64 v5; // r4
  __int64 v6; // r9
  __int64 v7; // r3
  __int64 v8; // r3
  bool v9; // cr34
  int v10; // r31
  __int64 back_chain; // [sp+0h] [-80h]

  v4 = back_chain;
  v5 = (unsigned int)YS::Current;
  v6 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !YS::Current )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Current != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp",
      536LL,
      "Failed",
      (const void *)v6);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp", 536);
    v5 = (unsigned int)YS::Current;
  }
  v7 = *(int *)(*(unsigned int *)(v5 + 8) + 0x18LL);
  if ( (_DWORD)v7 )
  {
    SOUND::createSe(v7, v5, v4, v3, v2, v1, v6, v0);
    v5 = (unsigned int)YS::Current;
  }
  *(_DWORD *)(v5 + 180) = 2;
  YS::MISSION_CAMERA::start(
    (YS::MISSION_CAMERA_2 *const)(unsigned int)(YS::Current + 160),
    (ryj::PAX_327 *)(unsigned int)(YS::Current + 12),
    0);
  YS::MISSION::PostEnd();
  v8 = (unsigned int)YS::Current;
  if ( YS::Current
    && ((v9 = (unsigned int)YS::SIGNAL_HOOK::IsHook(8, -1) == 0, v8 = (unsigned int)YS::Current, !v9)
     || *(_DWORD *)((unsigned int)YS::Current + 0xACLL)) )
  {
    *(_DWORD *)((unsigned int)YS::Current + 0x2DCLL) = 8;
    *(_DWORD *)((unsigned int)YS::Current + 0x2E0LL) = -1;
    *(_DWORD *)((unsigned int)YS::Current + 0x2D8LL) = 4;
  }
  else
  {
    v10 = *(unsigned __int8 *)(*(unsigned int *)(v8 + 8) + 8LL);
    if ( (_DWORD)v8 )
    {
      YS::MISSION::end((YS::MISSION *const)v8);
      YS::Current = 0;
    }
    if ( v10 == 35 || v10 == 30 || v10 == 2 )
      YS::GAMEOVER::MiniGameFailed(0LL);
    else
      YS::GAMEOVER::MissionFailed();
  }
}
// 452C20: variable 'back_chain' is possibly undefined
// 452CA8: variable 'v4' is possibly undefined
// 452CA8: variable 'v3' is possibly undefined
// 452CA8: variable 'v2' is possibly undefined
// 452CA8: variable 'v1' is possibly undefined
// 452CA8: variable 'v6' is possibly undefined
// 452CA8: variable 'v0' is possibly undefined
// 2A9EC40: using guessed type int YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

