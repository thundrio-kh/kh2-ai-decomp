---
---
---
name: trap_effect_pause
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
push unk1 ; (unknown)  (pushFromFSpVal: 0,64)
push unk2 ; (unknown)  (pushImm: 1) (pushFromFSp: 4)
syscall 0, 66 ; trap_effect_pause (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall ryj::EFFECT::stop(ryj::EFFECT_144 *const this, bool b, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B8B84) ----------------------------------------------------
void __fastcall YS::trap_effect_pause(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::EFFECT::stop(
    (ryj::EFFECT_144 *const)(*args)[0],
    (_cntlzw(*(_DWORD *)&(*args)[4]) & 0x20) == 0,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8);
}
->
/----- (00000000002B1884) ----------------------------------------------------
void __fastcall ryj::EFFECT::stop(ryj::EFFECT_144 *const this, bool b, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 v15; // r5
  __int64 v16; // r4
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r7
  __int64 v21; // r6
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r7
  __int64 v26; // r6
  __int64 v27; // r5
  __int64 v28; // r4
  unsigned int v29; // r4

  if ( !(_DWORD)this )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 844);
  if ( *(_DWORD *)&(*this)[4] >= 5u )
  {
    printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 846LL, a4, a5, a6, a7, a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v16, v15, v14, v13, v12, v11, v10);
    printf(
      (unsigned int)"EFFECT::is_valid(): %p is not valid. %x\n",
      (__int64)this,
      *(unsigned int *)&(*this)[4],
      v21,
      v20,
      v19,
      v18,
      v17);
    printf((unsigned int)" **\x1B[00m\n", v28, v27, v26, v25, v24, v23, v22);
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 468);
  }
  if ( b )
    v29 = *(_DWORD *)&(*this)[8] | 0x200000;
  else
    v29 = *(_DWORD *)&(*this)[8] & 0xFFDFFFFF;
  *(_DWORD *)&(*this)[8] = v29;
}
// 2B18E4: variable 'a4' is possibly undefined
// 2B18E4: variable 'a5' is possibly undefined
// 2B18E4: variable 'a6' is possibly undefined
// 2B18E4: variable 'a7' is possibly undefined
// 2B18E4: variable 'a8' is possibly undefined
// 2B18F4: variable 'v16' is possibly undefined
// 2B18F4: variable 'v15' is possibly undefined
// 2B18F4: variable 'v14' is possibly undefined
// 2B18F4: variable 'v13' is possibly undefined
// 2B18F4: variable 'v12' is possibly undefined
// 2B18F4: variable 'v11' is possibly undefined
// 2B18F4: variable 'v10' is possibly undefined
// 2B190C: variable 'v21' is possibly undefined
// 2B190C: variable 'v20' is possibly undefined
// 2B190C: variable 'v19' is possibly undefined
// 2B190C: variable 'v18' is possibly undefined
// 2B190C: variable 'v17' is possibly undefined
// 2B191C: variable 'v28' is possibly undefined
// 2B191C: variable 'v27' is possibly undefined
// 2B191C: variable 'v26' is possibly undefined
// 2B191C: variable 'v25' is possibly undefined
// 2B191C: variable 'v24' is possibly undefined
// 2B191C: variable 'v23' is possibly undefined
// 2B191C: variable 'v22' is possibly undefined


---
---
---
appears in:
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
---
---
---
example usage from obj\B_EX100\b_ex.bdscript
L1827:
 pushFromFSpVal 64
 pushImm 1
 syscall 0, 66 ; trap_effect_pause (2 in, 0 out)
 pushImmf 120
 gosub 20, L1474
 pushFromFSpVal 64
 pushImmf 12
 gosub 20, L1940
