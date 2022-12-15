/----- (0000000000658C48) ----------------------------------------------------
void __fastcall Ti::trap_get_path_dir_r(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r29
  const kn::FVector *v5; // r30
  const kn::FVector *v6; // r25
  __int64 back_chain; // [sp+0h] [-D0h]
  kn::FVector v8; // [sp+70h] [-60h] BYREF
  float v9[6]; // [sp+80h] [-50h] BYREF

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
  v5 = (const kn::FVector *)*(unsigned int *)(v4 + 0x508);
  if ( (_DWORD)v5 )
  {
    v6 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)v4);
    YS::OBJ::get_dir((YS::OBJ_125 *const)v9, (YS::OBJ_126 *)v4);
    Ti::Path::get_dir((Ti::Path_3 *const)&v8, v5, v6, v9, *(float *)&(*args)[4], *(float *)&(*args)[8]);
    kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v8);
    *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
  }
}
// 658C6C: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;

//COMPLICATED YS::OBJ::get_pos YS::OBJ::get_dir Ti::Path::get_dir