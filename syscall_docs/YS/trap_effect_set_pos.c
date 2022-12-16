---
---
---
name: trap_effect_set_pos
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
push unk1 ; (unknown)  (syscall: 2, 57 ; trap_limit_effect_start (3 in, 1 out)) (pushFromFSpVal: 0,112,132,20,32,...) (memcpyToSp: 16, 112,16, 128,16, 192,16, 48,16, 64,...) (pushFromFSp: 184,20,32,36,4,...) (fetchValue: 0,144) (pushImm: 144)
push unk2 ; (unknown)  (pushFromPSp: 112,128,16,192,32,...) (pushFromFSp: 4) (pushFromPSpVal: 32,48,64,96) (add: )
syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall ryj::EFFECT::is_valid(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
FVECTOR *__fastcall ryj::EFFECT::pos(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004B8548) ----------------------------------------------------
void __fastcall YS::trap_effect_set_pos(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned __int64 v9; // r30
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 v15; // r5
  __int64 v16; // r4
  kn::FVector *v17; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  v9 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)ryj::EFFECT::is_valid((ryj::EFFECT_144 *const)(*args)[0], back_chain, a3, a4, a5, a6, a7, a8) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOEFFECT(args[0].p)->is_valid()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      435LL,
      "trap_effect_set_pos",
      (const void *)v9);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 435);
  }
  v17 = (kn::FVector *)ryj::EFFECT::pos((ryj::EFFECT_144 *const)(*args)[0], v16, v15, v14, v13, v12, v11, v10);
  kn::FVector::operator=(v17, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 4B8568: variable 'back_chain' is possibly undefined
// 4B85D8: variable 'v16' is possibly undefined
// 4B85D8: variable 'v15' is possibly undefined
// 4B85D8: variable 'v14' is possibly undefined
// 4B85D8: variable 'v13' is possibly undefined
// 4B85D8: variable 'v12' is possibly undefined
// 4B85D8: variable 'v11' is possibly undefined
// 4B85D8: variable 'v10' is possibly undefined

//COMPLICATED ryj::EFFECT::is_valid ryj::EFFECT::pos
->
/----- (00000000002B0AD0) ----------------------------------------------------
__int64 __fastcall ryj::EFFECT::is_valid(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
  if ( *(_DWORD *)&(*this)[4] < 5u )
    return 1LL;
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
  return 0LL;
}
// 2B0B20: variable 'a4' is possibly undefined
// 2B0B20: variable 'a5' is possibly undefined
// 2B0B20: variable 'a6' is possibly undefined
// 2B0B20: variable 'a7' is possibly undefined
// 2B0B20: variable 'a8' is possibly undefined
// 2B0B30: variable 'v15' is possibly undefined
// 2B0B30: variable 'v14' is possibly undefined
// 2B0B30: variable 'v13' is possibly undefined
// 2B0B30: variable 'v12' is possibly undefined
// 2B0B30: variable 'v11' is possibly undefined
// 2B0B30: variable 'v10' is possibly undefined
// 2B0B30: variable 'v9' is possibly undefined
// 2B0B48: variable 'v20' is possibly undefined
// 2B0B48: variable 'v19' is possibly undefined
// 2B0B48: variable 'v18' is possibly undefined
// 2B0B48: variable 'v17' is possibly undefined
// 2B0B48: variable 'v16' is possibly undefined
// 2B0B58: variable 'v27' is possibly undefined
// 2B0B58: variable 'v26' is possibly undefined
// 2B0B58: variable 'v25' is possibly undefined
// 2B0B58: variable 'v24' is possibly undefined
// 2B0B58: variable 'v23' is possibly undefined
// 2B0B58: variable 'v22' is possibly undefined
// 2B0B58: variable 'v21' is possibly undefined


->
/----- (00000000002B0C50) ----------------------------------------------------
FVECTOR *__fastcall ryj::EFFECT::pos(ryj::EFFECT_144 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 419);
  }
  if ( !ryj::EFFECT::is_active(this, a2, a3, a4, a5, a6, a7, a8) )
    Axa::AxaAssert("C:\\hd25\\kingdom2\\rikeda\\effect.cpp", 422);
  return pppPartMngGetPos((unsigned int *)*(unsigned int *)&(*this)[28]);
}
// 2B0CA8: variable 'a4' is possibly undefined
// 2B0CA8: variable 'a5' is possibly undefined
// 2B0CA8: variable 'a6' is possibly undefined
// 2B0CA8: variable 'a7' is possibly undefined
// 2B0CA8: variable 'a8' is possibly undefined
// 2B0CB8: variable 'v15' is possibly undefined
// 2B0CB8: variable 'v14' is possibly undefined
// 2B0CB8: variable 'v13' is possibly undefined
// 2B0CB8: variable 'v12' is possibly undefined
// 2B0CB8: variable 'v11' is possibly undefined
// 2B0CB8: variable 'v10' is possibly undefined
// 2B0CB8: variable 'v9' is possibly undefined
// 2B0CD0: variable 'v20' is possibly undefined
// 2B0CD0: variable 'v19' is possibly undefined
// 2B0CD0: variable 'v18' is possibly undefined
// 2B0CD0: variable 'v17' is possibly undefined
// 2B0CD0: variable 'v16' is possibly undefined
// 2B0CE0: variable 'v27' is possibly undefined
// 2B0CE0: variable 'v26' is possibly undefined
// 2B0CE0: variable 'v25' is possibly undefined
// 2B0CE0: variable 'v24' is possibly undefined
// 2B0CE0: variable 'v23' is possibly undefined
// 2B0CE0: variable 'v22' is possibly undefined
// 2B0CE0: variable 'v21' is possibly undefined
// 2B0CFC: variable 'a2' is possibly undefined
// 2B0CFC: variable 'a3' is possibly undefined


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\donald\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\donald_wi\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
magic\blizzard1\bliz.bdscript
magic\BLIZZARD_1\bliz.bdscript
magic\BLIZZARD_1lk\bliz.bdscript
magic\BLIZZARD_2\bliz.bdscript
magic\BLIZZARD_2lk\bliz.bdscript
magic\BLIZZARD_3\bliz.bdscript
magic\BLIZZARD_3lk\bliz.bdscript
magic\cure1\cure.bdscript
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
magic\LK_BLIZZARD_1\bliz.bdscript
magic\magnet1\magn.bdscript
magic\MAGNET_1\magn.bdscript
magic\MAGNET_1lk\magn.bdscript
magic\MAGNET_2\magn.bdscript
magic\MAGNET_2lk\magn.bdscript
magic\MAGNET_3\magn.bdscript
magic\MAGNET_3lk\magn.bdscript
magic\thunder1\thun.bdscript
magic\THUNDER_1\thun.bdscript
magic\THUNDER_1lk\thun.bdscript
magic\THUNDER_2\thun.bdscript
magic\THUNDER_2lk\thun.bdscript
magic\THUNDER_3\thun.bdscript
magic\THUNDER_3lk\thun.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB130\b_bb.bdscript ((B) Thresholder’s possessor?)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
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
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX290\b_ex.bdscript ((F) Xemnas armor - Xigbar’s arrowgun)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL000\f_al.bdscript ((F) Water spitting statue (AL))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_NM080\f_nm.bdscript ((F) Oogie’s present box (NM))
obj\F_NM180\f_nm.bdscript ((F) Present minigame (shooting machine) (NM))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TT070\f_tt.bdscript ((F) Skateboard Checkmark (TT))
obj\G_EX100\g_ex.bdscript ()
obj\G_EX110\g_ex.bdscript ()
obj\G_EX120\g_ex.bdscript ()
obj\G_EX900\g_ex.bdscript ()
obj\G_EX900_FINAL\g_ex.bdscript ()
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX530\m_ex.bdscript ((M) Bookmaster)
obj\M_EX530_HB\m_ex.bdscript ((M) Runemaster)
obj\M_EX530_TR\m_ex.bdscript ((M) Bookmaster (TR))
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
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
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_MAGF\wisd.bdscript ((P) Sora (Wisdom))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_NM_MAGF\wisd.bdscript ((P) Sora (NM) (Wisdom))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_TR_MAGF\wisd.bdscript ((P) Sora (TR) (Wisdom))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_WI_MAGF\wisd.bdscript ((P) Sora (WI) (Wisdom))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX100_XM_MAGF\wisd.bdscript ((P) Sora (XM) (Wisdom))
obj\P_EX200\mick.bdscript ((P) Micky (hood))
obj\P_EX220\mick.bdscript ((P) Mickey)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L4188:
 jz L4406
 pushFromFSpVal 68
 pushFromFSp 0
 fetchValue 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 2, 18 ; trap_attack_is_strike (2 in, 1 out)
 jz L4398
 pushImmf 1000
 pushImmf 1000
 gosub 12, L4480
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf -2000
 pushImmf 2000
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 memcpy 0
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromFSpVal 68
 pushFromPSp 16
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 68
 pushFromFSp 0
 fetchValue 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 0
 fetchValue 48
 pushFromPSp 16
 syscall 6, 9 ; trap_target_dist (2 in, 1 out)
 popToSp 36
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 fetchValue 12
 pushFromFSp 36
 subf 
 pushImmf 0
 pushImmf 80
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 addf 
 popToSp 36
 pushFromPSp 16
 pushFromFSp 36
 syscall 0, 35 ; method_vector_scale (2 in, 0 out)
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPWp W0
 fetchValue 0
 pushImm 5
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 pushFromPSp 16
 syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
 pushFromPSp 16
 pushImm 99
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 jmp L4398
