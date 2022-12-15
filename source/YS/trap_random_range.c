/----- (00000000004B7E48) ----------------------------------------------------
void __fastcall YS::trap_random_range(BD_VALUE_16 *args)
{
  double v2; // fp1
  double v3; // fp2
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(float *)&(*args)[0];
  v3 = *(float *)&(*args)[4];
  if ( v2 > v3 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].f <= args[1].f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      336LL,
      "trap_random_range",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 336);
    v2 = *(float *)&(*args)[0];
    v3 = *(float *)&(*args)[4];
  }
  YS::Random *= 69069;
  *(float *)&(*args)[0] = (float)((float)((float)(unsigned int)YS::Random * (float)2.3283064e-10)
                                * (float)((float)v3 - (float)v2))
                        + (float)v2;
}
// 4B7E6C: variable 'back_chain' is possibly undefined
// 2AB06B0: using guessed type int YS::Random;

//BASIC
