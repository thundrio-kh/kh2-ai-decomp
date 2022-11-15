/----- (00000000004F9CD8) ----------------------------------------------------
void __fastcall YS::trap_obj_use_mp(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r31
  __int64 v4; // r29
  __int64 v5; // r30
  __int64 v6; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
    goto LABEL_5;
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4)) )
  {
LABEL_5:
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL && ToOBJ(args[0].p)->is_exist()",
      "common",
      "../yasui/trapobj.h",
      230LL,
      "trap_obj_use_mp",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/trapobj.h", 230);
  }
  v4 = *(unsigned int *)args;
  if ( !(_DWORD)v4 )
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
  if ( (v4 & 3) != 0 )
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
  if ( (*(_DWORD *)(*(unsigned int *)(v4 + 4) + 0x588LL) & 4) != 0 )
  {
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
    v6 = *(unsigned int *)(v5 + 4);
    if ( (*(_DWORD *)(v6 + 1416) & 4) == 0 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "((OBJ *)obj)->is_party()",
        "common",
        "../yasui/libys/party.h",
        177LL,
        "TOPARTY",
        (const void *)v3);
      ErrorRaise();
      Axa::AxaAssert("../yasui/libys/party.h", 177);
    }
    YS::PARTY::use_mp((YS::PARTY_63 *const)v6);
  }
}
// 4F9CFC: variable 'back_chain' is possibly undefined

