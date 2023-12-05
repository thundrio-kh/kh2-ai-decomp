---
---
---
name: trap_get_path_dir
---
---
---
category: path
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push a5 ; (float) (unknown) 
syscall 5, 3 ; trap_get_path_dir (2 in, 1 out)
pop dir ; (kn::FVector *)  (A direction vector)
---
---
---
description: Get the direction of a path
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
void __fastcall YS::OBJ::get_dir(YS::OBJ_125 *const this, YS::OBJ_126 *a2)
void __fastcall Ti::Path::get_dir(Ti::Path_3 *a1, const kn::FVector *a2, const kn::FVector *a3, double a4, double a5)
/----- (0000000000658AA8) ----------------------------------------------------
void __fastcall Ti::trap_get_path_dir(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r29
  const kn::FVector *v5; // r30
  const kn::FVector *v6; // r25
  __int64 back_chain; // [sp+0h] [-D0h]
  kn::FVector v8; // [sp+70h] [-60h] BYREF
  float v9[6]; // [sp+80h] [-50h] BYREF

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
  v5 = (const kn::FVector *)*(unsigned int *)(v4 + 0x508);
  if ( (_DWORD)v5 )
  {
    v6 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)v4);
    YS::OBJ::get_dir((YS::OBJ_125 *const)v9, (YS::OBJ_126 *)v4);
    Ti::Path::get_dir((Ti::Path_3 *const)&v8, v5, v6, v9, *(float *)&(*args)[4], 1.0);
    kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v8);
    *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
  }
}
// 658ACC: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;

//COMPLICATED YS::OBJ::get_pos YS::OBJ::get_dir Ti::Path::get_dir
->
/----- (000000000045E178) ----------------------------------------------------
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
{
  unsigned __int64 result; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  if ( !(_DWORD)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1306LL,
      "get_pos",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1306);
  }
  if ( YS::OBJ::is_attach(this) )
    result = (unsigned int)((_DWORD)this + 112);
  else
    result = (unsigned int)((_DWORD)this + 1344);
  return result;
}
// 45E194: variable 'back_chain' is possibly undefined


->
/----- (0000000000460ED8) ----------------------------------------------------
void __fastcall YS::OBJ::get_dir(YS::OBJ_125 *const this, YS::OBJ_126 *a2)
{
  int v2; // r31
  double v4; // fp31
  double v5; // fp1
  float v6[6]; // [sp+70h] [-30h] BYREF

  v2 = (int)a2;
  if ( YS::OBJ::is_attach(a2) )
  {
    v4 = f_atan2f(-*(float *)(unsigned int)(v2 + 96), -*(float *)((unsigned int)(v2 + 96) + 8LL));
    YS::MATH::RotToDir(v6, v4);
    *(float *)&(*this)[0] = v6[0];
    *(float *)&(*this)[4] = v6[1];
    v5 = v6[2];
    *(float *)&(*this)[12] = v4;
    *(float *)&(*this)[8] = v5;
  }
  else
  {
    *(float *)&(*this)[0] = *(float *)(unsigned int)(v2 + 1360);
    *(float *)&(*this)[4] = *(float *)((unsigned int)(v2 + 1360) + 4LL);
    *(float *)&(*this)[8] = *(float *)((unsigned int)(v2 + 1360) + 8LL);
    *(float *)&(*this)[12] = *(float *)((unsigned int)(v2 + 1360) + 0xCLL);
  }
}


->
/----- (00000000006558F4) ----------------------------------------------------
void __fastcall Ti::Path::get_dir(Ti::Path_3 *a1, const kn::FVector *a2, const kn::FVector *a3, double a4, double a5)
{
  __int64 v5; // ctr
  char v6; // cr32

  do
    --v5;
  while ( !v5 );
  do
    --v5;
  while ( v5 && v6 );
  Ti::Path::get_dir(a1, a2, a3, a4, a5);
}
// 6558F8: variable 'v5' is possibly undefined
// 6558FC: variable 'v6' is possibly undefined


