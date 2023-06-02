---
---
---
name: trap_effect_is_alive
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
syscall 0, 49 ; trap_effect_is_alive (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: checks if an effect is still alive
---
---
---
decompiled code:
bool __fastcall ryj::EFFECT::is_alive(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B8848) ----------------------------------------------------
void __fastcall YS::trap_effect_is_alive(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  *(_DWORD *)args = ryj::EFFECT::is_alive((ryj::EFFECT_144 *const)(*args)[0], a2, a3, a4, a5, a6, a7, a8);
}
->
/----- (00000000002B0D40) ----------------------------------------------------
bool __fastcall ryj::EFFECT::is_alive(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 643);
  }
  return (*(_DWORD *)&(*this)[8] & 0x10000) == 0;
}
// 2B0D98: variable 'a4' is possibly undefined
// 2B0D98: variable 'a5' is possibly undefined
// 2B0D98: variable 'a6' is possibly undefined
// 2B0D98: variable 'a7' is possibly undefined
// 2B0D98: variable 'a8' is possibly undefined
// 2B0DA8: variable 'v15' is possibly undefined
// 2B0DA8: variable 'v14' is possibly undefined
// 2B0DA8: variable 'v13' is possibly undefined
// 2B0DA8: variable 'v12' is possibly undefined
// 2B0DA8: variable 'v11' is possibly undefined
// 2B0DA8: variable 'v10' is possibly undefined
// 2B0DA8: variable 'v9' is possibly undefined
// 2B0DC0: variable 'v20' is possibly undefined
// 2B0DC0: variable 'v19' is possibly undefined
// 2B0DC0: variable 'v18' is possibly undefined
// 2B0DC0: variable 'v17' is possibly undefined
// 2B0DC0: variable 'v16' is possibly undefined
// 2B0DD0: variable 'v27' is possibly undefined
// 2B0DD0: variable 'v26' is possibly undefined
// 2B0DD0: variable 'v25' is possibly undefined
// 2B0DD0: variable 'v24' is possibly undefined
// 2B0DD0: variable 'v23' is possibly undefined
// 2B0DD0: variable 'v22' is possibly undefined
// 2B0DD0: variable 'v21' is possibly undefined


---
---
---
appears in:
magic\blizzard1\bliz.bdscript
magic\BLIZZARD_1\bliz.bdscript
magic\BLIZZARD_1lk\bliz.bdscript
magic\BLIZZARD_2\bliz.bdscript
magic\BLIZZARD_2lk\bliz.bdscript
magic\BLIZZARD_3\bliz.bdscript
magic\BLIZZARD_3lk\bliz.bdscript
magic\LK_BLIZZARD_1\bliz.bdscript
magic\reflect1\refl.bdscript
magic\REFLECT_1\refl.bdscript
magic\REFLECT_1lk\refl.bdscript
magic\REFLECT_2\refl.bdscript
magic\REFLECT_2lk\refl.bdscript
magic\REFLECT_3\refl.bdscript
magic\REFLECT_3lk\refl.bdscript
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\F_BB090\f_bb.bdscript ((F) ??? (BB))
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_NM010\f_nm.bdscript ((F) ??? (NM))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\G_EB110\g_eb.bdscript ()
obj\G_EX100\g_ex.bdscript ()
obj\G_EX110\g_ex.bdscript ()
obj\G_EX120\g_ex.bdscript ()
obj\G_EX920\g_ex.bdscript ()
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX200\mick.bdscript ((P) Micky (hood))
obj\P_EX220\mick.bdscript ((P) Mickey)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_MU000\p_mu.bdscript ((P) Mulan)
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from magic\blizzard1\bliz.bdscript
L224:
 pushFromFSpVal 32
 syscall 0, 49 ; trap_effect_is_alive (1 in, 1 out)
 jz L338
 pushFromFSpVal 28
 syscall 2, 29 ; trap_attack_is_hit_bg (1 in, 1 out)
 dup 
 jnz L242
 pushFromFSpVal 28
 syscall 2, 39 ; trap_attack_is_reflect (1 in, 1 out)
 neqzv 
