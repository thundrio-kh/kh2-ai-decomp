/----- (00000000004F27B4) ----------------------------------------------------
void __fastcall YS::trap_btlobj_target(BD_VALUE_19 *args)
{
  __int64 v2; // r27
  unsigned __int64 v3; // r30
  __int64 v4; // r27
  YS::TARGET_108 *v5; // r28
  int v6; // r3
  __int64 v7; // r29
  __int64 v8; // r29
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  v5 = (YS::TARGET_108 *)(unsigned int)(v4 + 2548);
  v6 = YS::TARGET::is_exist(v5);
  v7 = *(unsigned int *)args;
  if ( !v6 && (*(_DWORD *)(v4 + 1416) & 0x10) != 0 && *(_DWORD *)((unsigned int)(v4 + 2548) + 0xCLL) != 3 )
  {
    if ( !(_DWORD)v7 )
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
    if ( (v7 & 3) != 0 )
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
    v8 = *(unsigned int *)(v7 + 4);
    if ( (*(_DWORD *)(v8 + 1416) & 2) == 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "TOOBJ(obj)->is_btlobj()",
        "common",
        "../../yasui/libys/btlobj.h",
        178LL,
        "TOBTLOBJ",
        (const void *)v3);
      ErrorRaise();
      Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
    }
    YS::TARGET::search(v5, TYPE_PLAYER_0, (YS::OBJ_168 *)v8);
  }
  *(_DWORD *)args = (_DWORD)v5;
}
// 4F27D8: variable 'back_chain' is possibly undefined

