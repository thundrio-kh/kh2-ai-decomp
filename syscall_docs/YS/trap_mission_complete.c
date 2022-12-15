---
---
---
name: trap_mission_complete
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
syscall 4, 3 ; trap_mission_complete (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::Complete(__int64 signal_arg, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004F600C) ----------------------------------------------------
void __fastcall YS::trap_mission_complete(BD_VALUE_20 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::MISSION::Complete(*(int *)args, a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (0000000000452A34) ----------------------------------------------------
void __fastcall YS::MISSION::Complete(__int64 signal_arg, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r3
  __int64 v10; // r9
  YS::SIGNAL_HOOK_0 *v11; // r3
  int v12; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v9 = (unsigned int)YS::Current;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !YS::Current )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Current != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp",
      509LL,
      "Complete",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp", 509);
    v9 = (unsigned int)YS::Current;
  }
  if ( (_DWORD)v9
    && YS::MISSION_TABLE::is_colosseum((const YS::MISSION_TABLE *const)*(unsigned int *)(v9 + 8))
    && (v11 = YS::SIGNAL_HOOK::Search(7, signal_arg), (_DWORD)v11)
    && (v12 = *(_DWORD *)&(*v11)[8], v12 != 0xFFFF)
    && YS::PROGRESS::CheckFlag(v12) )
  {
    YS::MISSION::complete((YS::MISSION *const)(unsigned int)YS::Current, 156LL, signal_arg, a4, a5, a6, v10, a8);
  }
  else
  {
    YS::MISSION::complete((YS::MISSION *const)(unsigned int)YS::Current, 7LL, signal_arg, a4, a5, a6, v10, a8);
  }
}
// 452A54: variable 'back_chain' is possibly undefined
// 452B2C: variable 'a4' is possibly undefined
// 452B2C: variable 'a5' is possibly undefined
// 452B2C: variable 'a6' is possibly undefined
// 452B2C: variable 'v10' is possibly undefined
// 452B2C: variable 'a8' is possibly undefined
// 2A9EC40: using guessed type int YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

