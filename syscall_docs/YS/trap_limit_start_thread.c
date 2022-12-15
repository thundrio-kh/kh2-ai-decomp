---
---
---
name: trap_limit_start_thread
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
syscall 2, 54 ; trap_limit_start_thread (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
YS::VM_309 *__fastcall YS::LIMIT::StartThread(int pc, BD_VALUE_7 *args, int argc)
/----- (00000000004F544C) ----------------------------------------------------
void __fastcall YS::trap_limit_start_thread(BD_VALUE_19 *args)
{
  YS::LIMIT::StartThread(*(_DWORD *)args, (BD_VALUE_7 *)(unsigned int)((_DWORD)args + 4), 1);
}
->
/----- (0000000000440BD0) ----------------------------------------------------
YS::VM_309 *__fastcall YS::LIMIT::StartThread(int pc, BD_VALUE_7 *args, int argc)
{
  __int64 v6; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v6 = (unsigned int)YS::Limit;
  if ( !YS::Limit )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Limit != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\limit.cpp",
      555LL,
      "StartThread",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\limit.cpp", 555);
    v6 = (unsigned int)YS::Limit;
  }
  return YS::VM::start((YS::VM_377 *const)*(unsigned int *)(v6 + 52), 0, pc, (BD_VALUE_0 *)args, argc);
}
// 440C00: variable 'back_chain' is possibly undefined
// 2A9D718: using guessed type int YS::Limit;


---
---
---
appears in:

---
---
---
example usage from NA

