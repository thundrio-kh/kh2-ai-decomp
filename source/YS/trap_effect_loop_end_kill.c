/----- (00000000004B8798) ----------------------------------------------------
void __fastcall YS::trap_effect_loop_end_kill(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
      459LL,
      "trap_effect_loop_end_kill",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 459);
    v9 = (ryj::EFFECT_144 *)(*args)[0];
  }
  ryj::EFFECT::loop_end_kill(v9, v11, a3, a4, a5, a6, v10, a8);
}
// 4B87B4: variable 'back_chain' is possibly undefined
// 4B8828: variable 'v11' is possibly undefined
// 4B8828: variable 'a3' is possibly undefined
// 4B8828: variable 'a4' is possibly undefined
// 4B8828: variable 'a5' is possibly undefined
// 4B8828: variable 'a6' is possibly undefined
// 4B8828: variable 'v10' is possibly undefined
// 4B8828: variable 'a8' is possibly undefined

