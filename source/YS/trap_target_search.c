/----- (0000000000508BE4) ----------------------------------------------------
void __fastcall YS::trap_target_search(BD_VALUE_21 *args)
{
  YS::TARGET_108 *v1; // r28
  __int64 v2; // r30
  YS::TARGET::TYPE v3; // r29
  unsigned __int64 v4; // r31
  __int64 back_chain; // [sp+0h] [-A0h]

  v1 = (YS::TARGET_108 *)(*args)[0];
  v2 = *(unsigned int *)&(*args)[4];
  v3 = *(_DWORD *)&(*args)[8];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::TARGET::search(v1, v3, (YS::OBJ_168 *)*(unsigned int *)(v2 + 4));
}
// 508C14: variable 'back_chain' is possibly undefined

