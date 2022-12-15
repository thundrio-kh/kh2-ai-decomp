---
---
---
name: trap_obj_thread_start
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
push unk5 ; (unknown) 
syscall 1, 82 ; trap_obj_thread_start (5 in, 1 out)
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
/----- (0000000000505C64) ----------------------------------------------------
void __fastcall YS::trap_obj_thread_start(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  int v5; // r29
  YS::VM_377 *v6; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)(v2 + 4);
  if ( !*(_DWORD *)(v4 + 1156) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj->Vm != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      502LL,
      "trap_obj_thread_start",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 502);
  }
  v5 = *(_DWORD *)&(*args)[4];
  if ( v5 )
    YS::VM::stop((YS::VM_377 *const)*(unsigned int *)(v4 + 1156), *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[4]);
  v6 = YS::VM::start(
         (YS::VM_377 *const)*(unsigned int *)(v4 + 1156),
         v5,
         *(_DWORD *)&(*args)[8],
         (BD_VALUE_0 *)(unsigned int)((_DWORD)args + 16),
         1);
  *(_DWORD *)&(*v6)[36] = *(_DWORD *)&(*args)[12];
  *(_DWORD *)args = (_DWORD)v6;
}
// 505C88: variable 'back_chain' is possibly undefined

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

