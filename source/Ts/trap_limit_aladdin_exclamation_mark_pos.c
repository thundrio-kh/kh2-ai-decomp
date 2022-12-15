/----- (0000000000623650) ----------------------------------------------------
void __fastcall Ts::trap_limit_aladdin_exclamation_mark_pos(BD_VALUE_24 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  YS::OBJ_125 *v4; // r30
  const YS::COLLISION_ELEM_0 *v5; // r3
  const kn::FVector *v6; // r3
  __int64 back_chain; // [sp+0h] [-B0h]
  kn::FVector v8[2]; // [sp+70h] [-40h] BYREF

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = (YS::OBJ_125 *)*(unsigned int *)(v2 + 4);
  v8[0].w = 0.0;
  v8[1].z = 0.0;
  v8[1].y = 0.0;
  v8[1].x = 0.0;
  v8[1].w = 1.0;
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj != NULL",
      "common",
      "C:\\hd25\\kingdom2\\sugi\\trapbattle.cpp",
      94LL,
      "trap_limit_aladdin_exclamation_mark_pos",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\sugi\\trapbattle.cpp", 94);
  }
  v5 = YS::OBJ::each_collision(v4, 0, 0LL);
  if ( !(_DWORD)v5 )
    v5 = YS::OBJ::each_collision(v4, 1, 0LL);
  if ( (_DWORD)v5 )
  {
    YS::COLLISION::set((YS::COLLISION_33 *const)v8, v4, v5);
    kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, &v8[1]);
    flt_3EAD504 = flt_3EAD504 - (float)(v8[0].z + (float)30.0);
  }
  else
  {
    v6 = (const kn::FVector *)YS::OBJ::get_pos(v4);
    kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, v6);
  }
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 623674: variable 'back_chain' is possibly undefined
// 3EAD500: using guessed type int Ts::ResultVector;
// 3EAD504: using guessed type float flt_3EAD504;

//COMPLICATED YS::OBJ::each_collision YS::OBJ::each_collision YS::COLLISION::set YS::OBJ::get_pos