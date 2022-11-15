/----- (00000000004F8178) ----------------------------------------------------
void __fastcall YS::trap_obj_pos(BD_VALUE_21 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r29
  const kn::FVector *v4; // r3
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v4 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4));
  kn::FVector::operator=((kn::FVector *const)&ResultVector, v4);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 4F81A8: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;

