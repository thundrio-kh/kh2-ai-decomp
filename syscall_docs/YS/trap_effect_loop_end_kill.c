---
---
---
name: trap_effect_loop_end_kill
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
push unk1 ; (unknown)  (fetchValue: 0) (pushFromFSpVal: 0,1072,108,116,128,...) (pushFromFSp: 4,8)
syscall 0, 85 ; trap_effect_loop_end_kill (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall ryj::EFFECT::loop_end_kill(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B8798) ----------------------------------------------------
void __fastcall YS::trap_effect_loop_end_kill(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::EFFECT_144 *v9; // r3
  __int64 v10; // r9
  __int64 v11; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v9 = (ryj::EFFECT_144 *)(*args)[0];
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 || (v11 = (unsigned __int8)v9 & 3, ((unsigned __int8)v9 & 3) != 0) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL && (args[0].i & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      459LL,
      "trap_effect_loop_end_kill",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 459);
    v9 = (ryj::EFFECT_144 *)(*args)[0];
  }
  ryj::EFFECT::loop_end_kill(v9, v11, a3, a4, a5, a6, v10, a8);
}
// 4B87B4: variable 'back_chain' is possibly undefined
// 4B8828: variable 'v11' is possibly undefined
// 4B8828: variable 'a3' is possibly undefined
// 4B8828: variable 'a4' is possibly undefined
// 4B8828: variable 'a5' is possibly undefined
// 4B8828: variable 'a6' is possibly undefined
// 4B8828: variable 'v10' is possibly undefined
// 4B8828: variable 'a8' is possibly undefined
->
/----- (00000000002B1D98) ----------------------------------------------------
void __fastcall ryj::EFFECT::loop_end_kill(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
  __int64 v28; // r4

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
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 564);
  }
  v28 = *(unsigned int *)&(*this)[8] | 1LL;
  *(_DWORD *)&(*this)[8] = v28;
  if ( !ryj::EFFECT::is_active(this, v28, a3, a4, a5, a6, a7, a8) )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 568);
  pppLoopEnd((unsigned int *)*(unsigned int *)&(*this)[28]);
}
// 2B1DF0: variable 'a4' is possibly undefined
// 2B1DF0: variable 'a5' is possibly undefined
// 2B1DF0: variable 'a6' is possibly undefined
// 2B1DF0: variable 'a7' is possibly undefined
// 2B1DF0: variable 'a8' is possibly undefined
// 2B1E00: variable 'v15' is possibly undefined
// 2B1E00: variable 'v14' is possibly undefined
// 2B1E00: variable 'v13' is possibly undefined
// 2B1E00: variable 'v12' is possibly undefined
// 2B1E00: variable 'v11' is possibly undefined
// 2B1E00: variable 'v10' is possibly undefined
// 2B1E00: variable 'v9' is possibly undefined
// 2B1E18: variable 'v20' is possibly undefined
// 2B1E18: variable 'v19' is possibly undefined
// 2B1E18: variable 'v18' is possibly undefined
// 2B1E18: variable 'v17' is possibly undefined
// 2B1E18: variable 'v16' is possibly undefined
// 2B1E28: variable 'v27' is possibly undefined
// 2B1E28: variable 'v26' is possibly undefined
// 2B1E28: variable 'v25' is possibly undefined
// 2B1E28: variable 'v24' is possibly undefined
// 2B1E28: variable 'v23' is possibly undefined
// 2B1E28: variable 'v22' is possibly undefined
// 2B1E28: variable 'v21' is possibly undefined
// 2B1E50: variable 'a3' is possibly undefined


