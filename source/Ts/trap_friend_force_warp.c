/----- (0000000000625ECC) ----------------------------------------------------
void __fastcall Ts::trap_friend_force_warp(BD_VALUE_25 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r30
  unsigned __int64 v10; // r31
  const char *v11; // r3
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r7
  __int64 v16; // r6
  __int64 v17; // r5
  __int64 v18; // r30
  __int64 v19; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  printf(
    (unsigned int)"[%s:%d]",
    (__int64)"C:\\hd25\\kingdom2\\sugi\\trapfield.cpp",
    186LL,
    (__int64)&LS_26_startend[1][8],
    a5,
    a6,
    a7,
    a8);
  v9 = *(unsigned int *)args;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 )
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
  if ( (v9 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v11 = YS::OBJ::get_entry_name((YS::OBJ_125 *const)*(unsigned int *)(v9 + 4));
  printf((unsigned int)"force warp [%s]\n", (__int64)v11, v17, v16, v15, v14, v13, v12);
  v18 = *(unsigned int *)args;
  if ( !(_DWORD)v18 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v18 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v19 = *(unsigned int *)(v18 + 4);
  if ( (*(_DWORD *)(v19 + 1416) & 0x4000) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_friend()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\friend.h",
      86LL,
      "TOFRIEND",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\friend.h", 86);
  }
  kn::Friend::forceWarp((kn::Friend_0 *const)v19);
}
// 625F20: variable 'back_chain' is possibly undefined
// 625FF4: variable 'v17' is possibly undefined
// 625FF4: variable 'v16' is possibly undefined
// 625FF4: variable 'v15' is possibly undefined
// 625FF4: variable 'v14' is possibly undefined
// 625FF4: variable 'v13' is possibly undefined
// 625FF4: variable 'v12' is possibly undefined

//COMPLICATED YS::OBJ::get_entry_name kn::Friend::forceWarp