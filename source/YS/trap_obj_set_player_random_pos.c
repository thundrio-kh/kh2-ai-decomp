/----- (0000000000500DB8) ----------------------------------------------------
void __fastcall YS::trap_obj_set_player_random_pos(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  YS::OBJ_125 *v3; // r30
  OBJENTRY_ID v4; // r3
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v6; // [sp+70h] [-30h] BYREF

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = (YS::OBJ_125 *)*(unsigned int *)(v1 + 4);
  v4 = YS::OBJ::get_entry_id(v3);
  YS::UNIT_GROUP::RandomPosPlayer(&v6, v4);
  YS::OBJ::set_pos(v3, &v6);
}
// 500DD8: variable 'back_chain' is possibly undefined

