---
---
---
name: trap_effect_set_rot
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
push effect ; (ryj::EFFECT_144 *)  (An effect object)
push rotation ; (kn::FVector *)  (A rotation vector)
syscall 0, 40 ; trap_effect_set_rot (2 in, 0 out)
---
---
---
description: Sets the rotation of an effect
---
---
---
decompiled code:
FVECTOR *__fastcall ryj::EFFECT::angle(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B8644) ----------------------------------------------------
void __fastcall YS::trap_effect_set_rot(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  kn::FVector *v9; // r3

  v9 = (kn::FVector *)ryj::EFFECT::angle((ryj::EFFECT_144 *const)(*args)[0], a2, a3, a4, a5, a6, a7, a8);
  kn::FVector::operator=(v9, (const ryj::EFFECT_144 *)*(unsigned int *)&(*args)[4]);
}
->
/----- (00000000002B16A4) ----------------------------------------------------
FVECTOR *__fastcall ryj::EFFECT::angle(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 443);
  }
  if ( !ryj::EFFECT::is_active(this, a2, a3, a4, a5, a6, a7, a8) )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 446);
  return pppPartMngGetAng((unsigned int *)*(unsigned int *)&(*this)[28]);
}
// 2B16FC: variable 'a4' is possibly undefined
// 2B16FC: variable 'a5' is possibly undefined
// 2B16FC: variable 'a6' is possibly undefined
// 2B16FC: variable 'a7' is possibly undefined
// 2B16FC: variable 'a8' is possibly undefined
// 2B170C: variable 'v15' is possibly undefined
// 2B170C: variable 'v14' is possibly undefined
// 2B170C: variable 'v13' is possibly undefined
// 2B170C: variable 'v12' is possibly undefined
// 2B170C: variable 'v11' is possibly undefined
// 2B170C: variable 'v10' is possibly undefined
// 2B170C: variable 'v9' is possibly undefined
// 2B1724: variable 'v20' is possibly undefined
// 2B1724: variable 'v19' is possibly undefined
// 2B1724: variable 'v18' is possibly undefined
// 2B1724: variable 'v17' is possibly undefined
// 2B1724: variable 'v16' is possibly undefined
// 2B1734: variable 'v27' is possibly undefined
// 2B1734: variable 'v26' is possibly undefined
// 2B1734: variable 'v25' is possibly undefined
// 2B1734: variable 'v24' is possibly undefined
// 2B1734: variable 'v23' is possibly undefined
// 2B1734: variable 'v22' is possibly undefined
// 2B1734: variable 'v21' is possibly undefined
// 2B1750: variable 'a2' is possibly undefined
// 2B1750: variable 'a3' is possibly undefined


---
---
---
appears in:
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\B_AL120\b_al.bdscript
L2453:
 popToSp 0
 pushFromPSpVal 0
 syscall 1, 98 ; trap_obj_step_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSpVal 16, 32
 pushFromPSpVal 0
 pushImm 5
 pushImm 0
 pushImm 0
 syscall 1, 21 ; trap_obj_effect_start (4 in, 1 out)
 popToSpVal 64
 pushFromPSp 16
 pushImmf 0.8
 pushImmf 1
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 pushImmf 0.8
 pushImmf 1
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 pushImmf 0.8
 pushImmf 1
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 pushImmf 1
 gosub 12, L2579
 pushFromFSpVal 64
 pushFromPSp 16
 syscall 0, 39 ; trap_effect_set_scale (2 in, 0 out)
 pushFromPSp 16
 pushImmf 0
 pushImmf 6.283185
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 pushImmf 0
 pushImmf 1
 gosub 12, L2579
 pushFromFSpVal 64
 pushFromPSp 16
 syscall 0, 40 ; trap_effect_set_rot (2 in, 0 out)
 pushFromPSpVal 0
 pushImm 1308
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 68
 pushFromFSpVal 68
 pushImmf 100
 pushImmf 200
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushImm 0
 popToSpVal 80
 pushImm 0
 popToSpVal 84
 ret 