/----- (0000000000655900) ----------------------------------------------------
void __fastcall Ti::Path::get_dir(Ti::Path_3 *const this, const kn::FVector *pos, const kn::FVector *dir, float *a4, double near_dist, double ratio)
{
  double v11; // fp2
  double v12; // fp3
  Axa::FVECTOR4 *v13; // r3
  Axa::FVECTOR4 *v14; // r3
  double v15; // fp28
  double v16; // fp1
  float *v17; // r3
  double v18; // fp31
  double v19; // fp30
  double v20; // fp28
  double v21; // fp27
  FLOAT *v22; // r3
  double v23; // fp2
  double v24; // fp3
  double v25; // fp4
  Axa::FVECTOR4 *v26; // r3
  double v27; // fp2
  double v28; // fp3
  double v29; // fp4
  Axa::FVECTOR4 v30; // [sp+70h] [-F0h] BYREF
  kn::FVector v31; // [sp+80h] [-E0h] BYREF
  kn::FVector v32; // [sp+90h] [-D0h] BYREF
  Axa::FVECTOR4 v33; // [sp+A0h] [-C0h] BYREF
  Axa::FVECTOR4 v34; // [sp+B0h] [-B0h] BYREF
  Axa::FVECTOR4 v35; // [sp+C0h] [-A0h] BYREF
  float v36[4]; // [sp+D0h] [-90h] BYREF
  float v37[4]; // [sp+E0h] [-80h] BYREF
  Axa::FVECTOR4 v38; // [sp+F0h] [-70h] BYREF
  Axa::FVECTOR4 v39; // [sp+100h] [-60h] BYREF
  Axa::FVECTOR4 v40; // [sp+110h] [-50h] BYREF

  v31.z = 0.0;
  v31.y = 0.0;
  v31.x = 0.0;
  v31.w = 1.0;
  v32.x = dir->x;
  v32.y = dir->y;
  v32.z = dir->z;
  v32.w = dir->w;
  _FP2 = 50.0 - near_dist;
  __asm { fsel      f31, f2, f1, f31 }
  if ( (unsigned int)Ti::Path::get_next_pos((Ti::Path_3 *const)pos, &v31, &v32, _FP31) )
  {
    v40.x = v31.x;
    v40.y = v31.y;
    v40.z = v31.z;
    v40.w = v31.w;
    v13 = Axa::FVECTOR4::operator-=(&v40, dir);
    v33.x = v13->x;
    v33.y = v13->y;
    v33.z = v13->z;
    v33.w = v13->w;
    v39.x = v31.x;
    v39.y = v31.y;
    v39.z = v31.z;
    v39.w = v31.w;
    v14 = Axa::FVECTOR4::operator-=(&v39, &v32);
    v34.x = v14->x;
    v34.y = v14->y;
    v34.z = v14->z;
    v34.w = v14->w;
    v15 = Axa::FVECTOR4::normalize(&v33);
    Axa::FVECTOR4::normalize(&v34);
    if ( v15 <= (float)((float)_FP31 * (float)10.0) )
    {
      v37[0] = v33.x;
      v37[1] = v33.y;
      v37[2] = v33.z;
      v37[3] = v33.w;
      v17 = (float *)Axa::FVECTOR4::operator*=((__int64)v37);
      v18 = *v17;
      v19 = v17[1];
      v20 = v17[2];
      v21 = v17[3];
      v36[0] = v34.x;
      v36[1] = v34.y;
      v36[2] = v34.z;
      v36[3] = v34.w;
      v22 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v36);
      v23 = v22[1];
      v24 = v22[2];
      v25 = v22[3];
      v30.x = *v22;
      v30.y = v23;
      v30.z = v24;
      v30.w = v25;
      v38.x = v18;
      v38.y = v19;
      v38.z = v20;
      v38.w = v21;
      v26 = Axa::FVECTOR4::operator+=(&v38, &v30);
      v27 = v26->y;
      v28 = v26->z;
      v29 = v26->w;
      v35.x = v26->x;
      v35.y = v27;
      v35.z = v28;
      v35.w = v29;
      Axa::FVECTOR4::normalize(&v35);
      *(float *)&(*this)[0] = v35.x;
      *(float *)&(*this)[4] = v35.y;
      v16 = v35.z;
    }
    else
    {
      *(float *)&(*this)[0] = v33.x;
      *(float *)&(*this)[4] = v33.y;
      v16 = v33.z;
    }
    *(_DWORD *)&(*this)[12] = 1065353216;
    *(float *)&(*this)[8] = v16;
  }
  else
  {
    v11 = a4[1];
    v12 = a4[2];
    *(float *)&(*this)[0] = *a4;
    *(float *)&(*this)[4] = v11;
    *(float *)&(*this)[8] = v12;
    *(_DWORD *)&(*this)[12] = 0;
  }
}


