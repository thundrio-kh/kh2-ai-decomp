/----- (00000000004B5FF8) ----------------------------------------------------
void __cdecl YS::VM::ExecDestroy()
{
  unsigned int v0; // r5
  YS::VM_377 *v1; // r24
  YS::VM_377 *v2; // r25
  unsigned __int64 v3; // r3
  __int64 back_chain; // [sp+0h] [-B0h]

  v0 = YS::DestroyList;
  v1 = (YS::VM_377 *)(unsigned int)YS::DestroyList;
  if ( YS::DestroyList )
  {
    do
    {
      v2 = (YS::VM_377 *)v0;
      if ( (_DWORD)v1 )
        v2 = (YS::VM_377 *)*(unsigned int *)(unsigned int)((_DWORD)v1 + 40);
      if ( (_DWORD)v1 )
      {
        YS::VM::~VM(v1);
        v3 = (unsigned int)YS::Allocator;
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
          v3 = (unsigned int)YS::Allocator;
        }
        ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)v3 + 0xCLL))();
        v0 = YS::DestroyList;
      }
      v1 = v2;
    }
    while ( (_DWORD)v2 );
  }
  dword_2AB058C = 0;
  YS::DestroyList = 0;
}
// 4B6094: variable 'back_chain' is possibly undefined
// 2AB0580: using guessed type int YS::Allocator;
// 2AB0588: using guessed type int YS::DestroyList;
// 2AB058C: using guessed type int dword_2AB058C;

