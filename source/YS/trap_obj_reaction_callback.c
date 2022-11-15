/----- (00000000004FAABC) ----------------------------------------------------
void __fastcall YS::trap_obj_reaction_callback(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r25
  YS::OBJ_168 *v4; // r30
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r7
  __int64 v9; // r30
  YS::OBJ_125 *v10; // r24
  __int64 v11; // r30
  __int64 back_chain; // [sp+0h] [-D0h]
  YS::TARGET_108 v13; // [sp+70h] [-60h] BYREF

  v2 = *(unsigned int *)&(*args)[12];
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
  v9 = *(unsigned int *)args;
  if ( !(_DWORD)v9 )
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
  if ( (v9 & 3) != 0 )
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
  v10 = (YS::OBJ_125 *)*(unsigned int *)(v9 + 4);
  v11 = *(unsigned int *)&(*args)[4];
  if ( !(_DWORD)v11 )
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
  if ( (v11 & 3) != 0 )
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
  YS::OBJ::reaction_callback(
    v10,
    (YS::OBJ_125 *)*(unsigned int *)(v11 + 4),
    *(int *)&(*args)[8],
    (YS::TARGET_78 *)v13,
    v8,
    v7,
    v6,
    v5);
}
// 4FAB00: variable 'back_chain' is possibly undefined
// 4FAD20: variable 'v8' is possibly undefined
// 4FAD20: variable 'v7' is possibly undefined
// 4FAD20: variable 'v6' is possibly undefined
// 4FAD20: variable 'v5' is possibly undefined

