---
---
---
name: trap_effect_set_scale
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
push scale ; (kn::FVector *)  (vector to scale the effect by)
syscall 0, 39 ; trap_effect_set_scale (2 in, 0 out)
---
---
---
description: Scales an effect object
---
---
---
decompiled code:
FVECTOR *__fastcall ryj::EFFECT::scale(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B8604) ----------------------------------------------------
void __fastcall YS::trap_effect_set_scale(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  kn::FVector *v9; // r3

  v9 = (kn::FVector *)ryj::EFFECT::scale((ryj::EFFECT_144 *const)(*args)[0], a2, a3, a4, a5, a6, a7, a8);
  kn::FVector::operator=(v9, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
->
/----- (00000000002B15B4) ----------------------------------------------------
FVECTOR *__fastcall ryj::EFFECT::scale(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 431);
  }
  if ( !ryj::EFFECT::is_active(this, a2, a3, a4, a5, a6, a7, a8) )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 434);
  return pppPartMngGetScl((unsigned int *)*(unsigned int *)&(*this)[28]);
}
// 2B160C: variable 'a4' is possibly undefined
// 2B160C: variable 'a5' is possibly undefined
// 2B160C: variable 'a6' is possibly undefined
// 2B160C: variable 'a7' is possibly undefined
// 2B160C: variable 'a8' is possibly undefined
// 2B161C: variable 'v15' is possibly undefined
// 2B161C: variable 'v14' is possibly undefined
// 2B161C: variable 'v13' is possibly undefined
// 2B161C: variable 'v12' is possibly undefined
// 2B161C: variable 'v11' is possibly undefined
// 2B161C: variable 'v10' is possibly undefined
// 2B161C: variable 'v9' is possibly undefined
// 2B1634: variable 'v20' is possibly undefined
// 2B1634: variable 'v19' is possibly undefined
// 2B1634: variable 'v18' is possibly undefined
// 2B1634: variable 'v17' is possibly undefined
// 2B1634: variable 'v16' is possibly undefined
// 2B1644: variable 'v27' is possibly undefined
// 2B1644: variable 'v26' is possibly undefined
// 2B1644: variable 'v25' is possibly undefined
// 2B1644: variable 'v24' is possibly undefined
// 2B1644: variable 'v23' is possibly undefined
// 2B1644: variable 'v22' is possibly undefined
// 2B1644: variable 'v21' is possibly undefined
// 2B1660: variable 'a2' is possibly undefined
// 2B1660: variable 'a3' is possibly undefined


---
---
---
appears in:
magic\magnet1\magn.bdscript
magic\MAGNET_1\magn.bdscript
magic\MAGNET_1lk\magn.bdscript
magic\MAGNET_2\magn.bdscript
magic\MAGNET_2lk\magn.bdscript
magic\MAGNET_3\magn.bdscript
magic\MAGNET_3lk\magn.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\G_ED110\g_ed.bdscript ()
obj\G_EX100\g_ex.bdscript ()
obj\G_EX110\g_ex.bdscript ()
obj\G_EX120\g_ex.bdscript ()
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
---
---
---
example usage from magic\magnet1\magn.bdscript
L395:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 pushFromPAi L630 ; ___ai 'src' (L630)
 syscall 0, 1 ; trap_putf (2 in, 0 out)
 pushFromFSp 4
 pushImmf 0.5
 subf 
 pushImmf 3.141593
 mulf 
 sin 
 pushImmf 1
 addf 
 pushImmf 0.5
 mulf 
 popToSp 4
 pushFromFSp 4
 pushFromPAi L638 ; ___ai 'des' (L638)
 syscall 0, 1 ; trap_putf (2 in, 0 out)
 pushFromPSp 16
 pushFromFSp 4
 pushFromFSp 4
 pushFromFSp 4
 pushImmf 1
 gosub 12, L452
 pushFromFSpVal 32
 pushFromPSp 16
 syscall 0, 39 ; trap_effect_set_scale (2 in, 0 out)
 ret 
