---
---
---
name: trap_flare_new
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
syscall 7, 4 ; trap_flare_new (0 in, 1 out)
push flare ; (Ts::FLARE_0 *)
---
---
---
description: Create and allocate a new Flare Force Object
---
---
---
decompiled code:
Ts::FLARE_0 *__cdecl Ts::FLARE::Alloc()
/----- (00000000006233C0) ----------------------------------------------------
void __fastcall Ts::trap_flare_new(BD_VALUE_24 *args)
{
  *(_DWORD *)args = (unsigned int)Ts::FLARE::Alloc();
}
->
/----- (000000000062B0E0) ----------------------------------------------------
Ts::FLARE_0 *__cdecl Ts::FLARE::Alloc()
{
  __int64 v0; // r10
  __int64 v1; // r8
  __int64 v2; // r7
  __int64 v3; // r6
  __int64 v4; // r31
  int v5; // r4
  __int64 v6; // r9
  __int64 v7; // r31
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r7
  __int64 v12; // r6
  __int64 v13; // r5
  __int64 back_chain; // [sp+0h] [-80h]

  v4 = (unsigned int)Ts::FlareList;
  ++Ts::FlareCounter;
  v5 = *(_DWORD *)((unsigned int)Ts::FlareList + 0x7F8LL);
  v6 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !v5 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_full()",
      "common",
      "../yasui/classblock.h",
      40LL,
      "alloc",
      (const void *)v6);
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 40);
    v5 = *(_DWORD *)(v4 + 2040);
  }
  *(_DWORD *)(v4 + 2040) = v5 - 1;
  v7 = (unsigned int)(v4 + (*(_DWORD *)(unsigned int)(v4 + 4 * (v5 - 1) + 1920) << 6));
  if ( (_DWORD)v7 )
  {
    *(_DWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 12) = 1065353216;
    *(_DWORD *)(v7 + 28) = 0;
    *(_DWORD *)(v7 + 40) = 0;
    *(_DWORD *)(v7 + 36) = 0;
    *(_DWORD *)(v7 + 32) = 0;
    *(_DWORD *)(v7 + 44) = 1065353216;
    *(_DWORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 60) = 0;
  }
  printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\sugi\\flare.cpp", 171LL, v3, v2, v1, v6, v0);
  printf((unsigned int)"alloc [%p]\n", v7, v13, v12, v11, v10, v9, v8);
  return (Ts::FLARE_0 *)v7;
}
// 62B114: variable 'back_chain' is possibly undefined
// 62B1F0: variable 'v3' is possibly undefined
// 62B1F0: variable 'v2' is possibly undefined
// 62B1F0: variable 'v1' is possibly undefined
// 62B1F0: variable 'v6' is possibly undefined
// 62B1F0: variable 'v0' is possibly undefined
// 62B204: variable 'v13' is possibly undefined
// 62B204: variable 'v12' is possibly undefined
// 62B204: variable 'v11' is possibly undefined
// 62B204: variable 'v10' is possibly undefined
// 62B204: variable 'v9' is possibly undefined
// 62B204: variable 'v8' is possibly undefined
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
L1573:
 popToSp 0
 pushFromFSp 0
 gosub 4, L1616
 pushFromFSpVal 48
 gosub 4, L1633
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 160 ; trap_target_set_obj (2 in, 0 out)
 syscall 7, 4 ; trap_flare_new (0 in, 1 out)
 popToSpVal 80
 pushFromFSpVal 80
 gosub 4, L1633
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 7, 9 ; trap_flare_set_target (2 in, 0 out)
 pushFromFSpVal 80
 pushImmf 60
 pushImmf 60
 syscall 7, 7 ; trap_flare_set_radius (3 in, 0 out)
 ret 
