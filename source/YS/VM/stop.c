/----- (00000000004B5D18) ----------------------------------------------------
void __fastcall YS::VM::stop(YS::VM_377 *const this, int mask, int match)
{
  __int64 v6; // r27
  __int64 v7; // r28
  int v8; // r21
  unsigned __int64 v9; // r7
  unsigned __int64 v10; // r3
  __int64 back_chain; // [sp+0h] [-D0h]

  v6 = *(unsigned int *)&(*this)[44];
  if ( (_DWORD)v6 )
  {
    do
    {
      v7 = *(unsigned int *)(unsigned int)(v6 + 40);
      if ( (*(_DWORD *)(v6 + 32) & mask) == match )
      {
        v8 = *(_DWORD *)&(*this)[44];
        if ( (_DWORD)v6 == v8 )
        {
          v8 = 0;
          *(_DWORD *)&(*this)[44] = *(_DWORD *)(unsigned int)(v6 + 40);
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
          *(_DWORD *)v9 = *(_DWORD *)(unsigned int)(v6 + 40);
        }
        if ( (_DWORD)v6 == *(_DWORD *)&(*this)[48] )
          *(_DWORD *)&(*this)[48] = v8;
        *(_DWORD *)(unsigned int)(v6 + 40) = 0;
        if ( (_DWORD)v6 )
        {
          YS::VM::~VM((YS::VM_377 *const)v6);
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
}
// 4B5DF0: variable 'back_chain' is possibly undefined
// 2AB0580: using guessed type int YS::Allocator;

