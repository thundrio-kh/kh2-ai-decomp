/----- (00000000004FFF98) ----------------------------------------------------
void __fastcall YS::trap_obj_effect_start_bind_other(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r26
  unsigned __int64 v10; // r25
  YS::OBJ_125 *v11; // r26
  __int64 v12; // r27
  __int64 v13; // r30
  int v14; // r28
  __int64 v15; // r29
  __int64 back_chain; // [sp+0h] [-B0h]

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
  v11 = (YS::OBJ_125 *)*(unsigned int *)(v9 + 4);
  v12 = *(int *)&(*args)[4];
  v13 = *(unsigned int *)&(*args)[8];
  v14 = *(_DWORD *)&(*args)[12];
  v15 = *(int *)&(*args)[16];
  if ( !(_DWORD)v13 )
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
  if ( (v13 & 3) != 0 )
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
  *(_DWORD *)args = (unsigned int)YS::OBJ::start_effect_bind(
                                    v11,
                                    v12,
                                    v14,
                                    v15,
                                    (YS::OBJ_125 *)*(unsigned int *)(v13 + 4),
                                    a6,
                                    a7,
                                    a8);
}
// 4FFFBC: variable 'back_chain' is possibly undefined
// 500184: variable 'a6' is possibly undefined
// 500184: variable 'a7' is possibly undefined
// 500184: variable 'a8' is possibly undefined

