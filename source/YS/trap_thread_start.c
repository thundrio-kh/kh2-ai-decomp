/----- (00000000004B7A5C) ----------------------------------------------------
void __fastcall YS::trap_thread_start(BD_VALUE_16 *args)
{
  YS::VM_377 *v2; // r6
  int v3; // r5
  YS::VM_377 *v4; // r3
  YS::VM_377 *v5; // r4
  int v6; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = (YS::VM_377 *)(unsigned int)YS::VM::Current;
  if ( !YS::VM::Current )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "VM::Current != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      262LL,
      "trap_thread_start",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 262);
    v2 = (YS::VM_377 *)(unsigned int)YS::VM::Current;
  }
  v3 = *(_DWORD *)args;
  v4 = v2;
  if ( *(_DWORD *)args )
  {
    YS::VM::stop(v2, *(_DWORD *)args, v3);
    v3 = *(_DWORD *)args;
    v4 = (YS::VM_377 *)(unsigned int)YS::VM::Current;
  }
  v5 = YS::VM::start(
         v4,
         v3,
         *(_DWORD *)&(*args)[4],
         (BD_VALUE_0 *)(unsigned int)((_DWORD)args + 12),
         (_cntlzw(*(_DWORD *)&(*args)[12]) & 0x20) == 0);
  v6 = *(_DWORD *)&(*args)[8];
  if ( v6 )
    *(_DWORD *)&(*v5)[36] = v6;
  *(_DWORD *)args = (_DWORD)v5;
}
// 4B7A7C: variable 'back_chain' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;

