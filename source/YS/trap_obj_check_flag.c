/----- (00000000005053E0) ----------------------------------------------------
void __fastcall YS::trap_obj_check_flag(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r28
  unsigned __int64 v4; // r30
  int v5; // r29
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
  v4 = *(unsigned int *)&(*args)[4];
  v5 = *(_DWORD *)(v2 + 4);
  if ( (v4 & 0x80000000) != 0LL || (unsigned int)v4 >= 0x3B )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(int)n >= 0 && (int)n < bitmax",
      "common",
      "../yasui/flag.h",
      75LL,
      "check",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/flag.h", 75);
  }
  *(_DWORD *)args = (*(_DWORD *)(v5 + ((unsigned int)(v4 >> 3) & 0x1FFFFFFC) + 264) & (1 << (v4 & 0x1F))) != 0;
}
// 505404: variable 'back_chain' is possibly undefined

