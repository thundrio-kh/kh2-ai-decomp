---
---
---
name: trap_fixrad
---
---
---
category: math
---
---
---
documentation level: untested
---
---
---
push radian ; (float)  (radian value in degrees that needs to be constrained)
syscall 0, 43 ; trap_fixrad (1 in, 1 out)
pop radian_out ; (constrained radians) 
---
---
---
description: Constrain a radian value to a certain range
---
---
---
decompiled code:
// local variable allocation has failed, the output may be wrong!
/----- (00000000004B8C34) ----------------------------------------------------
void __fastcall YS::trap_fixrad(BD_VALUE_16 *args)
{
  float v2; // [sp+70h] [-10h] BYREF

  v2 = *(float *)&(*args)[0];
  if ( (int)_FDtest((__int64)&v2) <= 0 )
  {
    *(float *)&(*args)[0] = YS::MATH::FixRadian(*(float *)&(*args)[0]);
  }
  else
  {
    if ( *(_DWORD *)args != 2139095040 )
      Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 532);
    *(_DWORD *)args = 0;
  }
}
->
/----- (0000000000014500) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
void __fastcall Axa::AxaAssert(LPCTSTR file, INT line)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 (__fastcall *__ptr32 *v7)(SQEX::CDev::Engine::Sd::Driver::Bank *__hidden, SQEX::CDev::Engine::Sd::Driver::ISound *); // r5
  __int64 v9; // r31
  Axa::AxaResourceMan_0 *v10; // r3
  void *v11; // r9
  void *v12; // r8
  void *v13; // r7
  void *v14; // r6
  __int64 v15; // r5
  __int64 v16; // r4
  Axa::AxaSoundManager *v17; // r3
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r7
  __int64 v22; // r6
  __int64 v23; // r5
  __int64 v24; // r4
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r7
  __int64 v29; // r10
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r7
  __int64 v33; // r6
  __int64 v34; // r5
  __int64 v35; // r4
  __int16 v36[260]; // [sp+70h] [-220h] BYREF

  v7 = &SQEX::CDev::Engine::Sd::Driver::Bank::SetStreamSound;
  v9 = *(_QWORD *)&line;
  v10 = (Axa::AxaResourceMan_0 *)(unsigned int)Axa::AxaResourceMan::m_pInstance;
  if ( !Axa::AxaResourceMan::m_pInstance )
  {
    Axa::AxaAssert(".\\COMMON\\AxaResourceMan.h", 395);
    v10 = (Axa::AxaResourceMan_0 *)(unsigned int)Axa::AxaResourceMan::m_pInstance;
  }
  Axa::AxaResourceMan::_debugPrintAll(v10, *(__int64 *)&line, (__int64)v7, v6, v5, v4, v3, v2);
  if ( Axa::AxaSoundManager::m_pInstance )
  {
    v17 = Axa::AxaSoundManager::instance();
    Axa::AxaSoundManager::_debugPrintAll(v17, v24, v23, v22, v21, v20, v19, v18);
  }
  Axa::reportMemory(1, v16, v15, v14, v13, v12, v11);
  sprintf((unsigned int)v36, (__int64)"Assertion Failed!! \n%s(%d) \n", (__int64)file, v9, v28, v27, v26, v25);
  printf((unsigned int)v36, v35, v34, v33, v32, v31, v30, v29);
  Axa::__dummyBusyLoop();
}
// 14500: variables would overlap: r4.4 and r4.8
// 7A0000: using guessed type __int64 (__fastcall *__ptr32 SQEX::CDev::Engine::Sd::Driver::Bank::SetStreamSound)(SQEX::CDev::Engine::Sd::Driver::Bank *__hidden this, SQEX::CDev::Engine::Sd::Driver::ISound *);
// 7A5E38: using guessed type void *__ptr32 Axa::AxaResourceMan::m_pInstance;
// 7A5E4C: using guessed type void *__ptr32 Axa::AxaSoundManager::m_pInstance;


