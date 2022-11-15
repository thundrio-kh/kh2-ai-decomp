/----- (00000000004B30DC) ----------------------------------------------------
__int64 __fastcall YS::UNITSCRIPT::Start(unsigned int *code)
{
  __int64 v1; // r28
  YS::VM_377 *v3; // r29
  __int64 v4; // r27
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r7
  __int64 v9; // r6
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 v15; // r5
  __int64 back_chain; // [sp+0h] [-A0h]

  v1 = 0LL;
  do
  {
    if ( !YS::UNITSCRIPT::Thread[2 * (int)v1 + 1] )
      break;
    v1 = (int)v1 + 1;
  }
  while ( (int)v1 < 8 );
  if ( (int)v1 >= 8 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "i < THREAD_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\unitscript.cpp",
      49LL,
      "Start",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\unitscript.cpp", 49);
  }
  v3 = YS::VM::Start(code, 0LL);
  v4 = 2 * (int)v1;
  YS::UNITSCRIPT::Thread[v4 + 1] = (int)v3;
  YS::VM::callback(v3, 2, 0LL, 0, 0LL);
  YS::VM::call(v3, 3, 0LL, 0);
  *(_DWORD *)&(*v3)[36] = YS::VM::get_func_addr(v3, 4);
  YS::UNITSCRIPT::Thread[v4] = 0;
  printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\unitscript.cpp", 57LL, v9, v8, v7, v6, v5);
  printf((unsigned int)"mission script '%s' start\n", *(_DWORD *)v3, v15, v14, v13, v12, v11, v10);
  return v1;
}
// 4B3140: variable 'back_chain' is possibly undefined
// 4B321C: variable 'v9' is possibly undefined
// 4B321C: variable 'v8' is possibly undefined
// 4B321C: variable 'v7' is possibly undefined
// 4B321C: variable 'v6' is possibly undefined
// 4B321C: variable 'v5' is possibly undefined
// 4B3230: variable 'v15' is possibly undefined
// 4B3230: variable 'v14' is possibly undefined
// 4B3230: variable 'v13' is possibly undefined
// 4B3230: variable 'v12' is possibly undefined
// 4B3230: variable 'v11' is possibly undefined
// 4B3230: variable 'v10' is possibly undefined
// 2AB0308: using guessed type int YS::UNITSCRIPT::Thread[];

