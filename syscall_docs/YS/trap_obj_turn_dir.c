---
---
---
name: trap_obj_turn_dir
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
push unk1 ; (unknown)  (pushFromFSp: 0,4) (memcpyToSp: 16, 112,16, 16,16, 32,16, 48,16, 64,...) (pushImm: 16) (pushFromPSp: 32) (pushImmf: 0.02618) (pushFromPSpVal: 0)
push unk2 ; (unknown)  (pushFromPSp: 112,16,32,48,64,...) (add: ) (pushFromFSp: 12,4,8) (syscall: 0, 3 ; trap_frametime (0 in, 1 out))
push unk3 ; (unknown)  (pushImmf: 0,0.01,0.013963,0.017453,0.02,0.02618,0.03,0.034907,0.04,0.05,0.05236,0.069813,0.08,0.087266,0.1,0.10472,0.174533,0.2,0.261799,0.392699,0.5,3.141593) (fetchValue: 8) (pushFromFSp: 32,64,72,8) (mulf: )
syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::turn_to_dir(YS::OBJ_133 *const this, const kn::FVector *dir, double limit)
/----- (0000000000505B40) ----------------------------------------------------
void __fastcall YS::trap_obj_turn_dir(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  *(_DWORD *)args = YS::OBJ::turn_to_dir(
                      (YS::OBJ_133 *const)*(unsigned int *)(v2 + 4),
                      (const kn::FVector *)*(unsigned int *)&(*args)[4],
                      *(float *)&(*args)[8]);
}
// 505B64: variable 'back_chain' is possibly undefined
->
/----- (0000000000471840) ----------------------------------------------------
__int64 __fastcall YS::OBJ::turn_to_dir(YS::OBJ_133 *const this, const kn::FVector *dir, double limit)
{
  __int64 v6; // r29
  double v8; // fp31
  double v9; // fp30
  double v10; // fp1
  double v11; // fp1
  double v12; // fp2

  v6 = 1LL;
  if ( YS::OBJ::is_xyzrot(this) )
    return 0LL;
  if ( limit == 0.0 )
    limit = *(float *)&(*this)[284];
  v8 = (float)(dk::Vsync::s_frameTime * (float)limit);
  v9 = f_atan2f(dir->x, dir->z);
  v10 = YS::MATH::FixRadian((float)((float)v9 - *(float *)&(*this)[1372]));
  if ( v8 >= v10 )
  {
    v12 = v10;
    v11 = v9;
    if ( v12 >= -v8 )
      v6 = 0LL;
    else
      v11 = YS::MATH::FixRadian((float)(*(float *)&(*this)[1372] - (float)v8));
  }
  else
  {
    v11 = YS::MATH::FixRadian((float)(*(float *)&(*this)[1372] + (float)v8));
  }
  YS::OBJ::set_rot(this, v11);
  return v6;
}
// A0AD74: using guessed type float dk::Vsync::s_frameTime;


