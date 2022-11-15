/----- (00000000004B88B8) ----------------------------------------------------
void __fastcall YS::trap_effect_kill(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::EFFECT_144 *v9; // r3
  unsigned __int64 v10; // r30
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  __int64 v15; // r6
  __int64 v16; // r5
  __int64 v17; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v9 = (ryj::EFFECT_144 *)(*args)[0];
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 || !(unsigned int)ryj::EFFECT::is_valid(v9, back_chain, a3, a4, a5, a6, a7, a8) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL && TOEFFECT(args[0].p)->is_valid()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      473LL,
      "trap_effect_kill",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 473);
  }
  ryj::EFFECT::kill((ryj::EFFECT_144 *const)(*args)[0], v17, v16, v15, v14, v13, v12, v11);
}
// 4B88D8: variable 'back_chain' is possibly undefined
// 4B8950: variable 'v17' is possibly undefined
// 4B8950: variable 'v16' is possibly undefined
// 4B8950: variable 'v15' is possibly undefined
// 4B8950: variable 'v14' is possibly undefined
// 4B8950: variable 'v13' is possibly undefined
// 4B8950: variable 'v12' is possibly undefined
// 4B8950: variable 'v11' is possibly undefined

