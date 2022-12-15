---
---
---
name: trap_effect_kill
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
syscall 0, 51 ; trap_effect_kill (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall ryj::EFFECT::kill(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B88B8) ----------------------------------------------------
void __fastcall YS::trap_effect_kill(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::EFFECT_144 *v9; // r3
  unsigned __int64 v10; // r30
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  __int64 v15; // r6
  __int64 v16; // r5
  __int64 v17; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v9 = (ryj::EFFECT_144 *)(*args)[0];
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 || !(unsigned int)ryj::EFFECT::is_valid(v9, back_chain, a3, a4, a5, a6, a7, a8) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL && TOEFFECT(args[0].p)->is_valid()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      473LL,
      "trap_effect_kill",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 473);
  }
  ryj::EFFECT::kill((ryj::EFFECT_144 *const)(*args)[0], v17, v16, v15, v14, v13, v12, v11);
}
// 4B88D8: variable 'back_chain' is possibly undefined
// 4B8950: variable 'v17' is possibly undefined
// 4B8950: variable 'v16' is possibly undefined
// 4B8950: variable 'v15' is possibly undefined
// 4B8950: variable 'v14' is possibly undefined
// 4B8950: variable 'v13' is possibly undefined
// 4B8950: variable 'v12' is possibly undefined
// 4B8950: variable 'v11' is possibly undefined
->
/----- (00000000002B209C) ----------------------------------------------------
void __fastcall ryj::EFFECT::kill(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
  unsigned int *v28; // r3

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
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 610);
  }
  v28 = (unsigned int *)*(unsigned int *)&(*this)[28];
  *(_DWORD *)&(*this)[8] |= 0x10001u;
  if ( (_DWORD)v28 )
  {
    pppFreeParticle(v28);
    pppDeleteMng((unsigned int *)*(unsigned int *)&(*this)[28]);
    *(_DWORD *)&(*this)[28] = 0;
  }
}
// 2B20F4: variable 'a4' is possibly undefined
// 2B20F4: variable 'a5' is possibly undefined
// 2B20F4: variable 'a6' is possibly undefined
// 2B20F4: variable 'a7' is possibly undefined
// 2B20F4: variable 'a8' is possibly undefined
// 2B2104: variable 'v15' is possibly undefined
// 2B2104: variable 'v14' is possibly undefined
// 2B2104: variable 'v13' is possibly undefined
// 2B2104: variable 'v12' is possibly undefined
// 2B2104: variable 'v11' is possibly undefined
// 2B2104: variable 'v10' is possibly undefined
// 2B2104: variable 'v9' is possibly undefined
// 2B211C: variable 'v20' is possibly undefined
// 2B211C: variable 'v19' is possibly undefined
// 2B211C: variable 'v18' is possibly undefined
// 2B211C: variable 'v17' is possibly undefined
// 2B211C: variable 'v16' is possibly undefined
// 2B212C: variable 'v27' is possibly undefined
// 2B212C: variable 'v26' is possibly undefined
// 2B212C: variable 'v25' is possibly undefined
// 2B212C: variable 'v24' is possibly undefined
// 2B212C: variable 'v23' is possibly undefined
// 2B212C: variable 'v22' is possibly undefined
// 2B212C: variable 'v21' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

