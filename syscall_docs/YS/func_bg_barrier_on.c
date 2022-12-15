---
---
---
name: func_bg_barrier_on
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
syscall 1, 46 ; func_bg_barrier_on (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::BARRIER::AllOn()
/----- (00000000005038D4) ----------------------------------------------------
void __fastcall YS::func_bg_barrier_on(BD_VALUE_21 *args)
{
  YS::BARRIER::AllOn();
}
->
/----- (000000000050D810) ----------------------------------------------------
void __cdecl YS::BARRIER::AllOn()
{
  __int64 v0; // r10
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // r7
  __int64 v4; // r6
  __int64 v5; // r27
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r7

  v5 = 0LL;
  do
  {
    if ( (YS::AREADATA::BarrierFlag & (1LL << v5)) != 0 )
    {
      printf(
        (unsigned int)"[%s:%d]",
        (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\barrier.cpp",
        21LL,
        v4,
        v3,
        v2,
        v1,
        v0);
      printf((unsigned int)"%s = %d(0x%x)\n", (__int64)"i", v5, v5, v9, v8, v7, v6);
      dk::Map::setVisibleGroup(v5);
    }
    v5 = (int)v5 + 1;
  }
  while ( (int)v5 < 64 );
}
// 50D87C: variable 'v4' is possibly undefined
// 50D87C: variable 'v3' is possibly undefined
// 50D87C: variable 'v2' is possibly undefined
// 50D87C: variable 'v1' is possibly undefined
// 50D87C: variable 'v0' is possibly undefined
// 50D894: variable 'v9' is possibly undefined
// 50D894: variable 'v8' is possibly undefined
// 50D894: variable 'v7' is possibly undefined
// 50D894: variable 'v6' is possibly undefined
// C78110: using guessed type __int64 YS::AREADATA::BarrierFlag;


---
---
---
appears in:

---
---
---
example usage from NA