---
---
---
appears in:
limit\beast\limi.bdscript
limit\riku\limi.bdscript
limit\tron\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
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
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK110_PHANTOM\b_lk.bdscript ((M) Scar Ghost)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_AL100\f_al.bdscript ((F) Sandstorm (AL))
obj\F_AL140\f_al.bdscript ((F) Boxes and rugs (AL))
obj\F_AL150\f_al.bdscript ((F) Piece of stone wall (AL))
obj\F_AL160\f_al.bdscript ((F) Building floor (AL))
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB060\f_bb.bdscript ((F) Shadow Stalker (Columns) (BB))
obj\F_BB080\f_bb.bdscript ((F) Shadow Stalker’s ground trap (BB))
obj\F_BB090\f_bb.bdscript ((F) ??? (BB))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA000\f_ca.bdscript ((F) Black Pearl (CA))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_EX210\f_ex.bdscript ((F) Vexen’s Absent Silhouette portal (can’t be used))
obj\F_EX220\f_ex.bdscript ((F) Lexeus’ Absent Silhouette portal (can’t be used))
obj\F_EX230\f_ex.bdscript ((F) Zexion’s Absent Silhouette portal (can’t be used))
obj\F_EX240\f_ex.bdscript ((F) Marluxia’s Absent Silhouette portal (can’t be used))
obj\F_EX250\f_ex.bdscript ((F) Larxene’s Absent Silhouette portal (can’t be used))
obj\F_HB040\f_hb.bdscript ((F) CoR’s orb (red) (HB))
obj\F_HB040_BL\f_hb.bdscript ((F) CoR’s orb (blue) (HB))
obj\F_HB040_WH\f_hb.bdscript ((F) CoR’s orb (white) (HB))
obj\F_HB040_YE\f_hb.bdscript ((F) CoR’s orb (yellow) (HB))
obj\F_HB100\f_hb.bdscript ((F) ??? (HB))
obj\F_HE000\f_he.bdscript ((F) Standing Torch (HE))
obj\F_HE010\f_he.bdscript ((F) Blue Barrier (HE))
obj\F_HE110\f_he.bdscript ((F) Mist Sphere (HE))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_NM070\f_nm.bdscript ((F) Merry-go-round (NM))
obj\F_PO090\f_po.bdscript ((PO) Bees (PO))
obj\F_PO090_ETC\f_po.bdscript ((F) Bees (ETC) (PO))
obj\F_PO090_TT\f_po.bdscript ((F) Bees (TT) (PO))
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT030\f_tt.bdscript ((F) Cargo Climb’s cart (TT))
obj\F_TT070\f_tt.bdscript ((F) Skateboard Checkmark (TT))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI010_BOSS\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
obj\G_EC129\g_ec.bdscript ()
obj\G_EX900_FINAL\g_ex.bdscript ()
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX700\m_ex.bdscript ((M) Mole Driller)
obj\M_EX700_NM\m_ex.bdscript ((M) Mole Driller (NM))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX850\m_ex.bdscript ((M) Berserker weapon (Useable))
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HB530_BTL2\n_hb.bdscript ((N) Squall / Leon (BTL2) (HB))
obj\N_HB550_BOSS\n_hb.bdscript ((N) Cloud (BOSS) (HB))
obj\N_HB550_BTL\n_hb.bdscript ((N) Cloud (BTL) (HB))
obj\N_HB550_BTL2\n_hb.bdscript ((N) Cloud (BTL2) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\W_EX010_ROXAS_DARK\w_ex.bdscript ((W) Roxas’s Oblivion)
obj\W_EX010_ROXAS_LIGHT\w_ex.bdscript ((W) Roxas’s Oathkeeper)
---
---
---
example usage from limit\beast\limi.bdscript
L3879:
 dup 
 pushFromFSp 4
 sub 
 info 
 jnz L3948
 pushFromFSp 4
 pushFromPAi L4428 ; ___ai 'aura end' (L4428)
 syscall 0, 0 ; trap_puti (2 in, 0 out)
 pushFromPSpVal 116
 pushFromFSp 4
 pushImm 4
 mul 
 add 
 fetchValue 0
 pushImm 0
 sub 
 neqz 
 jz L3925
 pushFromPSpVal 116
 pushFromFSp 4
 pushImm 4
 mul 
 add 
 fetchValue 0
 syscall 0, 85 ; trap_effect_loop_end_kill (1 in, 0 out)
 jmp L3925
