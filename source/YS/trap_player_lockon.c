/----- (00000000005081C0) ----------------------------------------------------
void __fastcall YS::trap_player_lockon(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  YS::OBJ_168 *v4; // r30
  __int64 v5; // r30
  _DWORD *v6; // r30
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r7
  __int64 v11; // r6
  __int64 back_chain; // [sp+0h] [-B0h]
  YS::TARGET_108 v13; // [sp+70h] [-40h] BYREF

  v2 = *(unsigned int *)&(*args)[8];
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
  v4 = (YS::OBJ_168 *)*(unsigned int *)(v2 + 4);
  YS::TARGET::clear((YS::TARGET_108 *const)v13);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v13, v4, 0);
  v5 = *(unsigned int *)args;
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
  v6 = (_DWORD *)*(unsigned int *)(v5 + 4);
  if ( (v6[354] & 0x80) == 0 )
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
  YS::INDICATION::enable((YS::INDICATION_3 *const)(unsigned int)v6[719]);
  YS::LOCKON::start(
    (YS::LOCKON_6 *const)(unsigned int)v6[720],
    *(int *)&(*args)[4],
    (YS::TARGET_72 *)v13,
    v11,
    v10,
    v9,
    v8,
    v7);
}
// 5081E4: variable 'back_chain' is possibly undefined
// 508418: variable 'v11' is possibly undefined
// 508418: variable 'v10' is possibly undefined
// 508418: variable 'v9' is possibly undefined
// 508418: variable 'v8' is possibly undefined
// 508418: variable 'v7' is possibly undefined