---
---
---
appears in:
limit\sparrow\limi.bdscript
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX250\b_ex.bdscript ((?) Xemna’s dragon’s arms (Anchored))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE030_NPC_QSATO\npc_.bdscript ((B) Hades (NPC_QSATO) (HE))
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\EH_G_EX250\g_ex.bdscript ((EH) Bomb Bell B)
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\F_MU000\f_mu.bdscript ((F) Destructable Rock 1 (Reaction Command) (MU))
obj\F_MU010\f_mu.bdscript ((F) Destructable Rock 2 (Reaction Command) (MU))
obj\F_MU020\f_mu.bdscript ((F) Destructable Rock 3 (Reaction Command) (MU))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_NM170_L\f_nm.bdscript ((F) Present minigame (L) (NM))
obj\F_NM170_M\f_nm.bdscript ((F) Present minigame (M) (NM))
obj\F_NM170_S\f_nm.bdscript ((F) Present minigame (S) (NM))
obj\F_NM170_XL\f_nm.bdscript ((F) Present minigame (XL) (NM))
obj\F_PO030\f_po.bdscript ((F) ??? (PO))
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR020_CORE\f_tr.bdscript ()
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR050\f_tr.bdscript ((F) MCP barrier (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TR170\f_tr.bdscript ((F) ??? (TR))
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT100\f_tt.bdscript ((F) Trashcan (TT))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\F_WI020\f_wi.bdscript ((F) Burning building (WI))
obj\F_WI020_BTL\f_wi.bdscript ()
obj\F_WI060\f_wi.bdscript ((F) Cannon tower (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\F_WI360_PETE\f_wi.bdscript ((F) Building site’s platform (PETE) (WI))
obj\G_EC125\g_ec.bdscript ()
obj\G_EC126\g_ec.bdscript ()
obj\G_EC127\g_ec.bdscript ()
obj\G_EX210\g_ex.bdscript ()
obj\G_EX210_G\g_ex.bdscript ()
obj\G_EX210_R\g_ex.bdscript ()
obj\G_EX250_EH\g_ex.bdscript ()
obj\G_EX350\g_ex.bdscript ()
obj\G_EX350_G\g_ex.bdscript ()
obj\G_EX350_R\g_ex.bdscript ()
obj\G_EX360\g_ex.bdscript ()
obj\G_EX360_G\g_ex.bdscript ()
obj\G_EX360_R\g_ex.bdscript ()
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
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
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_AL090_BTL\n_al.bdscript ((N) Abu holding gem (BTL) (AL))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
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
obj\N_EX650_BTL1\tt_a.bdscript ((N) Villager (boy) (BTL1) (EX))
obj\N_EX650_BTL2\tt_a.bdscript ((N) Villager (boy) (BTL2) (EX))
obj\N_EX670_BTL1\tt_a.bdscript ((N) Villager (girl) (BTL1) (EX))
obj\N_EX670_BTL2\tt_a.bdscript ((N) Villager (girl) (BTL2) (EX))
obj\N_EX680_BTL1\tt_a.bdscript ((N) Villager (man) (BTL1) (EX))
obj\N_EX680_BTL2\tt_a.bdscript ((N) Villager (man) (BTL2) (EX))
obj\N_EX690_BTL1\tt_a.bdscript ((N) Villager (woman) (BTL1) (EX))
obj\N_EX690_BTL2\tt_a.bdscript ((N) Villager (woman) (BTL2) (EX))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE020_BTL\n_he.bdscript ((N) Phil (BTL) (HE))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_PO010_BTL\n_po.bdscript ((N) Pooh (BTL) (PO))
obj\N_PO020_BTL\n_po.bdscript ((N) Tigger (BTL) (PO))
obj\N_PO030_BTL\n_po.bdscript ((N) Pigglet (BTL) (PO))
obj\N_PO040_BTL\n_po.bdscript ((N) Eeyore (BTL) (PO))
obj\N_PO070_BTL\n_po.bdscript ((N) Roo (BTL) (PO))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_HE000_NPC_QSATO\npc_.bdscript ((P) Auron (NPC_QSATO))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
obj\W_EX010_ROXAS_DARK\w_ex.bdscript ((W) Roxas’s Oblivion)
obj\W_EX010_ROXAS_LIGHT\w_ex.bdscript ((W) Roxas’s Oathkeeper)
---
---
---
example usage from limit\sparrow\limi.bdscript
L402:
 popToSp 0
 pushFromPWp W0
 pushImm 48
 add 
 pushImm 358
 gosub 24, L365
 pushFromPWp W0
 pushImm 4
 add 
 syscall 2, 56 ; trap_btlobj_lockon_target (1 in, 1 out)
 syscall 1, 131 ; trap_target_dup (1 in, 1 out)
 popToSp 48
 pushFromFSp 48
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 popToSp 80
 pushFromFSp 80
 jz L556
 pushFromPWp W0
 pushImm 80
 add 
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 16
 pushFromPWp W0
 pushImm 80
 add 
 pushFromFSp 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 32
 pushFromPSp 16
 syscall 0, 42 ; trap_vector_atan_xz (1 in, 1 out)
 pushFromPSp 32
 syscall 0, 42 ; trap_vector_atan_xz (1 in, 1 out)
 subf 
 syscall 0, 43 ; trap_fixrad (1 in, 1 out)
 pushImmf 0
 subf 
 infzf 
 jz L522
 pushImmf 0.436332
 popToSp 76
 pushFromPWp W0
 pushImm 136
 add 
 pushImm 1
 memcpy 0
 jmp L537
