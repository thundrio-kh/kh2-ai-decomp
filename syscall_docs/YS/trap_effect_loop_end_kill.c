---
---
---
name: trap_effect_loop_end_kill
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
syscall 0, 85 ; trap_effect_loop_end_kill (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall ryj::EFFECT::loop_end_kill(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B8798) ----------------------------------------------------
void __fastcall YS::trap_effect_loop_end_kill(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::EFFECT_144 *v9; // r3
  __int64 v10; // r9
  __int64 v11; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v9 = (ryj::EFFECT_144 *)(*args)[0];
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 || (v11 = (unsigned __int8)v9 & 3, ((unsigned __int8)v9 & 3) != 0) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL && (args[0].i & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      459LL,
      "trap_effect_loop_end_kill",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 459);
    v9 = (ryj::EFFECT_144 *)(*args)[0];
  }
  ryj::EFFECT::loop_end_kill(v9, v11, a3, a4, a5, a6, v10, a8);
}
// 4B87B4: variable 'back_chain' is possibly undefined
// 4B8828: variable 'v11' is possibly undefined
// 4B8828: variable 'a3' is possibly undefined
// 4B8828: variable 'a4' is possibly undefined
// 4B8828: variable 'a5' is possibly undefined
// 4B8828: variable 'a6' is possibly undefined
// 4B8828: variable 'v10' is possibly undefined
// 4B8828: variable 'a8' is possibly undefined
->
/----- (00000000002B1D98) ----------------------------------------------------
void __fastcall ryj::EFFECT::loop_end_kill(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r7
  __int64 v13; // r6
  __int64 v14; // r5
  __int64 v15; // r4
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r7
  __int64 v20; // r6
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r7
  __int64 v25; // r6
  __int64 v26; // r5
  __int64 v27; // r4
  __int64 v28; // r4

  if ( !(_DWORD)this )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 844);
  if ( *(_DWORD *)&(*this)[4] >= 5u )
  {
    printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 846LL, a4, a5, a6, a7, a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v15, v14, v13, v12, v11, v10, v9);
    printf(
      (unsigned int)"EFFECT::is_valid(): %p is not valid. %x\n",
      (__int64)this,
      *(unsigned int *)&(*this)[4],
      v20,
      v19,
      v18,
      v17,
      v16);
    printf((unsigned int)" **\x1B[00m\n", v27, v26, v25, v24, v23, v22, v21);
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 564);
  }
  v28 = *(unsigned int *)&(*this)[8] | 1LL;
  *(_DWORD *)&(*this)[8] = v28;
  if ( !ryj::EFFECT::is_active(this, v28, a3, a4, a5, a6, a7, a8) )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 568);
  pppLoopEnd((unsigned int *)*(unsigned int *)&(*this)[28]);
}
// 2B1DF0: variable 'a4' is possibly undefined
// 2B1DF0: variable 'a5' is possibly undefined
// 2B1DF0: variable 'a6' is possibly undefined
// 2B1DF0: variable 'a7' is possibly undefined
// 2B1DF0: variable 'a8' is possibly undefined
// 2B1E00: variable 'v15' is possibly undefined
// 2B1E00: variable 'v14' is possibly undefined
// 2B1E00: variable 'v13' is possibly undefined
// 2B1E00: variable 'v12' is possibly undefined
// 2B1E00: variable 'v11' is possibly undefined
// 2B1E00: variable 'v10' is possibly undefined
// 2B1E00: variable 'v9' is possibly undefined
// 2B1E18: variable 'v20' is possibly undefined
// 2B1E18: variable 'v19' is possibly undefined
// 2B1E18: variable 'v18' is possibly undefined
// 2B1E18: variable 'v17' is possibly undefined
// 2B1E18: variable 'v16' is possibly undefined
// 2B1E28: variable 'v27' is possibly undefined
// 2B1E28: variable 'v26' is possibly undefined
// 2B1E28: variable 'v25' is possibly undefined
// 2B1E28: variable 'v24' is possibly undefined
// 2B1E28: variable 'v23' is possibly undefined
// 2B1E28: variable 'v22' is possibly undefined
// 2B1E28: variable 'v21' is possibly undefined
// 2B1E50: variable 'a3' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

