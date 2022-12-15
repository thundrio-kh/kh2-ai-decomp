---
---
---
name: trap_sheet_add_munny
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
syscall 1, 280 ; trap_sheet_add_munny (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall Tz::Munny::Add(u_int num)
/----- (000000000050A9C0) ----------------------------------------------------
void __fastcall YS::trap_sheet_add_munny(BD_VALUE_21 *args)
{
  *(_DWORD *)args = Tz::Munny::Add(*(_DWORD *)args);
}
->
/----- (0000000000379AC0) ----------------------------------------------------
__int64 __fastcall Tz::Munny::Add(u_int num)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  unsigned int v7; // r3
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r7
  __int64 v12; // r6
  __int64 v13; // r5
  __int64 v14; // r4

  if ( getSaveRam()->System.Munnies + num > 0xF423F )
  {
    printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\tozawa\\munny.cpp", 96LL, v6, v5, v4, v3, v2);
    printf((unsigned int)"Munny counter stop!!\n", v14, v13, v12, v11, v10, v9, v8);
    getSaveRam()->System.Munnies = 999999;
  }
  else
  {
    v7 = (unsigned int)getSaveRam();
    *(_DWORD *)(v7 + 9280) += num;
  }
  return getSaveRam()->System.Munnies;
}
// 379B28: variable 'v6' is possibly undefined
// 379B28: variable 'v5' is possibly undefined
// 379B28: variable 'v4' is possibly undefined
// 379B28: variable 'v3' is possibly undefined
// 379B28: variable 'v2' is possibly undefined
// 379B38: variable 'v14' is possibly undefined
// 379B38: variable 'v13' is possibly undefined
// 379B38: variable 'v12' is possibly undefined
// 379B38: variable 'v11' is possibly undefined
// 379B38: variable 'v10' is possibly undefined
// 379B38: variable 'v9' is possibly undefined
// 379B38: variable 'v8' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

