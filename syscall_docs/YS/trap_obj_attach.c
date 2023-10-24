---
---
---
name: trap_obj_attach
---
---
---
category: bones
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_126)  (An object)
push parent ; (unknown)  (pushFromPSpVal: 0,112,128,144,4,...) (pushFromFSp: 0,4,8) (add: ) (pushImm: 0) (pushFromPSp: 16,32,48,64,96) (pushFromPWp: W0,W32,W384,W4,W4208,...)
push bone ; (unknown)  (pushImm: 101,12,140,146,16384,16386,17,23,4,49,57,62,7,71,8) (syscall: 1, 235 ; trap_party_hand_to_bone (2 in, 1 out)) (fetchValue: 144)
push flag ; (unknown)  (pushImm: 0,1,4,5)
push label ; (int)  (Line number, a callback?)
push unk6 ; (unknown)  (pushImm: 0) (pushFromFSp: 0) (pushFromPWp: W0,W384)
syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
---
---
---
description: Attaches a bone between two objects
---
---
---
decompiled code:
YS::OBJ::ATTACH_125 *__fastcall YS::OBJ::attach(YS::OBJ_126 *const this, YS::OBJ_126 *parent, __int64 bone, __int64 flag, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FBDD0) ----------------------------------------------------
void __fastcall YS::trap_obj_attach(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r29
  unsigned __int64 v10; // r28
  __int64 v11; // r30
  YS::OBJ_126 *v12; // r29
  YS::OBJ::ATTACH_125 *v13; // r3
  int v14; // r29
  int v15; // r5
  void *__ptr32 v16; // r4
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v11 = *(unsigned int *)&(*args)[4];
  v12 = (YS::OBJ_126 *)*(unsigned int *)(v9 + 4);
  if ( !(_DWORD)v11 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v11 & 3) != 0 )
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
  v13 = YS::OBJ::attach(
          v12,
          (YS::OBJ_126 *)*(unsigned int *)(v11 + 4),
          *(int *)&(*args)[8],
          *(int *)&(*args)[12],
          a5,
          a6,
          a7,
          a8);
  v14 = *(_DWORD *)&(*args)[16];
  if ( v14 )
  {
    v15 = *(_DWORD *)&(*args)[20];
    v16 = YS::VM::Current;
    *(_DWORD *)&(*v13)[16] = v14;
    *(_DWORD *)&(*v13)[12] = v16;
    *(_DWORD *)&(*v13)[20] = v15;
  }
}
// 4FBDF4: variable 'back_chain' is possibly undefined
// 4FBF9C: variable 'a5' is possibly undefined
// 4FBF9C: variable 'a6' is possibly undefined
// 4FBF9C: variable 'a7' is possibly undefined
// 4FBF9C: variable 'a8' is possibly undefined
// 7FE85C: using guessed type void *__ptr32 YS::VM::Current;
->
/----- (00000000004632A0) ----------------------------------------------------
YS::OBJ::ATTACH_125 *__fastcall YS::OBJ::attach(YS::OBJ_126 *const this, YS::OBJ_126 *parent, __int64 bone, __int64 flag, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int16 v9; // r28
  __int16 v10; // r29
  __int64 v12; // r9
  __int64 v13; // r3
  int v14; // r7
  int v15; // r5
  int v16; // r7
  unsigned __int64 v17; // r6
  int v18; // r5
  __int64 back_chain; // [sp+0h] [-A0h]

  v9 = flag;
  v10 = bone;
  v12 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp",
      21LL,
      "is_attach",
      (const void *)v12);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp", 21);
  }
  if ( *(_DWORD *)&(*this)[1392] )
    YS::OBJ::detach(this, (__int64)parent, bone, flag, a5, a6, v12, a8);
  v13 = *(unsigned int *)&(*this)[12];
  v14 = 0;
  *(_DWORD *)&(*this)[1392] = (_DWORD)parent;
  *(_WORD *)&(*this)[1396] = v10;
  *(_WORD *)&(*this)[1398] = v9;
  if ( (*(_DWORD *)(v13 + 8) & 2) != 0 || (*(_DWORD *)&(*this)[352] & 0x40) != 0 )
    v14 = 5;
  *(_DWORD *)&(*this)[1400] = v14;
  *(_DWORD *)&(*this)[1404] = 0;
  *(_DWORD *)&(*this)[1352] = 0;
  *(_DWORD *)&(*this)[1348] = 0;
  *(_DWORD *)&(*this)[1344] = 0;
  *(_DWORD *)&(*this)[1356] = 1065353216;
  if ( (v9 & 2) == 0 )
  {
    *(_DWORD *)&(*this)[1372] = 0;
    *(_DWORD *)&(*this)[1368] = 0;
    *(_DWORD *)&(*this)[1364] = 0;
    *(_DWORD *)&(*this)[1360] = 0;
    *(_DWORD *)(unsigned int)((_DWORD)this + 2040) |= 8u;
  }
  YS::OBJ::change_action(this, DUMMY);
  v15 = *(_DWORD *)&(*parent)[1892];
  v16 = (_DWORD)this + 1648;
  v17 = (unsigned int)((_DWORD)this + 1884);
  if ( v15 )
  {
    *(_DWORD *)(unsigned int)(v15 + 236) = v16;
    *(_DWORD *)v17 = 0;
    *(_DWORD *)&(*parent)[1892] = v16;
  }
  else
  {
    *(_DWORD *)&(*parent)[1892] = v16;
    *(_DWORD *)&(*parent)[1888] = v16;
    *(_DWORD *)v17 = 0;
  }
  v18 = *(_DWORD *)&(*this)[2060];
  if ( v18 )
  {
    if ( !*(_DWORD *)&(*parent)[2060] )
      *(_DWORD *)&(*parent)[1548] = v18;
  }
  else
  {
    *(_DWORD *)&(*this)[1548] = *(_DWORD *)&(*parent)[2060];
  }
  return (YS::OBJ::ATTACH_125 *)(unsigned int)((_DWORD)this + 1392);
}
// 4632D4: variable 'back_chain' is possibly undefined
// 463344: variable 'parent' is possibly undefined
// 463344: variable 'bone' is possibly undefined
// 463344: variable 'flag' is possibly undefined
// 463344: variable 'a5' is possibly undefined
// 463344: variable 'a6' is possibly undefined
// 463344: variable 'v12' is possibly undefined
// 463344: variable 'a8' is possibly undefined


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\goofy\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_RTN\rtn_.bdscript ((B) Axel (Scene day he freezes) (RTN))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX170_RTN\rtn_.bdscript ((B) Xehanort (Scene looking at Kingdom Hearts) (RTN))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030_RTN\rtn_.bdscript ((RTN) Hades (HE))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK100_00_RTN\rtn_.bdscript ((RTN) Shenzi)
obj\B_LK100_10_RTN\rtn_.bdscript ((RTN) Banzai)
obj\B_LK100_20_RTN\rtn_.bdscript ((RTN) Ed)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU100_RTN\rtn_.bdscript ((RTN) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB080\f_bb.bdscript ((F) Shadow Stalker’s ground trap (BB))
obj\F_CA710_RTN\rtn_.bdscript ((F) Jack Sparrow’s compass (RTN))
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_EH110\f_eh.bdscript ((F) Rising building (EH))
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_TT140\rtn_.bdscript ((F) Dream Sword (TT))
obj\F_TT150\rtn_.bdscript ((F) Dream Shield (TT))
obj\F_TT160\rtn_.bdscript ((F) Dream Rod (TT))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\M_EX210\m_ex.bdscript ((M) Air Pirate)
obj\M_EX210_HB\m_ex.bdscript ((M) Aerial Viking)
obj\M_EX350_08\m_ex.bdscript ((M) Mushroom 8 (EX))
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\M_EX520\m_ex.bdscript ((M) Hook Bat)
obj\M_EX520_HB\m_ex.bdscript ((M) Beffudler)
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\M_EX850\m_ex.bdscript ((M) Berserker weapon (Useable))
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX930\m_ex.bdscript ((M) Dancer)
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
obj\N_BB070_RTN\rtn_.bdscript ((N) Mrs. Potts (RTN) (BB))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_BB080_RTN\rtn_.bdscript ((N) Wardrobe maid (RTN) (BB))
obj\N_CA010_RTN\rtn_.bdscript ((N) Elizabeth (RTN) (CA))
obj\N_CA010_SAD_RTN\rtn_.bdscript ((N) Elizabeth (SAD) (RTN) (CA))
obj\N_CA020_KAJI_RTN\rtn_.bdscript ((N) Will Turner (KAJI) (RTN) (CA))
obj\N_CA020_RTN\rtn_.bdscript ((N) Will Turner (RTN) (CA))
obj\N_CA020_SIT_RTN\rtn_.bdscript ((N) Will Turner (sitting) (RTN) (CA))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
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
obj\N_EX600_RAW_RTN\rtn_.bdscript ((N) Setzer (RAW) (RTN) (EX))
obj\N_EX600_RTN\rtn_.bdscript ((N) Setzer (RTN) (EX))
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
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
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
obj\N_HE010_RTN\rtn_.bdscript ((N) Hercules (RTN) (HE))
obj\N_HE010_SIT_RTN\rtn_.bdscript ((N) Hercules (sitting) (RTN) (HE))
obj\N_HE020_MENU_RTN\rtn_.bdscript ((N) Phil (MENU) (RTN) (HE))
obj\N_HE020_RTN\rtn_.bdscript ((N) Phil (RTN) (HE))
obj\N_HE030_RTN\rtn_.bdscript ((N) Megara (RTN) (HE))
obj\N_HE040_BTL\n_he.bdscript ((N) Pegasus (BTL) (HE))
obj\N_HE040_RTN\rtn_.bdscript ((N) Pegasus (RTN) (HE))
obj\N_HE050_RTN\rtn_.bdscript ((N) Pain (RTN) (HE))
obj\N_HE060_RTN\rtn_.bdscript ((N) Panic (RTN) (HE))
obj\N_LK010_RTN\rtn_.bdscript ((N) Timon (RTN) (LK))
obj\N_LK020_BTL\n_lk.bdscript ((N) Pumba (BTL) (LK))
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
obj\N_NM050_BTL_2\n_nm.bdscript ((N) Lock (BTL2) (NM))
obj\N_NM050_RTN\rtn_.bdscript ((N) Lock (RTN) (NM))
obj\N_NM060_BTL_2\n_nm.bdscript ((N) Shock (BTL2) (NM))
obj\N_NM060_RTN\rtn_.bdscript ((N) Shock (RTN) (NM))
obj\N_NM070_BTL_2\n_nm.bdscript ((N) Barrel (BTL2) (NM))
obj\N_NM070_RTN\rtn_.bdscript ((N) Barrel (RTN) (NM))
obj\N_NM090_RTN\rtn_.bdscript ((N) Santa Claus (RTN) (NM))
obj\N_NM100_RTN\rtn_.bdscript ((N) Elf (male) (RTN) (NM))
obj\N_NM110_RTN\rtn_.bdscript ((N) Elf (female) (RTN) (NM))
obj\N_PO010_BTL\n_po.bdscript ((N) Pooh (BTL) (PO))
obj\N_PO010_RTN\rtn_.bdscript ((N) Pooh (RTN) (PO))
obj\N_PO010_SIT_RTN\rtn_.bdscript ((N) Pooh (sitting) (RTN) (PO))
obj\N_PO020_RTN\rtn_.bdscript ((N) Tigger (RTN) (PO))
obj\N_PO030_AIR_RTN\rtn_.bdscript ((N) Piglet (AIR) (RTN) (PO))
obj\N_PO030_RTN\rtn_.bdscript ((N) Pigglet (RTN) (PO))
obj\N_PO040_RTN\rtn_.bdscript ((N) Eeyore (RTN) (PO))
obj\N_PO050_RTN\rtn_.bdscript ((N) Rabbit (RTN) (PO))
obj\N_PO060_RTN\rtn_.bdscript ((N) Owl (RTN) (PO))
obj\N_PO070_RTN\rtn_.bdscript ((N) Roo (RTN) (PO))
obj\N_PO080_RTN\rtn_.bdscript ((N) Kanga (RTN) (PO))
obj\N_PO090_RTN\rtn_.bdscript ((N) Gopher (RTN) (PO))
obj\N_PO100_RTN\rtn_.bdscript ((N) Kanga & Roo (RTN) (PO))
obj\N_TT010_RTN\rtn_.bdscript ((N) Yen Sid (RTN) (TT))
obj\N_TT010_SIT_RTN\rtn_.bdscript ((N) Yen Sid (sitting) (RTN) (TT))
obj\N_TT020_RTN\rtn_.bdscript ((N) Flora (RTN) (TT))
obj\N_TT030_RTN\rtn_.bdscript ((N) Fauna (RTN) (TT))
obj\N_TT040_RTN\rtn_.bdscript ((N) Merryweather (RTN) (TT))
obj\N_WI010_RTN\rtn_.bdscript ((N) Pete (captain) (RTN) (WI))
obj\N_WI020_RTN\rtn_.bdscript ((N) Horace (RTN) (WI))
obj\N_WI030_RTN\rtn_.bdscript ((N) Clarabelle (RTN) (WI))
obj\N_WI040_RTN\rtn_.bdscript ((N) Clara (RTN) (WI))
obj\P_AL000_RTN\rtn_.bdscript ((P) Aladdin (RTN) (AL))
obj\P_AL010\p_al.bdscript ((P) Genie)
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
obj\P_EH000_RTN\rtn_.bdscript ((P) Riku (RTN))
obj\P_EX020_NM_RTN\rtn_.bdscript ((P) Donald (NM) (RTN))
obj\P_EX020_NOBG_RTN\rtn_.bdscript ((P) Donald (NOBG) (RTN) (EX))
obj\P_EX020_RTN\rtn_.bdscript ((N) Donald (RTN))
obj\P_EX020_TR_RTN\rtn_.bdscript ((P) Donald (TR) (RTN))
obj\P_EX020_XM_RTN\rtn_.bdscript ((P) Donald (XM) (RTN))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_NM_RTN\rtn_.bdscript ((P) Goofy (NM) (RTN))
obj\P_EX030_NOBG_RTN\rtn_.bdscript ((P) Goofy (NOBG) (RTN) (EX))
obj\P_EX030_RTN\rtn_.bdscript ((N) Goofy (RTN))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_TR_RTN\rtn_.bdscript ((P) Goofy (TR) (RTN))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX030_XM_RTN\rtn_.bdscript ((P) Goofy (XM) (RTN))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX210_RTN\rtn_.bdscript ((P) Mickey (coat) (RTN))
obj\P_EX220_RTN\rtn_.bdscript ((P) Mickey (RTN))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX340\p_ex.bdscript ((P) Tinker Bell)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_HE000_NPC_QSATO\npc_.bdscript ((P) Auron (NPC_QSATO))
obj\P_HE000_RTN\rtn_.bdscript ((P) Auron (RTN))
obj\P_LK000_RTN\rtn_.bdscript ((P) Simba (RTN))
obj\P_LK020_RTN\rtn_.bdscript ((P) Donald (RTN) (LK))
obj\P_LK030_RTN\rtn_.bdscript ((P) Goofy (RTN) (LK))
obj\P_MU000_RTN\rtn_.bdscript ((P) Mulan (RTN))
obj\P_MU010_RTN\rtn_.bdscript ((P) Ping (RTN))
obj\P_NM000_RTN\rtn_.bdscript ((P) Jack Skellington (RTN))
obj\P_NM000_SANTA_RTN\rtn_.bdscript ((P) Jack Skellington (XM) (RTN))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_TR000_RTN\rtn_.bdscript ((P) Tron (RTN))
obj\P_WI020_RTN\rtn_.bdscript ((P) Donald (WI) (RTN))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
obj\P_WI030_RTN\rtn_.bdscript ((P) Goofy (WI) (RTN))
obj\W_EX010_U0_RTN\rtn_.bdscript ((W) Struggle Hammer (RTN))
obj\W_EX010_V0_RTN\rtn_.bdscript ((W) Struggle Wand (RTN))
obj\W_EX010_W0_RTN\rtn_.bdscript ((W) Struggle Sword (RTN))
---
---
---
example usage from limit\aladdin\limi.bdscript
L2833:
 popToSp 0
 pushImm 0
 popToSpVal 44
 pushFromPSpVal 4
 syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
 popToSpVal 152
 pushFromPSpVal 4
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 0
 fetchValue 0
 pushFromPSpVal 4
 pushImm 256
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 4
 pushImm L2942
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromFSp 0
 fetchValue 0
 pushFromPSpVal 20
 pushImm 256
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 20
 pushImm L2942
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromPSpVal 20
 pushFromPSpVal 4
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromPWp W0
 pushImm 80
 add 
 pushFromFSp 0
 gosub 4, L2954
 memcpyToSp 16, 16
 pushFromPSp 16
 memcpy 16
 pushFromFSp 0
 pushImm L3043
 gosub 4, L5063
 ret 
