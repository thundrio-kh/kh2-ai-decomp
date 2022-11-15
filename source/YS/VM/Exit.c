/----- (00000000004B615C) ----------------------------------------------------
void __cdecl YS::VM::Exit()
{
  __int64 back_chain; // [sp+0h] [-80h]

  YS::VM::ExecDestroy();
  if ( YS::Counter )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Counter == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp",
      53LL,
      "Exit",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 53);
  }
  YS::Allocator = SystemTask;
}
// 4B617C: variable 'back_chain' is possibly undefined
// 84CAC0: using guessed type int SystemTask;
// 2AB0580: using guessed type int YS::Allocator;
// 2AB0584: using guessed type int YS::Counter;

