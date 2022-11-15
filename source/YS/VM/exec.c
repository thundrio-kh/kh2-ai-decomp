/----- (00000000004B5770) ----------------------------------------------------
__int64 __fastcall YS::VM::exec(YS::VM_377 *const this, YS::VM_377 *current)
{
  __int128 v2; // r28
  int v3; // r3
  int v4; // r5
  int v5; // r3
  YS::VM_377 *v6; // r31
  YS::VM_377 *v7; // r30
  int v8; // r29
  unsigned __int64 v9; // r5
  unsigned __int64 v10; // r3
  __int64 result; // r3
  __int64 back_chain; // [sp+0h] [-C0h]

  v2 = (unsigned __int64)this;
  v3 = *(_DWORD *)&(*this)[28];
  *(_DWORD *)(v2 + 60) = 0;
  if ( (v3 & 2) == 0 )
  {
    v4 = (int)current;
    YS::Executing = (void *__ptr32)v2;
    if ( !(_DWORD)current )
      v4 = v2;
    YS::VM::Current = (void *__ptr32)v4;
    if ( !*(_DWORD *)(v2 + 4) )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "Process.pc != 0",
        "common",
        "C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp",
        252LL,
        "exec",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 252);
    }
    v5 = BdExecVM(
           (BD_PROCESS_412 *)v2,
           (BD_TRAP_5 **)&YS::TrapTable,
           (BD_DEBUG_FUNC)&YS::VM::Debugger,
           (unsigned int *)v2);
    YS::Executing = (void *__ptr32)DWORD1(v2);
    YS::VM::Current = (void *__ptr32)DWORD1(v2);
    if ( v5 != 1 )
      YS::VM::end((YS::VM_377 *const)v2);
  }
  v6 = (YS::VM_377 *)*(unsigned int *)(v2 + 44);
  if ( (_DWORD)v6 )
  {
    do
    {
      v7 = (YS::VM_377 *)*(unsigned int *)(unsigned int)((_DWORD)v6 + 40);
      if ( YS::VM::exec(v6, (YS::VM_377 *)v2) )
      {
        v8 = *(_DWORD *)(v2 + 44);
        if ( (_DWORD)v6 == v8 )
        {
          v8 = DWORD1(v2);
          *(_DWORD *)(v2 + 44) = *(_DWORD *)(unsigned int)((_DWORD)v6 + 40);
        }
        else
        {
          while ( 1 )
          {
            v9 = (unsigned int)(v8 + 40);
            if ( *(_DWORD *)v9 == (_DWORD)v6 )
              break;
            v8 = *(_DWORD *)v9;
            if ( !*(_DWORD *)v9 )
            {
              ErrorPrintf(
                "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
                "prev != NULL",
                "common",
                "../yasui/list.h",
                131LL,
                "unlink",
                (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
              ErrorRaise();
              Axa::AxaAssert("../yasui/list.h", 131);
            }
          }
          *(_DWORD *)v9 = *(_DWORD *)(unsigned int)((_DWORD)v6 + 40);
        }
        if ( (_DWORD)v6 == *(_DWORD *)(v2 + 48) )
          *(_DWORD *)(v2 + 48) = v8;
        *(_DWORD *)(unsigned int)((_DWORD)v6 + 40) = DWORD1(v2);
        if ( (_DWORD)v6 )
        {
          YS::VM::~VM(v6);
          v10 = (unsigned int)YS::Allocator;
          if ( !YS::Allocator )
          {
            ErrorPrintf(
              "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
              "Allocator != NULL",
              "common",
              "C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp",
              74LL,
              "operator delete",
              (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
            ErrorRaise();
            Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 74);
            v10 = (unsigned int)YS::Allocator;
          }
          ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v10 + 0xCLL))();
        }
      }
      v6 = v7;
    }
    while ( (_DWORD)v7 );
  }
  if ( (*(_DWORD *)(v2 + 28) & 2) == 0 || *(_DWORD *)(v2 + 44) )
    result = *(_QWORD *)&v2;
  else
    result = 1LL;
  return result;
}
// 4B57EC: variable 'back_chain' is possibly undefined
// 79B478: using guessed type __int64 (__fastcall *__ptr32 YS::VM::Debugger)(YS::VM *__hidden this, _BD_PROCESS *, BD_STATUS, void *);
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;
// 7FE860: using guessed type void *__ptr32 YS::Executing;
// 7FEBAC: using guessed type __int64 (__fastcall *__ptr32 *__ptr32 *__ptr32 YS::TrapTable)(YS *__hidden this, BD_VALUE *);
// 2AB0580: using guessed type int YS::Allocator;

