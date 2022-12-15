---
---
---
name: trap_mission_dead_boss
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
syscall 4, 16 ; trap_mission_dead_boss (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MISSION::DeadBoss(__int64 signal_arg, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004F6038) ----------------------------------------------------
void __fastcall YS::trap_mission_dead_boss(BD_VALUE_20 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::MISSION::DeadBoss(*(int *)args, a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (0000000000452B60) ----------------------------------------------------
void __fastcall YS::MISSION::DeadBoss(__int64 signal_arg, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::MISSION *v9; // r3
  __int64 v10; // r9
  __int64 back_chain; // [sp+0h] [-80h]

  v9 = (YS::MISSION *)(unsigned int)YS::Current;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !YS::Current )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Current != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp",
      528LL,
      "DeadBoss",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\mission.cpp", 528);
    v9 = (YS::MISSION *)(unsigned int)YS::Current;
  }
  YS::MISSION::complete(v9, 16LL, signal_arg, a4, a5, a6, v10, a8);
}
// 452B80: variable 'back_chain' is possibly undefined
// 452BF4: variable 'a4' is possibly undefined
// 452BF4: variable 'a5' is possibly undefined
// 452BF4: variable 'a6' is possibly undefined
// 452BF4: variable 'v10' is possibly undefined
// 452BF4: variable 'a8' is possibly undefined
// 2A9EC40: using guessed type int YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

