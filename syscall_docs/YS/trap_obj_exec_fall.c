---
---
---
name: trap_obj_exec_fall
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An Object)
syscall 1, 65 ; trap_obj_exec_fall (1 in, 0 out)
---
---
---
description: Tells the object to fall
---
---
---
decompiled code:

/----- (0000000000504AFC) ----------------------------------------------------
void __fastcall YS::trap_obj_exec_fall(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)(unsigned int)(*(_DWORD *)(v1 + 4) + 264) |= 0x4000000u;
}
// 504B1C: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_HE020_A1\f_he.bdscript ((F) Rock 1 (grey) (HE))
obj\F_HE020_A2\f_he.bdscript ((F) Rock 2 (grey) (HE))
obj\F_HE020_B1\f_he.bdscript ((F) Rock 1 (green) (HE))
obj\F_HE020_B2\f_he.bdscript ((F) Rock 2 (green) (HE))
obj\F_HE020_C1\f_he.bdscript ((F) Rock 1 (blue) (HE))
obj\F_HE020_C2\f_he.bdscript ((F) Rock 2 (blue) (HE))
obj\F_HE020_PETE\f_he.bdscript ((F) Falling boulder (Pete battle) (HE))
obj\F_HE020_PO\f_he.bdscript ((F) Falling crystal (PO))
obj\F_HE030_L\f_he.bdscript ((F) Phil minigame L (HE))
obj\F_HE030_L_FREE\f_he.bdscript ((F) Phil minigame L (FREE) (HE))
obj\F_HE030_S\f_he.bdscript ((F) Phil minigame S (HE))
obj\F_HE030_S_FREE\f_he.bdscript ((F) Phil minigame S (FREE) (HE))
obj\F_NM100\f_nm.bdscript ((F) Oogie’s present (NM))
obj\F_NM110\f_nm.bdscript ((F) Oogie’s bag (NM))
obj\F_NM160\f_nm.bdscript ((F) Lever (NM))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_NM170_L\f_nm.bdscript ((F) Present minigame (L) (NM))
obj\F_NM170_M\f_nm.bdscript ((F) Present minigame (M) (NM))
obj\F_NM170_S\f_nm.bdscript ((F) Present minigame (S) (NM))
obj\F_NM170_XL\f_nm.bdscript ((F) Present minigame (XL) (NM))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_TT110_FREE\f_tt.bdscript ((F) Dog’s sack (FREE) (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI010\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))
obj\F_WI010_BOSS\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))
obj\F_WI020\f_wi.bdscript ((F) Burning building (WI))
obj\F_WI020_BOSS\f_wi.bdscript ((F) Burning building (BOSS) (WI))
obj\F_WI020_BTL\f_wi.bdscript ()
obj\M_AL020_FIRE\m_al.bdscript ((M) Fiery Globe)
obj\M_AL020_FIRE2\m_al.bdscript ((M) Fiery Globe (2))
obj\M_AL020_FIRE_RAW\m_al.bdscript ((M) Fiery Globe (RAW))
obj\M_AL020_ICEE\m_al.bdscript ((M) Icy Cube)
obj\M_AL020_ICEE2\m_al.bdscript ((M) Icy Cube (2))
obj\M_AL020_ICEE_RAW\m_al.bdscript ((M) Icy Cube (RAW))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_BB010_SWORD\m_bb.bdscript ((M) Gargoyle Knight)
obj\M_EX010\m_ex.bdscript ((M) Soldier)
obj\M_EX010_NM\m_ex.bdscript ((M) Soldier (NM))
obj\M_EX010_TR\m_ex.bdscript ((M) Soldier (TR))
obj\M_EX010_WI\m_ex.bdscript ((M) Soldier (WI))
obj\M_EX020\m_ex.bdscript ((M) Shadow)
obj\M_EX020_NM\m_ex.bdscript ((M) Shadow (NM))
obj\M_EX020_NM_RAW\m_ex.bdscript ((M) Shadow (NM) (RAW))
obj\M_EX020_RAW\m_ex.bdscript ((M) Shadow (RAW))
obj\M_EX020_WI\m_ex.bdscript ((M) Shadow (WI))
obj\M_EX020_WI_RAW\m_ex.bdscript ((M) Shadow (WI) (RAW))
obj\M_EX050\m_ex.bdscript ((M) Large Body)
obj\M_EX050_WI\m_ex.bdscript ((M) Large Body (WI))
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX200\m_ex.bdscript ((M) Wight Knight)
obj\M_EX200_NM\m_ex.bdscript ((M) Wight Knight (NM))
obj\M_EX350_01\m_ex.bdscript ((M) Mushroom 1 (EX))
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_03\m_ex.bdscript ((M) Mushroom 3 (EX))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_05\m_ex.bdscript ((M) Mushroom 5 (EX))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_07\m_ex.bdscript ((M) Mushroom 7 (EX))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_09\m_ex.bdscript ((M) Mushroom 9 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX510\m_ex.bdscript ((M) Rabid Dog)
obj\M_EX520\m_ex.bdscript ((M) Hook Bat)
obj\M_EX520_HB\m_ex.bdscript ((M) Beffudler)
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX560\m_ex.bdscript ((M) Hammer Frame)
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX560_WI\m_ex.bdscript ((M) Hammer Frame (WI))
obj\M_EX570\m_ex.bdscript ((M) Assault Rider)
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX600\m_ex.bdscript ((M) Magnum Loader)
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
obj\M_EX640\m_ex.bdscript ((M) Hot Rod)
obj\M_EX640_HB\m_ex.bdscript ((M) Mad Ride)
obj\M_EX640_WI\m_ex.bdscript ((M) Hot Rod (WI))
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
obj\M_EX700\m_ex.bdscript ((M) Mole Driller)
obj\M_EX700_NM\m_ex.bdscript ((M) Mole Driller (NM))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX790\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_CHRISTMAS\m_ex.bdscript ((M) Toy Soldier)
obj\M_EX790_CHRISTMAS_NM\m_ex.bdscript ((M) Toy Soldier (NM))
obj\M_EX790_HALLOWEEN\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_HALLOWEEN_NM\m_ex.bdscript ((M) Graveyard (NM))
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX930\m_ex.bdscript ((M) Dancer)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB060_BTL\n_bb.bdscript ((N) Lumière (BTL) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
obj\N_EX570_BTL\n_ex.bdscript ((N) Seifer (BTL) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_EX940_BTL\n_ex.bdscript ((N) Riku (coat) (BTL) (EX))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HB530_BTL2\n_hb.bdscript ((N) Squall / Leon (BTL2) (HB))
obj\N_HB550_BOSS\n_hb.bdscript ((N) Cloud (BOSS) (HB))
obj\N_HB550_BTL\n_hb.bdscript ((N) Cloud (BTL) (HB))
obj\N_HB550_BTL2\n_hb.bdscript ((N) Cloud (BTL2) (HB))
obj\N_HB570_BOSS\n_hb.bdscript ((N) Tifa (BOSS) (HB))
obj\N_HB570_BTL\n_hb.bdscript ((N) Tifa (BTL) (HB))
obj\N_HB570_BTL2\n_hb.bdscript ((N) Tifa (BTL2) (HB))
obj\N_HB580_BOSS\n_hb.bdscript ((N) Yuffie (BOSS) (HB))
obj\N_HB580_BTL\n_hb.bdscript ((N) Yuffie (BTL) (HB))
obj\N_HB580_BTL2\n_hb.bdscript ((N) Yuffie (BTL2) (HB))
obj\N_HB590_BTL\n_hb.bdscript ((N) Sephiroth (BTL) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM050_BTL_TOY\n_nm.bdscript ((N) Lock (toy minigame) (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM060_BTL_TOY\n_nm.bdscript ((N) Shock (toy minigame) (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_NM070_BTL_TOY\n_nm.bdscript ((N) Barrel (toy minigame) (BTL) (NM))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_EX130\p_ex.bdscript ((P) Shadow Roxas)
obj\P_EX230\p_ex.bdscript ((P) Mickey (with Keyblade))
---
---
---
example usage from obj\B_AL110\b_al.bdscript
TR13:
 pushFromPWp W0
 pushImmf 0
 syscall 1, 128 ; trap_obj_sysjump (2 in, 0 out)
 pushFromPWp W0
 fetchValue 4
 pushImm 4
 pushImmf 8
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPWp W0
 syscall 1, 65 ; trap_obj_exec_fall (1 in, 0 out)
 ret 