---
---
---
appears in:
limit\beast\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\jack\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_BB130\b_bb.bdscript ((B) Thresholder’s possessor?)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_RTN\rtn_.bdscript ((B) Axel (Scene day he freezes) (RTN))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170_RTN\rtn_.bdscript ((B) Xehanort (Scene looking at Kingdom Hearts) (RTN))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE030_RTN\rtn_.bdscript ((RTN) Hades (HE))
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00_RTN\rtn_.bdscript ((RTN) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_10_RTN\rtn_.bdscript ((RTN) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_LK100_20_RTN\rtn_.bdscript ((RTN) Ed)
obj\B_LK110_PHANTOM\b_lk.bdscript ((M) Scar Ghost)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU100_RTN\rtn_.bdscript ((RTN) Shan-Yu)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_TR020\b_tr.bdscript ((B) MCP)
obj\F_AL070_BLIZZARD\f_al.bdscript ((F) Blizzard orbs (AL))
obj\F_AL070_FIRE\f_al.bdscript ((F) Fire orbs (AL))
obj\F_AL070_THUNDER\f_al.bdscript ((F) Thunder orbs (AL))
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_CA010\f_ca.bdscript ((F) ??? - Something from Black Pearl? (CA))
obj\F_CA710_RTN\rtn_.bdscript ((F) Jack Sparrow’s compass (RTN))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_TT140\rtn_.bdscript ((F) Dream Sword (TT))
obj\F_TT150\rtn_.bdscript ((F) Dream Shield (TT))
obj\F_TT160\rtn_.bdscript ((F) Dream Rod (TT))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI010\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))
obj\F_WI400\f_wi.bdscript ((F) Box (Pete throws) (WI))
obj\F_WI410\f_wi.bdscript ((F) Barrel (Pete throws) (WI))
obj\F_WI420\f_wi.bdscript ((F) Bowl (Pete throws) (WI))
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
obj\M_EX120_HB\m_ex.bdscript ((M) Spring Metal)
obj\M_EX200\m_ex.bdscript ((M) Wight Knight)
obj\M_EX200_NM\m_ex.bdscript ((M) Wight Knight (NM))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX350_03\m_ex.bdscript ((M) Mushroom 3 (EX))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_11\m_ex.bdscript ((M) Mushroom 11 (EX))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
obj\M_EX510\m_ex.bdscript ((M) Rabid Dog)
obj\M_EX540\m_ex.bdscript ((M) Aeroplane)
obj\M_EX540_WI\m_ex.bdscript ((M) Aeroplane (WI))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX560\m_ex.bdscript ((M) Hammer Frame)
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX560_WI\m_ex.bdscript ((M) Hammer Frame (WI))
obj\M_EX570\m_ex.bdscript ((M) Assault Rider)
obj\M_EX600\m_ex.bdscript ((M) Magnum Loader)
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
obj\M_EX640\m_ex.bdscript ((M) Hot Rod)
obj\M_EX640_HB\m_ex.bdscript ((M) Mad Ride)
obj\M_EX640_WI\m_ex.bdscript ((M) Hot Rod (WI))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
obj\M_EX700\m_ex.bdscript ((M) Mole Driller)
obj\M_EX700_NM\m_ex.bdscript ((M) Mole Driller (NM))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
obj\M_EX760\m_ex.bdscript ((M) Armored Knight)
obj\M_EX760_NM\m_ex.bdscript ((M) Armored Knight (NM))
obj\M_EX760_NM_RAW\m_ex.bdscript ()
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX790\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_CHRISTMAS\m_ex.bdscript ((M) Toy Soldier)
obj\M_EX790_CHRISTMAS_NM\m_ex.bdscript ((M) Toy Soldier (NM))
obj\M_EX790_HALLOWEEN\m_ex.bdscript ((M) Graveyard)
obj\M_EX790_HALLOWEEN_NM\m_ex.bdscript ((M) Graveyard (NM))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX880\m_ex.bdscript ((M) Creeper)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX930\m_ex.bdscript ((M) Dancer)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\M_EX990_RTN\rtn_.bdscript ((M) Dusk (RTN))
obj\M_EX990_RTN_FIXCOLOR\rtn_.bdscript ((M) Dusk (RTN) (FIXCOLOR) (EX))
obj\M_EX990_ZIPPER_RTN\rtn_.bdscript ((P) Dusk (ZIPPER) (RTN) (EX))
obj\N_AL010_RTN\rtn_.bdscript ((N) Magic Carpet (RTN) (AL))
obj\N_AL020_RTN\rtn_.bdscript ((N) Iago (RTN) (AL))
obj\N_AL030_RTN\rtn_.bdscript ((N) Abu (RTN) (AL))
obj\N_AL040_RTN\rtn_.bdscript ((N) Jasmine (RTN) (AL))
obj\N_AL080_RTN\rtn_.bdscript ((N) Peddler (RTN) (AL))
obj\N_BB010_RTN\rtn_.bdscript ((N) Belle (RTN) (BB))
obj\N_BB010_SIT_RTN\rtn_.bdscript ((N) Belle (sitting) (RTN) (BB))
obj\N_BB020_RTN\rtn_.bdscript ((N) Beast (Prince Outfit) (RTN) (BB))
obj\N_BB040_RTN\rtn_.bdscript ((N) Chip (RTN) (BB))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB050_RTN\rtn_.bdscript ((N) Cogsworth (RTN) (BB))
obj\N_BB050_SAD_RTN\rtn_.bdscript ((N) Cogsworth (SAD) (RTN) (BB))
obj\N_BB060_RTN\rtn_.bdscript ((N) Lumière (RTN) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
obj\N_BB070_RTN\rtn_.bdscript ((N) Mrs. Potts (RTN) (BB))
obj\N_BB080_RTN\rtn_.bdscript ((N) Wardrobe maid (RTN) (BB))
obj\N_CA010_RTN\rtn_.bdscript ((N) Elizabeth (RTN) (CA))
obj\N_CA010_SAD_RTN\rtn_.bdscript ((N) Elizabeth (SAD) (RTN) (CA))
obj\N_CA020_KAJI_RTN\rtn_.bdscript ((N) Will Turner (KAJI) (RTN) (CA))
obj\N_CA020_RTN\rtn_.bdscript ((N) Will Turner (RTN) (CA))
obj\N_CA020_SIT_RTN\rtn_.bdscript ((N) Will Turner (sitting) (RTN) (CA))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM010_BTL\n_cm.bdscript ((N) Larxene (BTL) (CM))
obj\N_DC010_BTL\n_dc.bdscript ((N) Minnie (BTL) (DC))
obj\N_DC010_RTN\rtn_.bdscript ((N) Minnie (RTN) (DC))
obj\N_DC020_RTN\rtn_.bdscript ((N) Daisy (RTN) (DC))
obj\N_DC030_RTN\rtn_.bdscript ((N) Chip (RTN) (DC))
obj\N_DC040_RTN\rtn_.bdscript ((N) Dale (RTN) (DC))
obj\N_DC050_RTN\rtn_.bdscript ((N) Magic Broom (RTN) (DC))
obj\N_EX500_ANGER_RAW_RTN\rtn_.bdscript ((N) Heyner (ANGER) (RAW) (RTN) (EX))
obj\N_EX500_ANGER_RTN\rtn_.bdscript ((N) Heyner (ANGER) (RTN) (EX))
obj\N_EX500_RAW_RTN\rtn_.bdscript ((N) Hayner (RAW) (RTN) (EX))
obj\N_EX500_RTN\rtn_.bdscript ((N) Hayner (RTN) (EX))
obj\N_EX510_RAW_RTN\rtn_.bdscript ((N) Pence (RAW) (RTN) (EX))
obj\N_EX510_RTN\rtn_.bdscript ((N) Pence (RTN) (EX))
obj\N_EX520_RAW_RTN\rtn_.bdscript ((N) Olette (RAW) (RTN) (EX))
obj\N_EX520_RTN\rtn_.bdscript ((N) Olette (RTN) (EX))
obj\N_EX560_RTN\rtn_.bdscript ((N) Kairi (RTN) (EX))
obj\N_EX570_RAW_RTN\rtn_.bdscript ((N) Seifer (RAW) (RTN) (EX))
obj\N_EX570_RTN\rtn_.bdscript ((N) Seifer (RTN) (EX))
obj\N_EX580_RAW_RTN\rtn_.bdscript ((N) Raijin (RAW) (RTN) (EX))
obj\N_EX580_RTN\rtn_.bdscript ((N) Raijin (RTN) (EX))
obj\N_EX590_RAW_RTN\rtn_.bdscript ((N) Fujin (RAW) (RTN) (EX))
obj\N_EX590_RTN\rtn_.bdscript ((N) Fujin (RTN) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX600_RAW_RTN\rtn_.bdscript ((N) Setzer (RAW) (RTN) (EX))
obj\N_EX600_RTN\rtn_.bdscript ((N) Setzer (RTN) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX610_RAW_RTN\rtn_.bdscript ((N) Vivi (RAW) (RTN) (EX))
obj\N_EX610_RTN\rtn_.bdscript ((N) Vivi (RTN) (EX))
obj\N_EX620_RTN\rtn_.bdscript ((N) Naminé (RTN) (EX))
obj\N_EX640_MOOGLE_RTN\rtn_.bdscript ((N) Moogle (MOOGLE) (RTN) (EX))
obj\N_EX640_SHOP_RTN\rtn_.bdscript ((N) Moogle (SHOP) (RTN) (EX))
obj\N_EX650_HB_BOY_A_RTN\rtn_.bdscript ((N) Villager (boy) (HB_BOY_A) (RTN) (EX))
obj\N_EX650_HB_ITEM_RTN\rtn_.bdscript ((N) Villager (boy) (HB_ITEM) (RTN) (EX))
obj\N_EX650_HB_PROTECT_RTN\rtn_.bdscript ((N) Villager (boy) (HB_PROTECT) (RTN) (EX))
obj\N_EX650_TT_BOY_A_RTN\rtn_.bdscript ((N) Villager (boy) (TT_BOY_A) (RTN) (EX))
obj\N_EX650_TT_BOY_B_RTN\rtn_.bdscript ((N) Villager (boy) (TT_BOY_B) (RTN) (EX))
obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))
obj\N_EX650_TT_ITEM_RTN\rtn_.bdscript ((N) Villager (boy) (TT_ITEM) (RTN) (EX))
obj\N_EX650_TT_PROTECT_RTN\rtn_.bdscript ((N) Villager (boy) (TT_PROTECT) (RTN) (EX))
obj\N_EX660_HB_LADY_A_RTN\rtn_.bdscript ((N) Villager (lady) (HB_LADY_A) (RTN) (EX))
obj\N_EX660_TT_LADY_A_RTN\rtn_.bdscript ((N) Villager (lady) (TT_LADY_A) (RTN) (EX))
obj\N_EX670_HB_GIRL_A_RTN\rtn_.bdscript ((N) Villager (girl) (HB_GIRL_A) (RTN) (EX))
obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))
obj\N_EX670_TT_GIRL_A_RTN\rtn_.bdscript ((N) Villager (girl) (TT_GIRL_A) (RTN) (EX))
obj\N_EX670_TT_GIRL_B_RTN\rtn_.bdscript ((N) Villager (girl) (TT_GIRL_B) (RTN) (EX))
obj\N_EX680_HB_ITEM_RTN\rtn_.bdscript ((N) Villager (man) (HB_ITEM) (RTN) (EX))
obj\N_EX680_HB_MAN_A_RTN\rtn_.bdscript ((N) Villager (man) (HB_MAN_A) (RTN) (EX))
obj\N_EX680_HB_MAN_B_RTN\rtn_.bdscript ((N) Villager (man) (HB_MAN_B) (RTN) (EX))
obj\N_EX680_HB_PROTECT_RTN\rtn_.bdscript ((N) Villager (man) (HB_PROTECT) (RTN) (EX))
obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))
obj\N_EX680_TT_ITEM_RTN\rtn_.bdscript ((N) Villager (man) (TT_ITEM) (RTN) (EX))
obj\N_EX680_TT_MAN_A_RTN\rtn_.bdscript ((N) Villager (man) (TT_MAN_A) (RTN) (EX))
obj\N_EX680_TT_MAN_B_RTN\rtn_.bdscript ((N) Villager (man) (TT_MAN_B) (RTN) (EX))
obj\N_EX680_TT_PROTECT_RAW_RTN\rtn_.bdscript ((N) Villager (man) (TT_PROTECT) (RAW) (RTN) (EX))
obj\N_EX680_TT_PROTECT_RTN\rtn_.bdscript ((N) Villager (man) (TT_PROTECT) (RTN) (EX))
obj\N_EX680_TT_PRT_RAW_RTN\rtn_.bdscript ((N) Villager (man) (TT_PRT) (RAW) (RTN) (EX))
obj\N_EX680_TT_REFEREE_RAW_RTN\rtn_.bdscript ((N) Villager (man) (TT_REFEREE) (RAW) (RTN) (EX))
obj\N_EX680_TT_REFEREE_RTN\rtn_.bdscript ((N) Villager (man) (TT_REFEREE) (RTN) (EX))
obj\N_EX680_TT_REF_RAW_RTN\rtn_.bdscript ((N) Villager (man) (TT_REF) (RAW) (RTN) (EX))
obj\N_EX690_HB_ACCE_RTN\rtn_.bdscript ((N) Villager (woman) (HB_ACCE) (RTN) (EX))
obj\N_EX690_HB_WOMAN_A_RTN\rtn_.bdscript ((N) Villager (man) (HB_WOMAN_A) (RTN) (EX))
obj\N_EX690_HB_WOMAN_B_RTN\rtn_.bdscript ((N) Villager (man) (HB_WOMAN_B) (RTN) (EX))
obj\N_EX690_TT_ACCE_RAW_RTN\rtn_.bdscript ((N) Villager (woman) (TT_ACCE) (RAW) (RTN) (EX))
obj\N_EX690_TT_ACCE_RTN\rtn_.bdscript ((N) Villager (woman) (TT_ACCE) (RTN) (EX))
obj\N_EX690_TT_ACC_RAW_RTN\rtn_.bdscript ((N) Villager (woman) (TT_ACC) (RAW) (RTN) (EX))
obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))
obj\N_EX690_TT_TUTOR_RTN\n_ex.bdscript ((N) Villager (woman) (TT_TUTOR) (RTN) (EX))
obj\N_EX690_TT_WOMAN_A_RTN\rtn_.bdscript ((N) Villager (woman) (TT_WOMAN_A) (RTN) (EX))
obj\N_EX690_TT_WOMAN_B_RTN\rtn_.bdscript ((N) Villager (woman) (TT_WOMAN_B) (RTN) (EX))
obj\N_EX700_HB_WEAPON_RTN\rtn_.bdscript ((N) Villager (gentleman) (HB_WEAPON) (RTN) (EX))
obj\N_EX700_TT_GENTL_A_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_GENTL_A) (RTN) (EX))
obj\N_EX700_TT_GENTL_B_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_GENTL_B) (RTN) (EX))
obj\N_EX700_TT_SPONSOR_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_SPONSOR) (RTN) (EX))
obj\N_EX700_TT_SPO_RAW_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_SPO) (RAW) (RTN) (EX))
obj\N_EX700_TT_SPO_RW2_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_SPO) (RW2) (RTN) (EX))
obj\N_EX700_TT_WEAPON_RAW_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_WEAPON) (RAW) (RTN) (EX))
obj\N_EX700_TT_WEAPON_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_WEAPON) (RTN) (EX))
obj\N_EX700_TT_WPN_RAW_RTN\rtn_.bdscript ((N) Villager (gentleman) (TT_WPN) (RAW) (RTN) (EX))
obj\N_EX710_HB_OLD_F_A_RTN\rtn_.bdscript ((N) Villager (old woman) (HB_OLD_F_A) (RTN) (EX))
obj\N_EX710_TT_OLD_F_A_RTN\rtn_.bdscript ((N) Villager (old man) (TT_OLD_F_A) (RTN) (EX))
obj\N_EX710_TT_SWEETS_RAW_RTN\rtn_.bdscript ((N) Villager (old woman) (TT_SWEETS) (RAW) (RTN) (EX))
obj\N_EX710_TT_SWEETS_RTN\rtn_.bdscript ((N) Villager (old woman) (TT_SWEETS) (RTN) (EX))
obj\N_EX710_TT_SWT_RAW_RTN\rtn_.bdscript ((N) Villager (old woman) (TT_SWT) (RAW) (RTN) (EX))
obj\N_EX720_RTN\rtn_.bdscript ((N) Dog (RTN))
obj\N_EX730_RTN\rtn_.bdscript ((N) Cat (RTN))
obj\N_EX730_TUTORIAL_RTN\rtn_.bdscript ((N) Cat (TUTORIAL) (RTN))
obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript ((N) Dove (TT) (SKATE) (RTN) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_EX760_RTN\rtn_.bdscript ((N) Pete (RTN) (EX))
obj\N_EX810_HB_OLD_M_A_RTN\rtn_.bdscript ((N) Villager (old man) (HB_OLD_M_A) (RTN) (EX))
obj\N_EX810_TT_OLD_M_A_RTN\rtn_.bdscript ((N) Villager (old man) (TT_OLD_M_A) (RTN) (EX))
obj\N_EX900_RTN\rtn_.bdscript ((N) Riku (Ansem form) (RTN) (EX))
obj\N_HB010_RTN\rtn_.bdscript ((N) Scrooge (RTN) (HB))
obj\N_HB020_DEWEY_RTN\rtn_.bdscript ((N) Dewey (RTN) (HB))
obj\N_HB020_HUEY_RTN\rtn_.bdscript ((N) Huey (RTN) (HB))
obj\N_HB020_LOUIE_RTN\rtn_.bdscript ((N) Louie (RTN) (HB))
obj\N_HB030_RTN\rtn_.bdscript ((N) Merlin (RTN) (HB))
obj\N_HB530_RTN\rtn_.bdscript ((N) Squall / Leon (RTN) (HB))
obj\N_HB540_RTN\rtn_.bdscript ((N) Cid (RTN) (HB))
obj\N_HB540_SIT_RTN\rtn_.bdscript ((N) Cid (sitting) (RTN) (HB))
obj\N_HB550_RTN\rtn_.bdscript ((N) Cloud (RTN) (HB))
obj\N_HB550_STAND_RTN\rtn_.bdscript ((N) Cloud (STAND) (RTN) (HB))
obj\N_HB560_RTN\rtn_.bdscript ((N) Aerith (RTN) (HB))
obj\N_HB570_RTN\rtn_.bdscript ((N) Tifa (RTN) (HB))
obj\N_HB580_RTN\rtn_.bdscript ((N) Yuffie (RTN) (HB))
obj\N_HB590_RTN\rtn_.bdscript ((N) Sephiroth (RTN) (HB))
obj\N_HB600_RTN\rtn_.bdscript ((N) Yuna (RTN) (HB))
obj\N_HB610_RTN\rtn_.bdscript ((N) Rikku (RTN) (HB))
obj\N_HB620_RTN\rtn_.bdscript ((N) Paine (RTN) (HB))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\N_HE010_RTN\rtn_.bdscript ((N) Hercules (RTN) (HE))
obj\N_HE010_SIT_RTN\rtn_.bdscript ((N) Hercules (sitting) (RTN) (HE))
obj\N_HE020_MENU_RTN\rtn_.bdscript ((N) Phil (MENU) (RTN) (HE))
obj\N_HE020_RTN\rtn_.bdscript ((N) Phil (RTN) (HE))
obj\N_HE030_BTL\n_he.bdscript ((N) Megara (Hydra battle) (BTL) (HE))
obj\N_HE030_BTL_DEF\n_he.bdscript ((N) Megara (Pete battle) (BTL_DEF) (HE))
obj\N_HE030_RTN\rtn_.bdscript ((N) Megara (RTN) (HE))
obj\N_HE040_RTN\rtn_.bdscript ((N) Pegasus (RTN) (HE))
obj\N_HE050_RTN\rtn_.bdscript ((N) Pain (RTN) (HE))
obj\N_HE060_RTN\rtn_.bdscript ((N) Panic (RTN) (HE))
obj\N_LK010_RTN\rtn_.bdscript ((N) Timon (RTN) (LK))
obj\N_LK020_RTN\rtn_.bdscript ((N) Pumba (RTN) (LK))
obj\N_LK030_RTN\rtn_.bdscript ((N) Nala (RTN) (LK))
obj\N_LK050_RTN\rtn_.bdscript ((N) Lioness (RTN) (LK))
obj\N_LK120_RTN\rtn_.bdscript ((N) Rafiki (RTN) (LK))
obj\N_LM010_RTN\rtn_.bdscript ((N) Donald (RTN) (LM))
obj\N_LM020_RTN\rtn_.bdscript ((N) Goofy (RTN) (LM))
obj\N_LM030_RTN\rtn_.bdscript ((N) Ariel (RTN) (LM))
obj\N_LM040_RTN\rtn_.bdscript ((N) Poseidon (RTN) (LM))
obj\N_LM050_RTN\rtn_.bdscript ((N) Sebastian (RTN) (LM))
obj\N_LM060_RTN\rtn_.bdscript ((N) Flounder (RTN) (LM))
obj\N_MU010_RTN\rtn_.bdscript ((N) Li Shang (RTN) (MU))
obj\N_MU020_RTN\rtn_.bdscript ((N) Yao (RTN) (MU))
obj\N_MU030_RTN\rtn_.bdscript ((N) Chien-Po (RTN) (MU))
obj\N_MU040_RTN\rtn_.bdscript ((N) Ling (RTN) (MU))
obj\N_MU050_RTN\rtn_.bdscript ((N) Emperor of China (RTN) (MU))
obj\N_MU060_RTN\rtn_.bdscript ((N) Chinese Soldier 1 (RTN) (MU))
obj\N_MU070_RTN\rtn_.bdscript ((N) Chinese Soldier 2 (RTN) (MU))
obj\N_NM010_RTN\rtn_.bdscript ((N) Sally (RTN) (NM))
obj\N_NM010_SIT_RTN\rtn_.bdscript ((N) Sally (sitting) (RTN) (NM))
obj\N_NM020_RTN\rtn_.bdscript ((N) Dr. Finkelstein (RTN) (NM))
obj\N_NM030_RTN\rtn_.bdscript ((N) Zero (RTN) (NM))
obj\N_NM040_RTN\rtn_.bdscript ((N) The Mayor (RTN) (NM))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM050_BTL_TOY\n_nm.bdscript ((N) Lock (toy minigame) (BTL) (NM))
obj\N_NM050_RTN\rtn_.bdscript ((N) Lock (RTN) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM060_BTL_TOY\n_nm.bdscript ((N) Shock (toy minigame) (BTL) (NM))
obj\N_NM060_RTN\rtn_.bdscript ((N) Shock (RTN) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_NM070_BTL_TOY\n_nm.bdscript ((N) Barrel (toy minigame) (BTL) (NM))
obj\N_NM070_RTN\rtn_.bdscript ((N) Barrel (RTN) (NM))
obj\N_NM090_RTN\rtn_.bdscript ((N) Santa Claus (RTN) (NM))
obj\N_NM100_RTN\rtn_.bdscript ((N) Elf (male) (RTN) (NM))
obj\N_NM110_RTN\rtn_.bdscript ((N) Elf (female) (RTN) (NM))
obj\N_PO010_RTN\rtn_.bdscript ((N) Pooh (RTN) (PO))
obj\N_PO010_SIT_RTN\rtn_.bdscript ((N) Pooh (sitting) (RTN) (PO))
obj\N_PO020_BTL\n_po.bdscript ((N) Tigger (BTL) (PO))
obj\N_PO020_RTN\rtn_.bdscript ((N) Tigger (RTN) (PO))
obj\N_PO030_AIR_RTN\rtn_.bdscript ((N) Piglet (AIR) (RTN) (PO))
obj\N_PO030_BTL\n_po.bdscript ((N) Pigglet (BTL) (PO))
obj\N_PO030_RTN\rtn_.bdscript ((N) Pigglet (RTN) (PO))
obj\N_PO040_BTL\n_po.bdscript ((N) Eeyore (BTL) (PO))
obj\N_PO040_RTN\rtn_.bdscript ((N) Eeyore (RTN) (PO))
obj\N_PO050_RTN\rtn_.bdscript ((N) Rabbit (RTN) (PO))
obj\N_PO060_RTN\rtn_.bdscript ((N) Owl (RTN) (PO))
obj\N_PO070_BTL\n_po.bdscript ((N) Roo (BTL) (PO))
obj\N_PO070_RTN\rtn_.bdscript ((N) Roo (RTN) (PO))
obj\N_PO080_RTN\rtn_.bdscript ((N) Kanga (RTN) (PO))
obj\N_PO090_RTN\rtn_.bdscript ((N) Gopher (RTN) (PO))
obj\N_PO100_RTN\rtn_.bdscript ((N) Kanga & Roo (RTN) (PO))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\N_TT010_RTN\rtn_.bdscript ((N) Yen Sid (RTN) (TT))
obj\N_TT010_SIT_RTN\rtn_.bdscript ((N) Yen Sid (sitting) (RTN) (TT))
obj\N_TT020_RTN\rtn_.bdscript ((N) Flora (RTN) (TT))
obj\N_TT030_RTN\rtn_.bdscript ((N) Fauna (RTN) (TT))
obj\N_TT040_RTN\rtn_.bdscript ((N) Merryweather (RTN) (TT))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
obj\N_WI010_RTN\rtn_.bdscript ((N) Pete (captain) (RTN) (WI))
obj\N_WI020_RTN\rtn_.bdscript ((N) Horace (RTN) (WI))
obj\N_WI030_RTN\rtn_.bdscript ((N) Clarabelle (RTN) (WI))
obj\N_WI040_RTN\rtn_.bdscript ((N) Clara (RTN) (WI))
obj\P_AL000_RTN\rtn_.bdscript ((P) Aladdin (RTN) (AL))
obj\P_BB000\p_bb.bdscript ((P) Beast)
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_BB000_RTN\rtn_.bdscript ((N) ??? (RTN) (BB))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_KAJI_BP_RTN\rtn_.bdscript ((P) Jack Sparrow steering ship (Black Pearl) (RTN) (CA))
obj\P_CA000_KAJI_IS_RTN\rtn_.bdscript ((P) Jack Sparrow steering ship (Interceptor) (RTN) (CA))
obj\P_CA000_KAJI_RTN\rtn_.bdscript ((P) Jack Sparrow (KAJI) (RTN) (CA))
obj\P_CA000_KAJI_SKL_RTN\rtn_.bdscript ((P) Jack Sparrow stearing ship (Skelleton) (RTN) (CA))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_CA000_RTN\rtn_.bdscript ((P) Jack Sparrow (RTN))
obj\P_CA000_SKL_RTN\rtn_.bdscript ((P) Jack Sparrow (skeleton) (RTN))
obj\P_CA000_SK_RTN\rtn_.bdscript ()
obj\P_EH000_RTN\rtn_.bdscript ((P) Riku (RTN))
obj\P_EX020_NM_RTN\rtn_.bdscript ((P) Donald (NM) (RTN))
obj\P_EX020_NOBG_RTN\rtn_.bdscript ((P) Donald (NOBG) (RTN) (EX))
obj\P_EX020_RTN\rtn_.bdscript ((N) Donald (RTN))
obj\P_EX020_TR_RTN\rtn_.bdscript ((P) Donald (TR) (RTN))
obj\P_EX020_XM_RTN\rtn_.bdscript ((P) Donald (XM) (RTN))
obj\P_EX030_NM_RTN\rtn_.bdscript ((P) Goofy (NM) (RTN))
obj\P_EX030_NOBG_RTN\rtn_.bdscript ((P) Goofy (NOBG) (RTN) (EX))
obj\P_EX030_RTN\rtn_.bdscript ((N) Goofy (RTN))
obj\P_EX030_TR_RTN\rtn_.bdscript ((P) Goofy (TR) (RTN))
obj\P_EX030_XM_RTN\rtn_.bdscript ((P) Goofy (XM) (RTN))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_EX130\p_ex.bdscript ((P) Shadow Roxas)
obj\P_EX210_RTN\rtn_.bdscript ((P) Mickey (coat) (RTN))
obj\P_EX220_RTN\rtn_.bdscript ((P) Mickey (RTN))
obj\P_HE000_RTN\rtn_.bdscript ((P) Auron (RTN))
obj\P_LK000_RTN\rtn_.bdscript ((P) Simba (RTN))
obj\P_LK020_RTN\rtn_.bdscript ((P) Donald (RTN) (LK))
obj\P_LK030_RTN\rtn_.bdscript ((P) Goofy (RTN) (LK))
obj\P_MU000_RTN\rtn_.bdscript ((P) Mulan (RTN))
obj\P_MU010_RTN\rtn_.bdscript ((P) Ping (RTN))
obj\P_NM000_RTN\rtn_.bdscript ((P) Jack Skellington (RTN))
obj\P_NM000_SANTA_RTN\rtn_.bdscript ((P) Jack Skellington (XM) (RTN))
obj\P_TR000_RTN\rtn_.bdscript ((P) Tron (RTN))
obj\P_WI020_RTN\rtn_.bdscript ((P) Donald (WI) (RTN))
obj\P_WI030_RTN\rtn_.bdscript ((P) Goofy (WI) (RTN))
obj\W_EX010_U0_RTN\rtn_.bdscript ((W) Struggle Hammer (RTN))
obj\W_EX010_V0_RTN\rtn_.bdscript ((W) Struggle Wand (RTN))
obj\W_EX010_W0_RTN\rtn_.bdscript ((W) Struggle Sword (RTN))
---
---
---
example usage from limit\beast\limi.bdscript
L2255:
 pushFromFSp 0
 pushFromPSp 32
 pushFromPSp 68
 gosub 28, L1734
 syscall 1, 89 ; trap_obj_move_request (3 in, 0 out)
 pushFromFSp 0
 pushFromPSp 32
 pushImmf 0.174533
 syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
 drop 
 halt 
 pushFromPSp 68
 gosub 28, L1739
 jmp L2283