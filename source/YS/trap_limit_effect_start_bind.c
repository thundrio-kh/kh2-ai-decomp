/----- (00000000004F5558) ----------------------------------------------------
void __fastcall YS::trap_limit_effect_start_bind(BD_VALUE_19 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::LIMIT_1 *v9; // r26
  __int64 v10; // r29
  __int64 v11; // r27
  int v12; // r28
  unsigned __int64 v13; // r30
  __int64 back_chain; // [sp+0h] [-B0h]

  v9 = (YS::LIMIT_1 *)(*args)[0];
  v10 = *(unsigned int *)&(*args)[8];
  v11 = *(int *)&(*args)[4];
  v12 = *(_DWORD *)&(*args)[12];
  v13 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v10 )
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
  if ( (v10 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v13);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = (unsigned int)YS::LIMIT::start_effect(
                                    v9,
                                    v11,
                                    v12,
                                    (YS::OBJ_114 *)*(unsigned int *)(v10 + 4),
                                    a5,
                                    a6,
                                    a7,
                                    a8);
}
// 4F5598: variable 'back_chain' is possibly undefined
// 4F5674: variable 'a5' is possibly undefined
// 4F5674: variable 'a6' is possibly undefined
// 4F5674: variable 'a7' is possibly undefined
// 4F5674: variable 'a8' is possibly undefined

