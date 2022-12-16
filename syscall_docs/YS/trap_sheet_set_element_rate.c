---
---
---
name: trap_sheet_set_element_rate
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
push unk1 ; (unknown)  (syscall: 1, 84 ; trap_obj_sheet (1 in, 1 out))
push unk2 ; (unknown)  (pushImm: 0,1,2,3,4,5,6)
push unk3 ; (unknown)  (pushImm: 0,1,100,50,L100) (pushFromFSp: 4)
syscall 1, 311 ; trap_sheet_set_element_rate (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::SHEET::set_element_rate(YS::SHEET_44 *const this, int elem, int rate)
/----- (000000000050A9F8) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_element_rate(BD_VALUE_21 *args)
{
  YS::SHEET::set_element_rate((YS::SHEET_44 *const)(*args)[0], *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}
->
/----- (0000000000499938) ----------------------------------------------------
void __fastcall YS::SHEET::set_element_rate(YS::SHEET_44 *const this, int elem, int rate)
{
  int v6; // r6
  __int64 back_chain; // [sp+0h] [-90h]

  v6 = *(_DWORD *)&(*this)[612];
  if ( !v6 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "EnemyParam != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\sheet.cpp",
      750LL,
      "set_element_rate",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\sheet.cpp", 750);
    v6 = *(_DWORD *)&(*this)[612];
  }
  *(_BYTE *)((unsigned int)((_DWORD)this + elem) + 0x1A8LL) = ((int)((unsigned __int64)(1374389535LL
                                                                                      * (*(unsigned __int16 *)(unsigned int)(v6 + 2 * elem + 72)
                                                                                       * rate
                                                                                       + 99)) >> 32) >> 5)
                                                            + ((((unsigned __int64)(1374389535LL
                                                                                  * (*(unsigned __int16 *)(unsigned int)(v6 + 2 * elem + 72)
                                                                                   * rate
                                                                                   + 99)) >> 32) & 0x80000000) != 0LL);
}
// 499964: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_CA000\b_ca.bdscript ((B) Illuminator)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\EH_G_EX250\g_ex.bdscript ((EH) Bomb Bell B)
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\G_EX250_EH\g_ex.bdscript ()
obj\M_AL020_FIRE2\m_al.bdscript ((M) Fiery Globe (2))
obj\M_AL020_ICEE2\m_al.bdscript ((M) Icy Cube (2))
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
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
---
---
---
example usage from obj\B_AL100_1ST\b_al.bdscript
L4269:
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 1
 pushImm 0
 syscall 1, 311 ; trap_sheet_set_element_rate (3 in, 0 out)
 pushFromFSp 0
 pushImm 24
 add 
 pushImm 1
 memcpy 0
 pushFromFSp 0
 gosub 4, L10272
 pushFromFSp 0
 gosub 4, L2525
 pushImm 0
 popToSpVal 180
 pushImm L10508
 pushFromFSp 0
 syscall 2, 20 ; trap_magic_start_thread (2 in, 1 out)
 drop 
 ret 
