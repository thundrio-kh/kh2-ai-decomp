/----- (000000000062643C) ----------------------------------------------------
void __fastcall Ts::trap_skateboard_trick(BD_VALUE_25 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r29
  unsigned __int64 v10; // r30
  __int64 back_chain; // [sp+0h] [-90h]

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
  Ts::ACTION_SKATEBOARD::Trick(
    (YS::OBJ_245 *)*(unsigned int *)(v9 + 4),
    *(int *)&(*args)[4],
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    *(float *)&(*args)[8]);
}
// 626460: variable 'back_chain' is possibly undefined
// 626538: variable 'a3' is possibly undefined
// 626538: variable 'a4' is possibly undefined
// 626538: variable 'a5' is possibly undefined
// 626538: variable 'a6' is possibly undefined
// 626538: variable 'a7' is possibly undefined
// 626538: variable 'a8' is possibly undefined

