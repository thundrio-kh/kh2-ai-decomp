/----- (00000000004FAD58) ----------------------------------------------------
void __fastcall YS::trap_obj_set_cannon_camera_offset(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  int v4; // r30
  const kn::FVector *v5; // r4
  const kn::FVector *v6; // r31
  __int64 back_chain; // [sp+0h] [-90h]

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
  v4 = *(_DWORD *)(v2 + 4);
  v5 = (const kn::FVector *)*(unsigned int *)&(*args)[4];
  v6 = (const kn::FVector *)*(unsigned int *)&(*args)[8];
  kn::FVector::operator=((kn::FVector *const)(unsigned int)(v4 + 2928), v5);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)(v4 + 2944), v6);
}
// 4FAD7C: variable 'back_chain' is possibly undefined

