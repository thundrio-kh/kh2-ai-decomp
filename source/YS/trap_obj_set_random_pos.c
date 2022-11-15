/----- (0000000000500EEC) ----------------------------------------------------
void __fastcall YS::trap_obj_set_random_pos(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  YS::OBJ_125 *v4; // r29
  const kn::FVector *v5; // r3
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v7; // [sp+70h] [-30h] BYREF

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
  v5 = (const kn::FVector *)YS::OBJ::get_entry_id(v4);
  YS::UNIT_GROUP::RandomPos(
    &v7,
    v5,
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12]);
  YS::OBJ::set_pos(v4, &v7);
}
// 500F10: variable 'back_chain' is possibly undefined

