/----- (00000000004B6A9C) ----------------------------------------------------
void __cdecl YS::VMCOMMON::NewGame()
{
  YS::VM_377 *v0; // r31
  __int64 back_chain; // [sp+0h] [-80h]

  YS::VM::Init((ALLOCATOR_770 *)(unsigned int)SystemTask);
  v0 = YS::VM::Start((unsigned int *)(unsigned int)YS::CommonBdx, 0LL);
  YS::VM::call(v0, 7, 0LL, 0);
  if ( (unsigned int)YS::VM::exec(v0, 0LL) != 1 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "status == VM::STATUS_END",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmcommon.cpp",
      39LL,
      "NewGame",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmcommon.cpp", 39);
  }
  if ( (_DWORD)v0 )
  {
    YS::VM::~VM(v0);
    YS::VM::operator delete((unsigned int *)v0);
  }
  YS::VM::Exit();
}
// 4B6B04: variable 'back_chain' is possibly undefined
// 84CAC0: using guessed type int SystemTask;
// 2AB06A8: using guessed type int YS::CommonBdx;

