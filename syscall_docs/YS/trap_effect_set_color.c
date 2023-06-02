---
---
---
name: trap_effect_set_color
---
---
---
category: effect
---
---
---
documentation level: untested
---
---
---
push effect ; (ryj::EFFECT_144 *) (an effect object)
push color_vector ; (kn::FVector *)  (probably r,g,b,a color vector)
syscall 0, 67 ; trap_effect_set_color (2 in, 0 out)
---
---
---
description: Sets the color of an effect
---
---
---
decompiled code:
FVECTOR *__fastcall ryj::EFFECT::color(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B8BBC) ----------------------------------------------------
void __fastcall YS::trap_effect_set_color(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  kn::FVector *v9; // r3

  v9 = (kn::FVector *)ryj::EFFECT::color((ryj::EFFECT_144 *const)(*args)[0], a2, a3, a4, a5, a6, a7, a8);
  kn::FVector::operator=(v9, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
->
/----- (00000000002B1794) ----------------------------------------------------
FVECTOR *__fastcall ryj::EFFECT::color(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 455);
  }
  if ( !ryj::EFFECT::is_active(this, a2, a3, a4, a5, a6, a7, a8) )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 458);
  return pppPartMngGetCol((unsigned int *)*(unsigned int *)&(*this)[28]);
}
// 2B17EC: variable 'a4' is possibly undefined
// 2B17EC: variable 'a5' is possibly undefined
// 2B17EC: variable 'a6' is possibly undefined
// 2B17EC: variable 'a7' is possibly undefined
// 2B17EC: variable 'a8' is possibly undefined
// 2B17FC: variable 'v15' is possibly undefined
// 2B17FC: variable 'v14' is possibly undefined
// 2B17FC: variable 'v13' is possibly undefined
// 2B17FC: variable 'v12' is possibly undefined
// 2B17FC: variable 'v11' is possibly undefined
// 2B17FC: variable 'v10' is possibly undefined
// 2B17FC: variable 'v9' is possibly undefined
// 2B1814: variable 'v20' is possibly undefined
// 2B1814: variable 'v19' is possibly undefined
// 2B1814: variable 'v18' is possibly undefined
// 2B1814: variable 'v17' is possibly undefined
// 2B1814: variable 'v16' is possibly undefined
// 2B1824: variable 'v27' is possibly undefined
// 2B1824: variable 'v26' is possibly undefined
// 2B1824: variable 'v25' is possibly undefined
// 2B1824: variable 'v24' is possibly undefined
// 2B1824: variable 'v23' is possibly undefined
// 2B1824: variable 'v22' is possibly undefined
// 2B1824: variable 'v21' is possibly undefined
// 2B1840: variable 'a2' is possibly undefined
// 2B1840: variable 'a3' is possibly undefined


---
---
---
appears in:
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
---
---
---
example usage from obj\B_AL110\b_al.bdscript
L3409:
 pushFromFSp 56
 pushFromFSp 52
 addf 
 popToSp 56
 pushFromFSp 52
 pushImmf 0.0005
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 addf 
 popToSp 52
 pushFromPSpVal 32
 pushFromPSpVal 96
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushImmf 0.087266
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 mulf 
 syscall 0, 83 ; trap_vector_rot (3 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSpVal 96
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSpVal 16, 32
 pushFromPSpVal 32
 pushFromPSpVal 96
 pushFromFSp 56
 syscall 0, 78 ; trap_vector_inter (3 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSpVal 16, 32
 pushFromFSp 0
 pushFromPSpVal 32
 gosub 20, L2628
 pushFromPSp 32
 pushImm 12
 add 
 pushImmf 1
 pushFromFSp 56
 pushImmf 2
 mulf 
 gosub 20, L3554
 memcpy 0
 pushFromFSpVal 64
 pushFromPSp 32
 syscall 0, 67 ; trap_effect_set_color (2 in, 0 out)
 pushFromFSp 48
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 addf 
 popToSp 48
 halt 
 jmp L3349
