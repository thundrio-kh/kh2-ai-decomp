/----- (0000000000507C70) ----------------------------------------------------
void __fastcall YS::trap_player_get_movement(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r28
  __int64 v4; // r29
  __int64 back_chain; // [sp+0h] [-B0h]
  kn::FVector v6; // [sp+70h] [-40h] BYREF

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
  if ( (*(_DWORD *)(v4 + 1416) & 0x80) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_player()",
      "common",
      "../yasui/libys/player.h",
      204LL,
      "TOPLAYER",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/player.h", 204);
  }
  YS::PLAYER::get_movement((YS::PLAYER_44 *const)&v6, v4);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v6);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 507CA0: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;

