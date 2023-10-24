---
---
---
name: method_obj_jump
---
---
---
category: movement
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push v ; (kn::FVector *)  (Position vectors)
push motion_id ; (int)  (ID of a specific motion set entry)
push blend_time ; (float)  (Time to blend between animations)
push force ; (bool)  (Probably whether or not to force the animation to switch)
syscall 1, 55 ; method_obj_jump (5 in, 0 out)
---
---
---
description: Jumps an object to the vector
---
---
---
decompiled code:
void __fastcall YS::OBJ::prepare_jump(YS::OBJ_89 *const this, RCFVector _v)
void __fastcall YS::MOTION::start(YS::MOTION_289 *const this, YS::BINARC_62 *motion, double blend_time, double start_time)
/----- (00000000004FDE28) ----------------------------------------------------
void __fastcall YS::method_obj_jump(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  int v5; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
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
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)(v2 + 4);
  YS::OBJ::prepare_jump((YS::OBJ_89 *const)v4, (RCFVector)*(unsigned int *)&(*args)[4]);
  YS::MOTION::start(
    (YS::MOTION_289 *const)(unsigned int)(v4 + 320),
    *(_DWORD *)&(*args)[8],
    *(float *)&(*args)[12],
    0.0);
  if ( *(_DWORD *)&(*args)[16] )
  {
    v5 = *(_DWORD *)&(*args)[8];
    *(_DWORD *)(v4 + 256) = v5 + 1;
    *(_DWORD *)(v4 + 260) = v5 + 2;
  }
}
// 4FDE4C: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::prepare_jump YS::MOTION::start
->
/----- (00000000004039A8) ----------------------------------------------------
void __fastcall YS::OBJ::prepare_jump(YS::OBJ_89 *const this, RCFVector _v)
{
  double v3; // fp1
  FLOAT *v4; // r3
  double v5; // fp2
  double v6; // fp3
  double v7; // fp4
  __int64 back_chain; // [sp+0h] [-C0h]
  kn::FVector v9; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v10; // [sp+80h] [-40h] BYREF
  float v11[6]; // [sp+90h] [-30h] BYREF

  v10.x = _v->x;
  v3 = _v->y;
  v10.y = _v->y;
  v10.z = _v->z;
  v10.w = _v->w;
  YS::OBJ::prepare_jump_height(this, v3);
  if ( v10.w < -500.0 || v10.w > 500.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "speed >= -OBJ::MOVE_SPEED_MAX && speed <= OBJ::MOVE_SPEED_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\action_jump.cpp",
      70LL,
      "prepare_jump",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\action_jump.cpp", 70);
  }
  v10.y = 0.0;
  Axa::FVECTOR4::normalize(&v10);
  v11[0] = v10.x;
  v11[1] = v10.y;
  v11[2] = v10.z;
  v11[3] = v10.w;
  v4 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v11);
  v5 = v4[1];
  v6 = v4[2];
  v7 = v4[3];
  v9.x = *v4;
  v9.y = v5;
  v9.z = v6;
  v9.w = v7;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 192), &v9);
  *(_DWORD *)&(*this)[204] = 1065353216;
}
// 4039FC: variable 'back_chain' is possibly undefined


->
/----- (000000000045C430) ----------------------------------------------------
void __fastcall YS::MOTION::start(YS::MOTION_289 *const this, YS::BINARC_62 *motion, double blend_time, double start_time)
{
  YS::MOTION::clear_queue(this);
  YS::MOTION::start_motion(this, motion, blend_time, start_time);
}


/----- (000000000045C494) ----------------------------------------------------
void __fastcall YS::MOTION::start(YS::MOTION_289 *const this, int id, double blend_time, double start_time)
{
  YS::MOTION::clear_queue(this);
  YS::MOTION::start_id(this, id, blend_time, start_time);
}


---
---
---
appears in:
limit\auron\limi.bdscript
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
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
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
obj\B_LK110_PHANTOM\b_lk.bdscript ((M) Scar Ghost)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_NM100\f_nm.bdscript ((F) Oogie’s present (NM))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI010\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))
obj\F_WI060\f_wi.bdscript ((F) Cannon tower (WI))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\F_WI360_PETE\f_wi.bdscript ((F) Building site’s platform (PETE) (WI))
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
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX510\m_ex.bdscript ((M) Rabid Dog)
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
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
obj\M_EX700\m_ex.bdscript ((M) Mole Driller)
obj\M_EX700_NM\m_ex.bdscript ((M) Mole Driller (NM))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\M_EX790\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_CHRISTMAS\m_ex.bdscript ((M) Toy Soldier)
obj\M_EX790_CHRISTMAS_NM\m_ex.bdscript ((M) Toy Soldier (NM))
obj\M_EX790_HALLOWEEN\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_HALLOWEEN_NM\m_ex.bdscript ((M) Graveyard (NM))
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_AL090_BTL\n_al.bdscript ((N) Abu holding gem (BTL) (AL))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB060_BTL\n_bb.bdscript ((N) Lumière (BTL) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
obj\N_CM010_BTL\n_cm.bdscript ((N) Larxene (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_EX940_BTL\n_ex.bdscript ((N) Riku (coat) (BTL) (EX))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_HE030_BTL\n_he.bdscript ((N) Megara (Hydra battle) (BTL) (HE))
obj\N_HE030_BTL_DEF\n_he.bdscript ((N) Megara (Pete battle) (BTL_DEF) (HE))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM050_BTL_TOY\n_nm.bdscript ((N) Lock (toy minigame) (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM060_BTL_TOY\n_nm.bdscript ((N) Shock (toy minigame) (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_NM070_BTL_TOY\n_nm.bdscript ((N) Barrel (toy minigame) (BTL) (NM))
obj\N_PO020_BTL\n_po.bdscript ((N) Tigger (BTL) (PO))
obj\N_PO030_BTL\n_po.bdscript ((N) Pigglet (BTL) (PO))
obj\N_PO040_BTL\n_po.bdscript ((N) Eeyore (BTL) (PO))
obj\N_PO070_BTL\n_po.bdscript ((N) Roo (BTL) (PO))
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
example usage from limit\auron\limi.bdscript
L1950:
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 pushImm 12
 add 
 pushImmf 16
 memcpy 0
 pushFromFSp 0
 pushFromPSp 16
 pushImm 3
 pushImmf 0
 pushImm 1
 syscall 1, 55 ; method_obj_jump (5 in, 0 out)
 pushFromPWp W108
 fetchValue 0
 pushFromFSp 0
 pushImm 255
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm -1
 syscall 1, 179 ; trap_obj_set_fall_motion (2 in, 0 out)
 pushFromFSp 0
 pushImm -1
 syscall 1, 180 ; trap_obj_set_land_motion (2 in, 0 out)
 halt 
