/----- (00000000004B86E8) ----------------------------------------------------
void __fastcall YS::trap_effect_loop_end(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::EFFECT_144 *v9; // r3
  __int64 v10; // r9
  __int64 v11; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v9 = (ryj::EFFECT_144 *)(*args)[0];
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 || (v11 = (unsigned __int8)v9 & 3, ((unsigned __int8)v9 & 3) != 0) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL && (args[0].i & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      454LL,
      "trap_effect_loop_end",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 454);
    v9 = (ryj::EFFECT_144 *)(*args)[0];
  }
  ryj::EFFECT::loop_end(v9, v11, a3, a4, a5, a6, v10, a8);
}
// 4B8704: variable 'back_chain' is possibly undefined
// 4B8778: variable 'v11' is possibly undefined
// 4B8778: variable 'a3' is possibly undefined
// 4B8778: variable 'a4' is possibly undefined
// 4B8778: variable 'a5' is possibly undefined
// 4B8778: variable 'a6' is possibly undefined
// 4B8778: variable 'v10' is possibly undefined
// 4B8778: variable 'a8' is possibly undefined

