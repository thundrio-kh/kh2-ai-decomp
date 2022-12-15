---
---
---
name: trap_effect_fadeout
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
syscall 0, 52 ; trap_effect_fadeout (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall ryj::EFFECT::fadeout_free(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, double frame)
/----- (00000000004B8970) ----------------------------------------------------
void __fastcall YS::trap_effect_fadeout(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  if ( *(_DWORD *)&(*args)[8] )
    ryj::EFFECT::fadeout_kill(
      (ryj::EFFECT_144 *const)(*args)[0],
      *(unsigned int *)args,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      *(float *)&(*args)[4]);
  else
    ryj::EFFECT::fadeout_free(
      (ryj::EFFECT_144 *const)(*args)[0],
      *(unsigned int *)args,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      *(float *)&(*args)[4]);
}
->
/----- (00000000002B1F90) ----------------------------------------------------
void __fastcall ryj::EFFECT::fadeout_free(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, double frame)
{
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  __int64 v15; // r6
  __int64 v16; // r5
  __int64 v17; // r4
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r7
  __int64 v22; // r6
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r7
  __int64 v27; // r6
  __int64 v28; // r5
  __int64 v29; // r4
  double v30; // fp1

  if ( !(_DWORD)this )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 844);
  if ( *(_DWORD *)&(*this)[4] >= 5u )
  {
    printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 846LL, a4, a5, a6, a7, a8);
    printf((unsigned int)"\x1B[31m** WARNING! ", v17, v16, v15, v14, v13, v12, v11);
    printf(
      (unsigned int)"EFFECT::is_valid(): %p is not valid. %x\n",
      (__int64)this,
      *(unsigned int *)&(*this)[4],
      v22,
      v21,
      v20,
      v19,
      v18);
    printf((unsigned int)" **\x1B[00m\n", v29, v28, v27, v26, v25, v24, v23);
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 593);
  }
  if ( frame <= 0.0 )
  {
    ryj::EFFECT::free(this, a2, a3, a4, a5, a6, a7, a8);
  }
  else
  {
    v30 = (float)(*(float *)&(*this)[32] / (float)frame);
    *(_DWORD *)&(*this)[8] |= 0x20000u;
    *(float *)&(*this)[36] = -v30;
  }
}
// 2B1FF0: variable 'a4' is possibly undefined
// 2B1FF0: variable 'a5' is possibly undefined
// 2B1FF0: variable 'a6' is possibly undefined
// 2B1FF0: variable 'a7' is possibly undefined
// 2B1FF0: variable 'a8' is possibly undefined
// 2B2000: variable 'v17' is possibly undefined
// 2B2000: variable 'v16' is possibly undefined
// 2B2000: variable 'v15' is possibly undefined
// 2B2000: variable 'v14' is possibly undefined
// 2B2000: variable 'v13' is possibly undefined
// 2B2000: variable 'v12' is possibly undefined
// 2B2000: variable 'v11' is possibly undefined
// 2B2018: variable 'v22' is possibly undefined
// 2B2018: variable 'v21' is possibly undefined
// 2B2018: variable 'v20' is possibly undefined
// 2B2018: variable 'v19' is possibly undefined
// 2B2018: variable 'v18' is possibly undefined
// 2B2028: variable 'v29' is possibly undefined
// 2B2028: variable 'v28' is possibly undefined
// 2B2028: variable 'v27' is possibly undefined
// 2B2028: variable 'v26' is possibly undefined
// 2B2028: variable 'v25' is possibly undefined
// 2B2028: variable 'v24' is possibly undefined
// 2B2028: variable 'v23' is possibly undefined
// 2B207C: variable 'a2' is possibly undefined
// 2B207C: variable 'a3' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

