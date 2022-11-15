/----- (00000000004B8548) ----------------------------------------------------
void __fastcall YS::trap_effect_set_pos(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned __int64 v9; // r30
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 v15; // r5
  __int64 v16; // r4
  kn::FVector *v17; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  v9 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)ryj::EFFECT::is_valid((ryj::EFFECT_144 *const)(*args)[0], back_chain, a3, a4, a5, a6, a7, a8) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOEFFECT(args[0].p)->is_valid()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      435LL,
      "trap_effect_set_pos",
      (const void *)v9);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 435);
  }
  v17 = (kn::FVector *)ryj::EFFECT::pos((ryj::EFFECT_144 *const)(*args)[0], v16, v15, v14, v13, v12, v11, v10);
  kn::FVector::operator=(v17, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 4B8568: variable 'back_chain' is possibly undefined
// 4B85D8: variable 'v16' is possibly undefined
// 4B85D8: variable 'v15' is possibly undefined
// 4B85D8: variable 'v14' is possibly undefined
// 4B85D8: variable 'v13' is possibly undefined
// 4B85D8: variable 'v12' is possibly undefined
// 4B85D8: variable 'v11' is possibly undefined
// 4B85D8: variable 'v10' is possibly undefined

