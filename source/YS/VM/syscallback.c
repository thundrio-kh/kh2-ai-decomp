/----- (00000000004B5AA8) ----------------------------------------------------
void __fastcall YS::VM::syscallback(YS::VM_377 *const this, int pc, BD_VALUE_0 *args, int argc, YS::VM_377 *current)
{
  void *__ptr32 v10; // r29
  void *__ptr32 v11; // r30
  YS::VM_377 *v12; // r24
  int v13; // r31
  YS::VM_377 *v14; // r4
  int v15; // r3
  unsigned __int64 v16; // r24
  __int64 back_chain; // [sp+0h] [-F0h]
  int v18[16]; // [sp+70h] [-80h] BYREF

  YS::VM::VM(
    (YS::VM_377 *const)v18,
    (unsigned int *)(*this)[0],
    (YS::VM::WORK_0 *)*(unsigned int *)&(*this)[52],
    (YS::OBJ_175 *)*(unsigned int *)&(*this)[56]);
  v10 = YS::Executing;
  v11 = YS::VM::Current;
  v18[7] |= 1u;
  if ( pc > 0 )
  {
    v12 = current;
    v13 = v18[3];
    BdCallVM((BD_PROCESS_412 *)v18, pc, (BD_VALUE_18 *)args, argc);
    v14 = v12;
    if ( !(_DWORD)v12 )
      v14 = this;
    v15 = YS::VM::exec((YS::VM_377 *const)v18, v14);
    v16 = (unsigned int)*(_QWORD *)(back_chain + 16);
    if ( v15 != 1 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "status == STATUS_END",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp",
        183LL,
        "syscallback",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 183);
    }
    if ( v13 != v18[3] )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "tp == vm.Process.tp",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp",
        184LL,
        "syscallback",
        (const void *)v16);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 184);
    }
  }
  YS::Executing = v10;
  YS::VM::Current = v11;
  YS::VM::~VM((YS::VM_377 *const)v18);
}
// 4B5B70: variable 'back_chain' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;
// 7FE860: using guessed type void *__ptr32 YS::Executing;

