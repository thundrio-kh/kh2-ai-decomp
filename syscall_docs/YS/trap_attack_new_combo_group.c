---
---
---
name: trap_attack_new_combo_group
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
syscall 2, 67 ; trap_attack_new_combo_group (0 in, 1 out)
pop combogroup ; (int) 
---
---
---
description: Associates a number with a new combo group, for a series of attacks that are in the same combo.
---
---
---
decompiled code:
int __cdecl YS::ATTACK_CHECK::NewComboGroup()
/----- (00000000004F502C) ----------------------------------------------------
void __fastcall YS::trap_attack_new_combo_group(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::ATTACK_CHECK::NewComboGroup();
}
->
/----- (000000000040A814) ----------------------------------------------------
int __cdecl YS::ATTACK_CHECK::NewComboGroup()
{
  int result; // r3

  result = ++YS::CurrentComboGroup;
  if ( YS::CurrentComboGroup > 0x10000000 )
  {
    result = 256;
    YS::CurrentComboGroup = 256;
  }
  return result;
}
// C784C4: using guessed type int YS::CurrentComboGroup;


---
---
---
appears in:
limit\donald\limi.bdscript
limit\donald_wi\limi.bdscript
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX290\b_ex.bdscript ((F) Xemnas armor - Xigbar’s arrowgun)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX510\m_ex.bdscript ((M) Rabid Dog)
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX940_BTL\n_ex.bdscript ((N) Riku (coat) (BTL) (EX))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\donald\limi.bdscript
L951:
 popToSp 0
 pushImm 0
 popToSp 36
 syscall 2, 67 ; trap_attack_new_combo_group (0 in, 1 out)
 popToSp 32
 pushFromFSpVal 48
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L1103
