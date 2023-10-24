---
---
---
name: trap_flare_free
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
push flare ; (Ts::FLARE_0 *)  (Flare Force object)
syscall 7, 5 ; trap_flare_free (1 in, 0 out)
---
---
---
description: Free memory associated with Flare Force
---
---
---
decompiled code:
void __fastcall Ts::FLARE::Free(Ts::FLARE_0 *flare, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000006233F4) ----------------------------------------------------
void __fastcall Ts::trap_flare_free(BD_VALUE_24 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  Ts::FLARE::Free((Ts::FLARE_0 *)(*args)[0], a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (000000000062B228) ----------------------------------------------------
void __fastcall Ts::FLARE::Free(Ts::FLARE_0 *flare, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r7
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 v15; // r5
  int v16; // r29
  unsigned __int64 v17; // r30
  int v18; // r31
  unsigned __int64 v19; // r3
  int v20; // r5
  __int64 back_chain; // [sp+0h] [-90h]

  v9 = (unsigned int)Ts::FlareCounter-- - 1LL;
  printf(
    (unsigned int)"[%s:%d]",
    (__int64)"C:\\hd25\\kingdom2\\sugi\\flare.cpp",
    179LL,
    (__int64)&unk_3EB0000,
    v9,
    a6,
    a7,
    a8);
  printf((unsigned int)"free [%p]\n", (__int64)flare, v15, v14, v13, v12, v11, v10);
  v16 = Ts::FlareList;
  v17 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( *(_DWORD *)((unsigned int)Ts::FlareList + 0x7F8LL) == 30 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_empty()",
      "common",
      "../yasui/classblock.h",
      44LL,
      "free",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 44);
  }
  v18 = ((int)flare - v16) / 64;
  if ( v18 < 0 || v18 >= 30 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "idx >= 0 && idx < size",
      "common",
      "../yasui/classblock.h",
      46LL,
      "free",
      (const void *)v17);
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 46);
  }
  v19 = (unsigned int)(v16 + 2040);
  v20 = v16 + 4 * (*(_DWORD *)v19)++;
  *(_DWORD *)(unsigned int)(v20 + 1920) = v18;
}
// 62B280: variable 'v15' is possibly undefined
// 62B280: variable 'v14' is possibly undefined
// 62B280: variable 'v13' is possibly undefined
// 62B280: variable 'v12' is possibly undefined
// 62B280: variable 'v11' is possibly undefined
// 62B280: variable 'v10' is possibly undefined
// 62B294: variable 'back_chain' is possibly undefined
// 3EAD990: using guessed type int Ts::FlareList;
// 3EAD994: using guessed type int Ts::FlareCounter;


---
---
---
appears in:
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
---
---
---
example usage from limit\donald2\limi.bdscript
L4019:
 popToSp 0
 pushFromFSpVal 80
 syscall 7, 5 ; trap_flare_free (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L4008
 ret 
