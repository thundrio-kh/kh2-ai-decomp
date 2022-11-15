/----- (00000000004B4DA0) ----------------------------------------------------
void __fastcall YS::VM::Debugger(BD_PROCESS_376 *process, BD_STATUS_0 status, unsigned int *arg)
{
  __int64 v6; // r27
  unsigned int v7; // r6
  unsigned int v8; // r4
  BD_PROCESS_376 *v9; // r3
  __int64 v10; // r31
  __int64 back_chain; // [sp+0h] [-A0h]

  if ( *arg == -1152000717 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "*(u_int *)vm != 0xbb55dd33",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp",
      206LL,
      "Debugger",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 206);
  }
  if ( status == BD_STATUS_EXEC )
  {
    v6 = (int)(*(_DWORD *)&(*process)[8] - arg[5]);
    if ( (int)v6 > *(_DWORD *)(*(unsigned int *)process + 0x14LL) + 256 )
    {
      ErrorPrintf("*ERROR! ");
      ErrorPrintf("stack over, size = %d", v6);
      ErrorPrintf(" *\n");
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 218);
    }
    v7 = *(_DWORD *)&(*process)[12];
    v8 = arg[6];
    if ( v7 < v8 )
    {
      ErrorPrintf("*ERROR! ");
      ErrorPrintf("term over pop");
      ErrorPrintf(" *\n");
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 222);
      v7 = *(_DWORD *)&(*process)[12];
      v8 = arg[6];
    }
    v9 = process;
    v10 = (int)(v7 - v8);
    if ( (int)v10 > *(_DWORD *)(*(_DWORD *)v9 + 0x18LL) )
    {
      ErrorPrintf("*ERROR! ");
      ErrorPrintf("term stack over, size = %d", v10);
      ErrorPrintf(" *\n");
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 227);
    }
  }
}
// 4B4DD4: variable 'back_chain' is possibly undefined

