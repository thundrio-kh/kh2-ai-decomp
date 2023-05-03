---
---
---
name: trap_attack_set_time
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
push attack ; (YS::ATTACK_MAGIC_3 *)  (An attack object)
push time ; (float)  (Amount of time (in seconds?) for an attack to go on)
push radius ; (float)  (Radius to set for attack)
push height ; (float)  (Height to set for attack)
syscall 2, 62 ; trap_attack_set_time (4 in, 0 out)
---
---
---
description: Sets an amount of time for an attack to go on. Looks like it is a more powerful version of trap_attack_set_radius
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::set_time(YS::ATTACK_MAGIC_3 *const this, double time, double radius, double height)
/----- (00000000004F494C) ----------------------------------------------------
void __fastcall YS::trap_attack_set_time(BD_VALUE_19 *args)
{
  YS::ATTACK_MAGIC_3 *v2; // r30
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r7
  __int64 v7; // r6
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r7
  __int64 v12; // r6
  __int64 v13; // r5
  __int64 v14; // r4
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r7
  __int64 v19; // r6
  __int64 v20; // r5
  __int64 v21; // r4
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r7
  __int64 v26; // r6
  __int64 v27; // r5
  __int64 v28; // r4

  v2 = (YS::ATTACK_MAGIC_3 *)(*args)[0];
  if ( (unsigned int)YS::ATTACK::is_exist((YS::ATTACK_10 *const)v2) )
  {
    YS::ATTACK_MAGIC::set_time(v2, *(float *)&(*args)[4], *(float *)&(*args)[8], *(float *)&(*args)[12]);
  }
  else
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp",
      487LL,
      v7,
      v6,
      v5,
      v4,
      v3);
    printf((unsigned int)"\x1B[41m** CAUTION! ", v14, v13, v12, v11, v10, v9, v8);
    printf((unsigned int)"no such attack", v21, v20, v19, v18, v17, v16, v15);
    printf((unsigned int)" **\x1B[00m\n", v28, v27, v26, v25, v24, v23, v22);
  }
}
// 4F49AC: variable 'v7' is possibly undefined
// 4F49AC: variable 'v6' is possibly undefined
// 4F49AC: variable 'v5' is possibly undefined
// 4F49AC: variable 'v4' is possibly undefined
// 4F49AC: variable 'v3' is possibly undefined
// 4F49BC: variable 'v14' is possibly undefined
// 4F49BC: variable 'v13' is possibly undefined
// 4F49BC: variable 'v12' is possibly undefined
// 4F49BC: variable 'v11' is possibly undefined
// 4F49BC: variable 'v10' is possibly undefined
// 4F49BC: variable 'v9' is possibly undefined
// 4F49BC: variable 'v8' is possibly undefined
// 4F49CC: variable 'v21' is possibly undefined
// 4F49CC: variable 'v20' is possibly undefined
// 4F49CC: variable 'v19' is possibly undefined
// 4F49CC: variable 'v18' is possibly undefined
// 4F49CC: variable 'v17' is possibly undefined
// 4F49CC: variable 'v16' is possibly undefined
// 4F49CC: variable 'v15' is possibly undefined
// 4F49DC: variable 'v28' is possibly undefined
// 4F49DC: variable 'v27' is possibly undefined
// 4F49DC: variable 'v26' is possibly undefined
// 4F49DC: variable 'v25' is possibly undefined
// 4F49DC: variable 'v24' is possibly undefined
// 4F49DC: variable 'v23' is possibly undefined
// 4F49DC: variable 'v22' is possibly undefined

//CHEAT YS::ATTACK_MAGIC::set_time
->
/----- (000000000050D0F8) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::set_time(YS::ATTACK_MAGIC_3 *const this, double time, double radius, double height)
{
  *(_DWORD *)&(*this)[200] = 0;
  *(float *)&(*this)[204] = time;
  if ( radius <= 0.0 )
    radius = *(float *)&(*this)[256];
  *(float *)&(*this)[208] = radius;
  if ( height <= 0.0 )
    height = *(float *)&(*this)[260];
  *(float *)&(*this)[212] = height;
}


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\donald\limi.bdscript
limit\donald_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_CA060\b_ca.bdscript ((?) Port Royal enemy?)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX280\b_ex.bdscript ((F) Xemnas armor - Saïx’s claymore)
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_LK130\b_lk.bdscript ((F) Path for Sora Lion’s groundshaker RC)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_L_ARM\b_nm.bdscript ((B) The Experiment (Left Hand))
obj\F_AL110\f_al.bdscript ((F) ??? (AL))
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_CA000\f_ca.bdscript ((F) Black Pearl (CA))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_NM020\f_nm.bdscript ((F) Spitting fountain (NM))
obj\F_NM070\f_nm.bdscript ((F) Merry-go-round (NM))
obj\M_EX050\m_ex.bdscript ((M) Large Body)
obj\M_EX050_WI\m_ex.bdscript ((M) Large Body (WI))
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX560\m_ex.bdscript ((M) Hammer Frame)
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX560_WI\m_ex.bdscript ((M) Hammer Frame (WI))
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
obj\M_EX660\m_ex.bdscript ((M) Rapid Thruster)
obj\M_EX660_RAW\m_ex.bdscript ((M) Rapid Thruster (RAW))
obj\M_EX660_WI\m_ex.bdscript ((M) Rapid Thruster (WI))
obj\M_EX660_WI_RAW\m_ex.bdscript ()
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
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
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L3275:
 popToSp 0
 pushFromPSpVal 32
 pushImmf 150
 pushImmf 50
 pushImmf 600
 pushImmf 1
 gosub 4, L1909
 pushFromPSpVal 0
 pushImm 16384
 pushFromPSpVal 32
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 memcpyToSpVal 16, 32
 pushFromPSpVal 0
 pushImm 375
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 4
 pushImmf 98
 gosub 4, L3378
 pushFromFSp 4
 pushFromPSpVal 32
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSp 4
 pushImmf 5000
 pushImmf 5000
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 4
 pushImmf 90
 pushImmf 0
 pushImmf 0
 syscall 2, 62 ; trap_attack_set_time (4 in, 0 out)
 pushImmf 90
 gosub 4, L3378
 halt 
 pushFromFSpVal 64
 jz L3377
 gosub 4, L3400
 gosub 4, L3406
 gosub 4, L3414
 jmp L3377
