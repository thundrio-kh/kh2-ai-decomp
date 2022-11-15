/----- (00000000004B4B7C) ----------------------------------------------------
void __fastcall YS::VM::VM(YS::VM_377 *const this, unsigned int *code, YS::VM::WORK_0 *work, YS::OBJ_175 *owner)
{
  int v5; // r28
  __int64 v6; // r29
  unsigned __int64 v7; // r3
  int v8; // r3
  unsigned __int64 v9; // r4
  int v10; // r3
  _DWORD *v11; // r6
  _DWORD *v12; // r29
  _DWORD *v13; // r3
  int v14; // r4
  int v15; // r5
  __int64 v16; // r4
  __int64 back_chain; // [sp+0h] [-A0h]

  *(_DWORD *)&(*this)[32] = 0;
  v5 = (int)code;
  *(_DWORD *)&(*this)[36] = 0;
  *(_DWORD *)&(*this)[48] = 0;
  *(_DWORD *)(unsigned int)((_DWORD)this + 28) = 0;
  *(_DWORD *)&(*this)[44] = 0;
  *(_DWORD *)&(*this)[52] = (_DWORD)work;
  *(_DWORD *)&(*this)[56] = (_DWORD)owner;
  v6 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (void *__ptr32)this == YS::Executing )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != Executing",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp",
      84LL,
      "VM",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vm.cpp", 84);
  }
  v7 = (unsigned int)YS::Allocator;
  *(_DWORD *)this = v5;
  v8 = ((__int64 (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v7 + 8LL))();
  v9 = (unsigned int)YS::Allocator;
  *(_DWORD *)&(*this)[20] = v8;
  *(_DWORD *)&(*this)[8] = v8;
  v10 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v9 + 8LL))(
          v9,
          (unsigned int)(*(_DWORD *)(*(unsigned int *)this + 0x18LL) + 256),
          v6);
  v11 = (_DWORD *)*(unsigned int *)&(*this)[52];
  *(_DWORD *)&(*this)[24] = v10;
  *(_DWORD *)&(*this)[12] = v10;
  if ( !(_DWORD)v11 && *(int *)(*(unsigned int *)this + 0x10LL) > 0 )
  {
    v12 = 0LL;
    v13 = (_DWORD *)((__int64 (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)(unsigned int)YS::Allocator
                                                                         + 8LL))();
    if ( (_DWORD)v13 )
    {
      v12 = v13;
      *v13 = 0;
    }
    v11 = v12;
    *(_DWORD *)&(*this)[52] = (_DWORD)v12;
  }
  v14 = 0;
  if ( (_DWORD)v11 )
  {
    v14 = (_DWORD)v11 + 16;
    ++*v11;
  }
  v15 = YS::Counter;
  *(_DWORD *)&(*this)[16] = v14;
  *(_DWORD *)&(*this)[4] = 0;
  v16 = *(unsigned int *)&(*this)[56];
  YS::Counter = v15 + 1;
  if ( (_DWORD)v16 )
    ++*(_DWORD *)(v16 + 1160);
}
// 4B4BD8: variable 'back_chain' is possibly undefined
// 7FE860: using guessed type void *__ptr32 YS::Executing;
// 2AB0580: using guessed type int YS::Allocator;
// 2AB0584: using guessed type int YS::Counter;


/----- (00000000004B50AC) ----------------------------------------------------
void __fastcall YS::VM::~VM(YS::VM_377 *const this)
{
  int v2; // r4
  YS::VM_377 *v3; // r24
  YS::VM_377 *v4; // r25
  unsigned __int64 v5; // r3
  int *v6; // r4
  int v7; // r3
  __int64 back_chain; // [sp+0h] [-B0h]

  v2 = *(_DWORD *)&(*this)[36];
  --YS::Counter;
  if ( v2 )
  {
    BdCallVM((BD_PROCESS_412 *)this, v2, 0LL, 0);
    BdExecVM((BD_PROCESS_412 *)this, (BD_TRAP_5 **)&YS::TrapTable, 0LL, 0LL);
  }
  v3 = (YS::VM_377 *)*(unsigned int *)&(*this)[44];
  if ( (_DWORD)v3 )
  {
    do
    {
      v4 = (YS::VM_377 *)*(unsigned int *)(unsigned int)((_DWORD)v3 + 40);
      YS::VM::~VM(v3);
      v5 = (unsigned int)YS::Allocator;
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
        v5 = (unsigned int)YS::Allocator;
      }
      ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v5 + 0xCLL))();
      v3 = v4;
    }
    while ( (_DWORD)v4 );
  }
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)(unsigned int)YS::Allocator + 0xCLL))();
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)(unsigned int)YS::Allocator + 0xCLL))();
  v6 = (int *)*(unsigned int *)&(*this)[52];
  if ( (_DWORD)v6 )
  {
    v7 = *v6 - 1;
    *v6 = v7;
    if ( !v7 )
      ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)(unsigned int)YS::Allocator + 0xCLL))();
  }
  YS::VM::end(this);
}
// 4B517C: variable 'back_chain' is possibly undefined
// 7FEBAC: using guessed type __int64 (__fastcall *__ptr32 *__ptr32 *__ptr32 YS::TrapTable)(YS *__hidden this, BD_VALUE *);
// 2AB0580: using guessed type int YS::Allocator;
// 2AB0584: using guessed type int YS::Counter;

