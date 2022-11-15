/----- (00000000005090F0) ----------------------------------------------------
void __fastcall YS::trap_obj_dump(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  __int64 v2; // r29
  unsigned __int64 v3; // r31
  const char *v4; // r3
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r7
  __int64 v9; // r6
  __int64 back_chain; // [sp+0h] [-A0h]

  v1 = *(unsigned int *)args;
  v2 = *(unsigned int *)(unsigned int)YS::VM::Current;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
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
  v4 = YS::OBJ::get_entry_name((YS::OBJ_125 *const)*(unsigned int *)(v1 + 4));
  printf((unsigned int)"[%s] OBJ#dump : %s\n", v2, (__int64)v4, v9, v8, v7, v6, v5);
}
// 50912C: variable 'back_chain' is possibly undefined
// 509208: variable 'v9' is possibly undefined
// 509208: variable 'v8' is possibly undefined
// 509208: variable 'v7' is possibly undefined
// 509208: variable 'v6' is possibly undefined
// 509208: variable 'v5' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

