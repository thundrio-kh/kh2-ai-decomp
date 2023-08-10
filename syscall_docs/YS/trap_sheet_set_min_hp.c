---
---
---
name: trap_sheet_set_min_hp
---
---
---
category: sheet
---
---
---
documentation level: untested
---
---
---
push sheet ; (YS::SHEET_44 *) (An object stat sheet)
push HP ; (int) (HP value to set)
push index ; (int) (HP index to use)
syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
---
---
---
description: Set an objects minimum HP
---
---
---
decompiled code:

/----- (000000000050A8C4) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_min_hp(BD_VALUE_21 *args)
{
  int v2; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = *(_DWORD *)&(*args)[8];
  if ( v2 < 0 || v2 >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[2].i >= 0 && args[2].i < SHEET::PARTS_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      1142LL,
      "trap_sheet_set_min_hp",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 1142);
    v2 = *(_DWORD *)&(*args)[8];
  }
  *(_DWORD *)(unsigned int)(*(_DWORD *)args + 12 * v2 + 8) = *(_DWORD *)&(*args)[4];
}
// 50A8E0: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
msn\AL00_MS101\ms_a.bdscript
msn\BB01_MS101\ms_a.bdscript
msn\CA01_MS101\ms_a.bdscript
msn\CA01_MS102\ms_d.bdscript
msn\HB09_MS101\ms_d.bdscript
msn\HB09_MS501\ms_d.bdscript
msn\HB09_MS901\ms_d.bdscript
msn\HE06_MS101\ms_a.bdscript
msn\HE19_MS204\ms_a.bdscript
msn\NM00_MS101\ms_d.bdscript
msn\TT03_MS601\ms_d.bdscript
msn\TT04_MS107\tt04.bdscript
msn\TT04_MS301\tt04.bdscript
msn\TT08_MS701\ms_a.bdscript
msn\TT14_MS109\tt_d.bdscript
msn\TT14_MS110\tt14.bdscript
msn\TT25_MS801\ms_d.bdscript
msn\TT32_MS302\tt32.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK110_PHANTOM\b_lk.bdscript ((M) Scar Ghost)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB060\f_bb.bdscript ((F) Shadow Stalker (Columns) (BB))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_HB070\f_hb.bdscript ((F) CoR’s droppable spike (HB))
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\F_MU030\f_mu.bdscript ((F) ??? (MU))
obj\F_TR050\f_tr.bdscript ((F) MCP barrier (TR))
obj\F_WI010_BOSS\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))
obj\F_WI020\f_wi.bdscript ((F) Burning building (WI))
obj\F_WI020_BOSS\f_wi.bdscript ((F) Burning building (BOSS) (WI))
obj\F_WI020_BTL\f_wi.bdscript ()
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\M_EX130_AL\m_ex.bdscript ((M) Crimson Jazz (AL))
obj\M_EX350_01\m_ex.bdscript ((M) Mushroom 1 (EX))
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_03\m_ex.bdscript ((M) Mushroom 3 (EX))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_09\m_ex.bdscript ((M) Mushroom 9 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX520_AL\m_ex.bdscript ((M) Hook Bat (AL))
obj\M_EX620_AL\m_ex.bdscript ((M) Fortuneteller (AL))
obj\M_EX660_AL\m_ex.bdscript ((M) Rapid Thruster (AL))
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
obj\N_EX570_BTL\n_ex.bdscript ((N) Seifer (BTL) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_EX940_BTL\n_ex.bdscript ((N) Riku (coat) (BTL) (EX))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HB550_BOSS\n_hb.bdscript ((N) Cloud (BOSS) (HB))
obj\N_HB550_BTL\n_hb.bdscript ((N) Cloud (BTL) (HB))
obj\N_HB570_BOSS\n_hb.bdscript ((N) Tifa (BOSS) (HB))
obj\N_HB570_BTL\n_hb.bdscript ((N) Tifa (BTL) (HB))
obj\N_HB580_BOSS\n_hb.bdscript ((N) Yuffie (BOSS) (HB))
obj\N_HB580_BTL\n_hb.bdscript ((N) Yuffie (BTL) (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM050_BTL_TOY\n_nm.bdscript ((N) Lock (toy minigame) (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM060_BTL_TOY\n_nm.bdscript ((N) Shock (toy minigame) (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_NM070_BTL_TOY\n_nm.bdscript ((N) Barrel (toy minigame) (BTL) (NM))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_EX230\p_ex.bdscript ((P) Mickey (with Keyblade))
---
---
---
example usage from msn\AL00_MS101\ms_a.bdscript
L228:
 pushFromFSp 36
 pushFromPAi L374 ; ___ai 'INT' (L374)
 syscall 0, 0 ; trap_puti (2 in, 0 out)
 pushFromFSp 32
 pushFromFSp 36
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 pushFromPSp 16
 pushImm 20
 pushImm 0
 syscall 1, 142 ; trap_signal_reserve_min_hp (3 in, 0 out)
 ret 
