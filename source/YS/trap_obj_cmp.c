/----- (00000000004F7964) ----------------------------------------------------
void __fastcall YS::trap_obj_cmp(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  int v3; // r29
  unsigned __int64 v4; // r28
  int v5; // r30
  __int64 v6; // r29
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  if ( (_DWORD)v2 && *(_DWORD *)&(*args)[4] )
  {
    v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
    v5 = *(_DWORD *)(v2 + 4);
    v6 = *(unsigned int *)&(*args)[4];
    if ( !(_DWORD)v6 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "arg != NULL",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
        48LL,
        "ToOBJ",
        (const void *)v4);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
    }
    if ( (v6 & 3) != 0 )
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
    v3 = v5 - *(_DWORD *)(v6 + 4);
  }
  else
  {
    v3 = 0;
  }
  *(_DWORD *)args = v3;
}
// 4F79B4: variable 'back_chain' is possibly undefined

