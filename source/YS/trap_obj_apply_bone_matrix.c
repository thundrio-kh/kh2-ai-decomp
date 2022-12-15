/----- (0000000000505E28) ----------------------------------------------------
void __fastcall YS::trap_obj_apply_bone_matrix(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-F0h]
  kn::FVector v5; // [sp+70h] [-80h] BYREF
  Axa::FVECTOR4 v6; // [sp+80h] [-70h] BYREF
  Axa::FMATRIX44 v7; // [sp+90h] [-60h] BYREF

  Axa::FMATRIX44::unit(&v7);
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
  YS::OBJ::get_bone_matrix((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4], (kn::FMatrix *)&v7);
  Axa::FMATRIX44::operator*(&v6, &v7, (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[8]);
  v5.x = v6.x;
  v5.y = v6.y;
  v5.z = v6.z;
  v5.w = v6.w;
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 505E60: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;

//COMPLICATED Axa::FMATRIX44::unit YS::OBJ::get_bone_matrix 