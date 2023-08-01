---
---
---
name: trap_obj_dead
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
push obj ; (YS::BTLOBJ)  (An object)
syscall 1, 209 ; trap_obj_dead (1 in, 0 out)
---
---
---
description: Performs required cleanup when an object dies
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::dead(YS::BTLOBJ *const this)
/----- (00000000005019CC) ----------------------------------------------------
void __fastcall YS::trap_obj_dead(BD_VALUE_21 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
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
  v3 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v3 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  YS::BTLOBJ::dead((YS::BTLOBJ *const)v3);
}
// 5019EC: variable 'back_chain' is possibly undefined
->
/----- (00000000004124AC) ----------------------------------------------------
void __fastcall YS::BTLOBJ::dead(YS::BTLOBJ *const this)
{
  if ( (*(_DWORD *)&this->baseclass_0[2040] & 4) == 0 )
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)this->baseclass_0 + 0x5CLL))();
}


---
---
---
appears in:
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA060\b_ca.bdscript ((?) Port Royal enemy?)
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\EH_G_EX250\g_ex.bdscript ((EH) Bomb Bell B)
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL050_BRIDGE\f_al.bdscript ()
obj\F_AL050_DUST\f_al.bdscript ()
obj\F_AL050_L\f_al.bdscript ()
obj\F_AL050_S\f_al.bdscript ()
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
obj\F_AL110\f_al.bdscript ((F) ??? (AL))
obj\F_EH000\f_eh.bdscript ((F) Crooked Ascension room (EH))
obj\F_EH010\f_eh.bdscript ((F) Twilight’s View room (EH))
obj\F_EH030\f_eh.bdscript ((F) Crooked Ascension room’s horizontal columns (EH))
obj\F_EH040\f_eh.bdscript ((F) White and green beam (EH))
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
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
obj\F_PO090\f_po.bdscript ((PO) Bees (PO))
obj\F_PO090_ETC\f_po.bdscript ((F) Bees (ETC) (PO))
obj\F_PO090_TT\f_po.bdscript ((F) Bees (TT) (PO))
obj\F_TR110\tr_b.bdscript ((F) Light cycle’s columns (5) (TR))
obj\F_TR120\tr_b.bdscript ((F) Light cycle’s columns (3) (TR))
obj\F_TR130\tr_b.bdscript ((F) Light cycle’s columns (1) (TR))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\G_EX250_EH\g_ex.bdscript ()
obj\M_AL020_FIRE2\m_al.bdscript ((M) Fiery Globe (2))
obj\M_AL020_ICEE2\m_al.bdscript ((M) Icy Cube (2))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_BB010_SWORD\m_bb.bdscript ((M) Gargoyle Knight)
obj\M_EX120\m_ex.bdscript ((M) Emerald Blues)
obj\M_EX120_HB\m_ex.bdscript ((M) Spring Metal)
obj\M_EX120_NM\m_ex.bdscript ((M) Emerald Blues (NM))
obj\M_EX120_TR\m_ex.bdscript ((M) Emerald Blues (TR))
obj\M_EX130_AL\m_ex.bdscript ((M) Crimson Jazz (AL))
obj\M_EX200\m_ex.bdscript ((M) Wight Knight)
obj\M_EX200_NM\m_ex.bdscript ((M) Wight Knight (NM))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_07\m_ex.bdscript ((M) Mushroom 7 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX520_AL\m_ex.bdscript ((M) Hook Bat (AL))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX620_AL\m_ex.bdscript ((M) Fortuneteller (AL))
obj\M_EX660_AL\m_ex.bdscript ((M) Rapid Thruster (AL))
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_LK020_BTL\n_lk.bdscript ((N) Pumba (BTL) (LK))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
---
---
---
example usage from obj\B_CA020\b_ca.bdscript
L730:
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L761
 pushFromFSp 0
 pushFromFSp 4
 pushImmf 100
 syscall 2, 2 ; trap_enemy_exec_damage_small (3 in, 0 out)
 pushFromFSp 0
 syscall 1, 209 ; trap_obj_dead (1 in, 0 out)
 jmp L938
