---
---
---
name: trap_thread_start
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown) 
push unk2 ; (unknown) 
push unk3 ; (unknown) 
push unk4 ; (unknown) 
syscall 0, 9 ; trap_thread_start (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::VM::stop(YS::VM_377 *const this, int mask, int match)
YS::VM_377 *__fastcall YS::VM::Start(unsigned int *code, YS::OBJ_175 *owner)
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

//COMPLICATED YS::VM::stop YS::VM::start
->
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


->
/----- (00000000004B5F58) ----------------------------------------------------
YS::VM_377 *__fastcall YS::VM::Start(unsigned int *code, YS::OBJ_175 *owner)
{
  YS::VM_377 *v4; // r28
  YS::VM_377 *v5; // r3
  YS::VM_377 *v6; // r29

  v4 = 0LL;
  v5 = (YS::VM_377 *)YS::VM::operator new(0x40u);
  v6 = v5;
  if ( (_DWORD)v5 )
  {
    YS::VM::VM(v5, code, 0LL, owner);
    v4 = v6;
  }
  return v4;
}


---
---
---
appears in:

---
---
---
example usage from NA