---
---
---
appears in:
obj\B_EX110_RTN\rtn_.bdscript ((B) Axel (Scene day he freezes) (RTN))
obj\B_EX170_RTN\rtn_.bdscript ((B) Xehanort (Scene looking at Kingdom Hearts) (RTN))
obj\B_HE030_RTN\rtn_.bdscript ((RTN) Hades (HE))
obj\B_LK100_00_RTN\rtn_.bdscript ((RTN) Shenzi)
obj\B_LK100_10_RTN\rtn_.bdscript ((RTN) Banzai)
obj\B_LK100_20_RTN\rtn_.bdscript ((RTN) Ed)
obj\B_MU100_RTN\rtn_.bdscript ((RTN) Shan-Yu)
obj\F_CA710_RTN\rtn_.bdscript ((F) Jack Sparrow’s compass (RTN))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_TT140\rtn_.bdscript ((F) Dream Sword (TT))
obj\F_TT150\rtn_.bdscript ((F) Dream Shield (TT))
obj\F_TT160\rtn_.bdscript ((F) Dream Rod (TT))
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX990_RTN\rtn_.bdscript ((M) Dusk (RTN))
obj\M_EX990_RTN_FIXCOLOR\rtn_.bdscript ((M) Dusk (RTN) (FIXCOLOR) (EX))
obj\M_EX990_ZIPPER_RTN\rtn_.bdscript ((P) Dusk (ZIPPER) (RTN) (EX))
obj\N_AL010_RTN\rtn_.bdscript ((N) Magic Carpet (RTN) (AL))
obj\N_AL020_RTN\rtn_.bdscript ((N) Iago (RTN) (AL))
obj\N_AL030_RTN\rtn_.bdscript ((N) Abu (RTN) (AL))
obj\N_AL040_RTN\rtn_.bdscript ((N) Jasmine (RTN) (AL))
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_AL080_RTN\rtn_.bdscript ((N) Peddler (RTN) (AL))
obj\N_BB010_RTN\rtn_.bdscript ((N) Belle (RTN) (BB))
obj\N_BB010_SIT_RTN\rtn_.bdscript ((N) Belle (sitting) (RTN) (BB))
obj\N_BB020_RTN\rtn_.bdscript ((N) Beast (Prince Outfit) (RTN) (BB))
obj\N_BB040_RTN\rtn_.bdscript ((N) Chip (RTN) (BB))
obj\N_BB050_RTN\rtn_.bdscript ((N) Cogsworth (RTN) (BB))
obj\N_BB050_SAD_RTN\rtn_.bdscript ((N) Cogsworth (SAD) (RTN) (BB))
obj\N_BB060_BTL\n_bb.bdscript ((N) Lumière (BTL) (BB))
obj\N_BB060_RTN\rtn_.bdscript ((N) Lumière (RTN) (BB))
obj\N_BB070_BTL\n_bb.bdscript ((N) Mrs. Potts (BTL) (BB))
obj\N_BB070_RTN\rtn_.bdscript ((N) Mrs. Potts (RTN) (BB))
obj\N_BB080_RTN\rtn_.bdscript ((N) Wardrobe maid (RTN) (BB))
obj\N_CA010_RTN\rtn_.bdscript ((N) Elizabeth (RTN) (CA))
obj\N_CA010_SAD_RTN\rtn_.bdscript ((N) Elizabeth (SAD) (RTN) (CA))
obj\N_CA020_KAJI_RTN\rtn_.bdscript ((N) Will Turner (KAJI) (RTN) (CA))
obj\N_CA020_RTN\rtn_.bdscript ((N) Will Turner (RTN) (CA))
obj\N_CA020_SIT_RTN\rtn_.bdscript ((N) Will Turner (sitting) (RTN) (CA))
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
obj\N_HE010_RTN\rtn_.bdscript ((N) Hercules (RTN) (HE))
obj\N_HE010_SIT_RTN\rtn_.bdscript ((N) Hercules (sitting) (RTN) (HE))
obj\N_HE020_MENU_RTN\rtn_.bdscript ((N) Phil (MENU) (RTN) (HE))
obj\N_HE020_RTN\rtn_.bdscript ((N) Phil (RTN) (HE))
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
obj\N_NM050_RTN\rtn_.bdscript ((N) Lock (RTN) (NM))
obj\N_NM060_RTN\rtn_.bdscript ((N) Shock (RTN) (NM))
obj\N_NM070_RTN\rtn_.bdscript ((N) Barrel (RTN) (NM))
obj\N_NM090_RTN\rtn_.bdscript ((N) Santa Claus (RTN) (NM))
obj\N_NM100_RTN\rtn_.bdscript ((N) Elf (male) (RTN) (NM))
obj\N_NM110_RTN\rtn_.bdscript ((N) Elf (female) (RTN) (NM))
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
obj\P_BB000_RTN\rtn_.bdscript ((N) ??? (RTN) (BB))
obj\P_CA000_KAJI_BP_RTN\rtn_.bdscript ((P) Jack Sparrow steering ship (Black Pearl) (RTN) (CA))
obj\P_CA000_KAJI_IS_RTN\rtn_.bdscript ((P) Jack Sparrow steering ship (Interceptor) (RTN) (CA))
obj\P_CA000_KAJI_RTN\rtn_.bdscript ((P) Jack Sparrow (KAJI) (RTN) (CA))
obj\P_CA000_KAJI_SKL_RTN\rtn_.bdscript ((P) Jack Sparrow stearing ship (Skelleton) (RTN) (CA))
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
example usage from obj\B_EX110_RTN\rtn_.bdscript
L2613:
 pushFromFSp 0
 pushFromFSpVal 68
 syscall 5, 3 ; trap_get_path_dir (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 16
 syscall 0, 21 ; trap_vector_get_rot_xz (2 in, 1 out)
 popToSp 32
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 1
 sub 
 eqz 
 jz L2689
 pushFromFSp 32
 pushImmf 1.570796
 subf 
 supzf 
 dup 
 jnz L2673
 pushFromFSp 32
 pushImmf -1.570796
 subf 
 infzf 
 neqzv 
