---
---
---
name: trap_obj_effect_start_pos
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
push unk1 ; (unknown)  (pushFromFSp: 0,12,4,8) (pushFromPSpVal: 0,252) (syscall: 0, 4 ; trap_vector_add (2 in, 1 out),0, 53 ; trap_effect_pos (1 in, 1 out),1, 147 ; trap_obj_pos (1 in, 1 out),1, 88 ; trap_obj_target_pos (1 in, 1 out),1, 98 ; trap_obj_step_pos (1 in, 1 out),...) (pushFromPWp: W0,W32) (gosub: 12, L1034,12, L1895,12, L5983,16, L1578,16, L1588,...) (add: )
push unk2 ; (unknown)  (pushImm: -1,0,1,10,12,13,14,144,15,16,17,18,19,2,20,21,22,23,24,3,32,33,34,35,38,39,4,41,42,43,45,5,50,6,7,72,76,77,8,81,83,88,9,90) (memcpyToSp: 16, 112,16, 144,16, 16,16, 32,16, 48,...) (pushFromFSp: 4,52) (fetchValue: 20) (add: )
push unk3 ; (unknown)  (pushFromFSp: 0,4,8) (add: ) (pushFromPSp: 112,144,16,32,48,...) (pushFromPSpVal: 128,176,32,96) (pushFromPWp: W0)
push unk4 ; (unknown)  (pushImm: 0,1)
push unk5 ; (unknown)  (pushImm: 0)
syscall 1, 22 ; trap_obj_effect_start_pos (5 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
ryj::EFFECT_310 *__fastcall YS::OBJ::start_effect_pos(YS::OBJ_125 *const this, __int64 id, const kn::FVector *pos, int flag, __int64 priority, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FFD28) ----------------------------------------------------
void __fastcall YS::trap_obj_effect_start_pos(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r29
  unsigned __int64 v10; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v9 = *(unsigned int *)args;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 )
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
  if ( (v9 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = (unsigned int)YS::OBJ::start_effect_pos(
                                    (YS::OBJ_125 *const)*(unsigned int *)(v9 + 4),
                                    *(int *)&(*args)[4],
                                    (const kn::FVector *)*(unsigned int *)&(*args)[8],
                                    *(_DWORD *)&(*args)[12],
                                    *(int *)&(*args)[16],
                                    a6,
                                    a7,
                                    a8);
}
// 4FFD4C: variable 'back_chain' is possibly undefined
// 4FFE34: variable 'a6' is possibly undefined
// 4FFE34: variable 'a7' is possibly undefined
// 4FFE34: variable 'a8' is possibly undefined
->
/----- (0000000000461554) ----------------------------------------------------
ryj::EFFECT_310 *__fastcall YS::OBJ::start_effect_pos(YS::OBJ_125 *const this, __int64 id, const kn::FVector *pos, int flag, __int64 priority, __int64 a6, __int64 a7, __int64 a8)
{
  ryj::EFFECT_144 *v9; // r30
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 v15; // r5
  __int64 v16; // r4
  ryj::EFFECT_144 *v17; // r3
  kn::FVector *v18; // r3

  if ( !*(_DWORD *)&(*this)[128] )
    return 0LL;
  v17 = ryj::PAX::start((ryj::PAX_161 *const)(unsigned int)((_DWORD)this + 128), id, flag, 1LL, priority, 0LL, a7, a8);
  v9 = v17;
  if ( (_DWORD)v17 )
  {
    v18 = (kn::FVector *)ryj::EFFECT::pos(v17, v16, v15, v14, v13, v12, v11, v10);
    kn::FVector::operator=(v18, pos);
  }
  return v9;
}
// 4615AC: variable 'v16' is possibly undefined
// 4615AC: variable 'v15' is possibly undefined
// 4615AC: variable 'v14' is possibly undefined
// 4615AC: variable 'v13' is possibly undefined
// 4615AC: variable 'v12' is possibly undefined
// 4615AC: variable 'v11' is possibly undefined
// 4615AC: variable 'v10' is possibly undefined


---
---
---
appears in:
limit\riku\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_CA060\b_ca.bdscript ((?) Port Royal enemy?)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
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
obj\B_EX210_EH\b_ex.bdscript ((M) Luxord’s card (time?) (EX))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\F_AL110\f_al.bdscript ((F) ??? (AL))
obj\F_CA000\f_ca.bdscript ((F) Black Pearl (CA))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_HE020_A1\f_he.bdscript ((F) Rock 1 (grey) (HE))
obj\F_HE020_A2\f_he.bdscript ((F) Rock 2 (grey) (HE))
obj\F_HE020_B1\f_he.bdscript ((F) Rock 1 (green) (HE))
obj\F_HE020_B2\f_he.bdscript ((F) Rock 2 (green) (HE))
obj\F_HE020_C1\f_he.bdscript ((F) Rock 1 (blue) (HE))
obj\F_HE020_C2\f_he.bdscript ((F) Rock 2 (blue) (HE))
obj\F_HE020_PETE\f_he.bdscript ((F) Falling boulder (Pete battle) (HE))
obj\F_HE020_PO\f_he.bdscript ((F) Falling crystal (PO))
obj\F_MU080\f_mu.bdscript ((F) ??? (MU))
obj\F_MU090\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100\f_mu.bdscript ((F) ??? (MU))
obj\F_MU100_SHANG\f_mu.bdscript ((F) ??? (SHANG) (MU))
obj\F_MU100_TOWER\f_mu.bdscript ((F) ??? (TOWER) (MU))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_NM180\f_nm.bdscript ((F) Present minigame (shooting machine) (NM))
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TR170\f_tr.bdscript ((F) ??? (TR))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT060\f_tt.bdscript ((F) ??? - minigame reaction command? (TT))
obj\F_TT070\f_tt.bdscript ((F) Skateboard Checkmark (TT))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_03\m_ex.bdscript ((M) Mushroom 3 (EX))
obj\M_EX350_06\m_ex.bdscript ((M) Mushroom 6 (EX))
obj\M_EX350_06_SU\m_ex.bdscript ((M) Mushroom 6 (SU))
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from limit\riku\limi.bdscript
L185:
 popToSp 0
 popToSp 4
 popToSp 8
 pushImm -1
 pushImm 0
 sub 
 msbi 
 jz L219
 pushFromFSp 8
 pushImm -1
 pushFromFSp 4
 pushImm 1
 pushImm 0
 syscall 1, 22 ; trap_obj_effect_start_pos (5 in, 1 out)
 drop 
 jmp L219
