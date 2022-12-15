/----- (0000000000625814) ----------------------------------------------------
void __fastcall Ts::trap_obj_tt_ball_blow(BD_VALUE_25 *args)
{
  __int64 v2; // r29
  const kn::FVector *v3; // r28
  unsigned __int64 v4; // r30
  __int64 v5; // r30
  __int64 v6; // fp2
  __int64 v7; // fp1
  __int64 v8; // fp3
  __int64 v9; // fp4
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  v3 = (const kn::FVector *)*(unsigned int *)&(*args)[4];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v5 = *(unsigned int *)(v2 + 4);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)(v5 + 32), v3);
  *(_DWORD *)(v5 + 36) = 0;
  Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)(unsigned int)(v5 + 32));
  Axa::FVECTOR4::operator*=((unsigned int)(v5 + 32));
  *(double *)&v6 = *(float *)(v5 + 32);
  *(double *)&v7 = -*(float *)&(*args)[8];
  *(double *)&v8 = *(float *)(v5 + 40);
  *(double *)&v9 = *(float *)(v5 + 44);
  *(float *)(v5 + 36) = *(double *)&v7;
  printf((unsigned int)"%f, %f, %f, %f\n", v6, v7, v8, v9, v12, v11, v10);
  YS::OBJ::change_action((YS::OBJ_125 *const)v5, TT_BALL_BLOW);
}
// 625840: variable 'back_chain' is possibly undefined
// 62598C: variable 'v12' is possibly undefined
// 62598C: variable 'v11' is possibly undefined
// 62598C: variable 'v10' is possibly undefined

//COMPLICATED Axa::FVECTOR4::normalize YS::OBJ::change_action