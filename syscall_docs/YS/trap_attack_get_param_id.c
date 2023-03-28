---
---
---
name: trap_attack_get_param_id
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
push unk1 ; (unknown)  (pushFromFSp: 0,4,8) (fetchValue: 0)
syscall 2, 25 ; trap_attack_get_param_id (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: <check dis notes>
---
---
---
decompiled code:

/----- (00000000004F4FF0) ----------------------------------------------------
void __fastcall YS::trap_attack_get_param_id(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x14LL);
}

//BASIC
---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL050_BRIDGE\f_al.bdscript ()
obj\F_AL050_DUST\f_al.bdscript ()
obj\F_AL050_L\f_al.bdscript ()
obj\F_AL050_S\f_al.bdscript ()
obj\F_AL110\f_al.bdscript ((F) ??? (AL))
obj\F_AL140\f_al.bdscript ((F) Boxes and rugs (AL))
obj\F_AL150\f_al.bdscript ((F) Piece of stone wall (AL))
obj\F_AL160\f_al.bdscript ((F) Building floor (AL))
obj\F_AL170\f_al.bdscript ((F) Tip of tower (AL))
obj\F_BB080\f_bb.bdscript ((F) Shadow Stalker’s ground trap (BB))
obj\F_CA030_DARK\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA030_LIGHT\f_ca.bdscript ((F) Port Royal’s crane (CA))
obj\F_CA040\f_ca.bdscript ((F) Anchor (CA))
obj\F_NM000\f_nm.bdscript ((F) Guillotine blade (NM))
obj\F_NM010\f_nm.bdscript ((F) ??? (NM))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_NM030\f_nm.bdscript ((F) Swinging gates (NM))
obj\F_NM040_00\f_nm.bdscript ((F) Statue (horse) (NM))
obj\F_NM040_10\f_nm.bdscript ((F) Statue (human) (NM))
obj\F_NM050\f_nm.bdscript ((F) Falling grave (NM))
obj\F_NM070\f_nm.bdscript ((F) Merry-go-round (NM))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_TR110\tr_b.bdscript ((F) Light cycle’s columns (5) (TR))
obj\F_TR120\tr_b.bdscript ((F) Light cycle’s columns (3) (TR))
obj\F_TR130\tr_b.bdscript ((F) Light cycle’s columns (1) (TR))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI010_BOSS\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\F_WI400\f_wi.bdscript ((F) Box (Pete throws) (WI))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_EX050\m_ex.bdscript ((M) Large Body)
obj\M_EX050_WI\m_ex.bdscript ((M) Large Body (WI))
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX130_AL\m_ex.bdscript ((M) Crimson Jazz (AL))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX560\m_ex.bdscript ((M) Hammer Frame)
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX560_WI\m_ex.bdscript ((M) Hammer Frame (WI))
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\N_BB060_BTL\n_bb.bdscript ((N) Lumière (BTL) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\aladdin\limi.bdscript
TR26:
 popToSp 0
 popToSp 4
 popToSp 8
 pushFromFSp 0
 syscall 2, 25 ; trap_attack_get_param_id (1 in, 1 out)
 dup 
 pushImm 770
 sub 
 jz L45
 jmp L61
