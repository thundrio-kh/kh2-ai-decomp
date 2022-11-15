/----- (00000000004F529C) ----------------------------------------------------
void __fastcall YS::trap_limit_motion_start(BD_VALUE_19 *args)
{
  __int64 v2; // r29
  YS::LIMIT_1 *v3; // r28
  unsigned __int64 v4; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)&(*args)[4];
  v3 = (YS::LIMIT_1 *)(*args)[0];
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
  *(_DWORD *)args = YS::LIMIT::motion_start(
                      v3,
                      (YS::OBJ_114 *)*(unsigned int *)(v2 + 4),
                      *(int *)&(*args)[8],
                      *(float *)&(*args)[12]);
}
// 4F52C8: variable 'back_chain' is possibly undefined

