/----- (0000000000659B58) ----------------------------------------------------
void __fastcall Ti::trap_get_path_dir_from_obj(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 v5; // r28
  YS::OBJ_125 *v6; // r28
  const kn::FVector *v7; // r30
  unsigned __int64 v8; // r3
  YS::OBJ_126 *v9; // r4
  const kn::FVector *v10; // r28
  __int64 back_chain; // [sp+0h] [-C0h]
  kn::FVector v12; // [sp+70h] [-50h] BYREF
  float v13[4]; // [sp+80h] [-40h] BYREF

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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (_DWORD)v4 && *(_DWORD *)(v4 + 1288) && *(_BYTE *)(*(unsigned int *)(v4 + 1288) + 0x87LL) )
  {
    v5 = *(unsigned int *)&(*args)[4];
    if ( !(_DWORD)v5 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "arg != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        48LL,
        "ToOBJ",
        (const void *)v3);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
    }
    if ( (v5 & 3) != 0 )
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
    v6 = (YS::OBJ_125 *)*(unsigned int *)(v5 + 4);
    v7 = (const kn::FVector *)*(unsigned int *)(v4 + 1288);
    v8 = YS::OBJ::get_pos(v6);
    v9 = v6;
    v10 = (const kn::FVector *)v8;
    YS::OBJ::get_dir((YS::OBJ_125 *const)v13, v9);
    Ti::Path::get_dir((Ti::Path_3 *const)&v12, v7, v10, v13, *(float *)&(*args)[8], 1.0);
    kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v12);
    *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
  }
}
// 659B7C: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;

//COMPLICATED YS::OBJ::get_pos YS::OBJ::get_dir Ti::Path::get_dir