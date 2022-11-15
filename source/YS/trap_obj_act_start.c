/----- (00000000004FC330) ----------------------------------------------------
void __fastcall YS::trap_obj_act_start(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r29
  unsigned __int64 v8; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v7 = *(unsigned int *)args;
  v8 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v7 )
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
  if ( (v7 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v8);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::ACT::start(
    (YS::ACT_86 *const)(unsigned int)(*(_DWORD *)(v7 + 4) + 768),
    (const char *)*(unsigned int *)&(*args)[4],
    a3,
    a4,
    a5,
    a6);
}
// 4FC354: variable 'back_chain' is possibly undefined
// 4FC42C: variable 'a3' is possibly undefined
// 4FC42C: variable 'a4' is possibly undefined
// 4FC42C: variable 'a5' is possibly undefined
// 4FC42C: variable 'a6' is possibly undefined

