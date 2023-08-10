---
---
---
name: trap_signal_hook
---
---
---
category: system
---
---
---
documentation level: untested
---
---
---
push signal ; (int) (Signal to hook)
push arg ; (int) (Argument to hook signal with)
syscall 1, 273 ; trap_signal_hook (2 in, 0 out)
---
---
---
description: Perform a signal hook
---
---
---
decompiled code:
YS::SIGNAL_HOOK_0 *__fastcall YS::SIGNAL_HOOK::Add(int signal, int arg)
/----- (00000000005076A0) ----------------------------------------------------
void __fastcall YS::trap_signal_hook(BD_VALUE_21 *args)
{
  (*YS::SIGNAL_HOOK::Add(*(_DWORD *)args, *(_DWORD *)&(*args)[4]))[48] = 1;
}
->
/----- (000000000049CC28) ----------------------------------------------------
YS::SIGNAL_HOOK_0 *__fastcall YS::SIGNAL_HOOK::Add(int signal, int arg)
{
  int v2; // r9
  __int64 v3; // r29
  int *v6; // r5
  int v7; // r8
  YS::SIGNAL_HOOK_0 *result; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = 0;
  v3 = 0LL;
  v6 = YS::Hook;
  v7 = 0;
  do
  {
    if ( YS::Hook[v7] == signal && dword_2AACC04[v7] == arg )
      return (YS::SIGNAL_HOOK_0 *)((unsigned int)YS::Hook + 88 * v2);
    if ( *(int *)(unsigned int)v6 < 0 )
      v3 = (unsigned int)v6;
    ++v2;
    LODWORD(v6) = (_DWORD)v6 + 88;
    v7 += 22;
  }
  while ( v2 < 16 );
  if ( !(_DWORD)v3 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "hook != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\signalhook.cpp",
      73LL,
      "Add",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\signalhook.cpp", 73);
  }
  if ( (_DWORD)v3 )
    YS::SIGNAL_HOOK::SIGNAL_HOOK((YS::SIGNAL_HOOK_0 *const)v3);
  *(_DWORD *)v3 = signal;
  result = (YS::SIGNAL_HOOK_0 *)v3;
  *(_DWORD *)(v3 + 4) = arg;
  return result;
}
// 49CCDC: variable 'back_chain' is possibly undefined
// 2AACC00: using guessed type int YS::Hook[];
// 2AACC04: using guessed type int dword_2AACC04[];


---
---
---
appears in:

---
---
---
example usage from NA

