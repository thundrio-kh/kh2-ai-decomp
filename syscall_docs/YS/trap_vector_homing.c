---
---
---
name: trap_vector_homing
---
---
---
category: math
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown)  (pushFromFSp: 4) (pushFromPSp: 112,16,32,48) (pushFromPSpVal: 192,80,96) (pushImm: 128) (memcpyToSp: 16, 16)
push unk2 ; (unknown)  (pushFromFSp: 0,64) (pushFromPSp: 128,16,32,48,56,...) (add: ) (pushFromPSpVal: 96)
push unk3 ; (unknown)  (gosub: 8, L1077,8, L1343,8, L1359,8, L1494,8, L1564,...) (pushImmf: 0,0.017453,0.034907,0.05236,0.069813,0.087266,0.139626,0.174533,0.523599,1.047198,3.141593) (fetchValue: 8,96) (pushFromFSp: 20,36,4,48,52,...) (pushFromFSpVal: 0) (gosub32: 8, L2898,8, L6894) (degr: )
syscall 0, 46 ; trap_vector_homing (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MATH::Homing(const kn::FVector *dir, const kn::FVector *target, const kn::FVector *a3, double limit)
/----- (00000000004B7670) ----------------------------------------------------
void __fastcall YS::trap_vector_homing(BD_VALUE_16 *args)
{
  kn::FVector *v1; // r30
  kn::FVector v2; // [sp+70h] [-20h] BYREF

  v1 = (kn::FVector *)(*args)[0];
  YS::MATH::Homing(&v2, v1, (const kn::FVector *)*(unsigned int *)&(*args)[4], *(float *)&(*args)[8]);
  kn::FVector::operator=(v1, &v2);
}
->
/----- (00000000004C14F8) ----------------------------------------------------
void __fastcall YS::MATH::Homing(const kn::FVector *dir, const kn::FVector *target, const kn::FVector *a3, double limit)
{
  double v8; // fp2
  double v9; // fp1
  double v10; // fp2
  double v11; // fp31
  double v12; // fp2
  kn::FVector v13; // [sp+70h] [-130h] BYREF
  Axa::FVECTOR4 v14; // [sp+80h] [-120h] BYREF
  Axa::FVECTOR4 v15; // [sp+90h] [-110h] BYREF
  Axa::FVECTOR4 v16; // [sp+A0h] [-100h] BYREF
  kn::FVector v17; // [sp+B0h] [-F0h] BYREF
  Axa::FVECTOR4 v18; // [sp+C0h] [-E0h] BYREF
  Axa::FVECTOR4 v19; // [sp+D0h] [-D0h] BYREF
  Axa::FVECTOR4 v20; // [sp+E0h] [-C0h] BYREF
  kn::FMatrix v21; // [sp+F0h] [-B0h] BYREF
  Axa::FMATRIX44 v22; // [sp+130h] [-70h] BYREF

  v14.z = 0.0;
  v14.y = 0.0;
  v14.x = 0.0;
  v14.w = 1.0;
  v15.z = 0.0;
  v15.y = 0.0;
  v15.x = 0.0;
  v15.w = 1.0;
  v16.z = 0.0;
  v16.y = 0.0;
  v16.x = 0.0;
  v16.w = 1.0;
  dir->z = 0.0;
  dir->y = 0.0;
  dir->x = 0.0;
  dir->w = 1.0;
  Axa::FMATRIX44::unit(&v22);
  kn::FVector::operator=((kn::FVector *const)&v15, target);
  Axa::FVECTOR4::normalize(&v15);
  kn::FVector::operator=((kn::FVector *const)&v16, a3);
  Axa::FVECTOR4::normalize(&v16);
  v8 = Axa::InnerProductXYZ(&v15, &v16);
  if ( v8 < 1.0 )
  {
    v9 = 3.1415927;
    if ( v8 > -1.0 )
      v9 = f_acosf(v8);
  }
  else
  {
    v9 = 0.0;
  }
  v10 = limit;
  v11 = v9;
  v12 = (float)(dk::Vsync::s_frameTime * (float)v10);
  if ( v9 <= v12 )
  {
    if ( v9 < -v12 )
      v11 = -v12;
  }
  else
  {
    v11 = v12;
  }
  Axa::outerProductXYZ(&v20, &v15, &v16);
  v13.x = v20.x;
  v13.y = v20.y;
  v13.z = v20.z;
  v13.w = v20.w;
  kn::FVector::operator=((kn::FVector *const)&v14, &v13);
  Axa::FVECTOR4::normalize(&v14);
  YS::MATH::GetRotMatrix((const kn::FVector *)&v21, &v14.x, v11);
  kn::FMatrix::operator=((kn::FMatrix *const)&v22, &v21);
  v18.x = v15.x;
  v18.y = v15.y;
  v18.z = v15.z;
  v18.w = 0.0;
  Axa::FMATRIX44::operator*(&v19, &v22, &v18);
  v17.x = v19.x;
  v17.y = v19.y;
  v17.z = v19.z;
  v17.w = v19.w;
  kn::FVector::operator=((kn::FVector *const)dir, &v17);
}
// A0AD74: using guessed type float dk::Vsync::s_frameTime;


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\beast\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
magic\BLIZZARD_1\bliz.bdscript
magic\BLIZZARD_1lk\bliz.bdscript
magic\BLIZZARD_2\bliz.bdscript
magic\BLIZZARD_2lk\bliz.bdscript
magic\BLIZZARD_3\bliz.bdscript
magic\BLIZZARD_3lk\bliz.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\B_EX290\b_ex.bdscript ((F) Xemnas armor - Xigbar’s arrowgun)
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
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\EH_G_EX120\g_ex.bdscript ((EH) Xemnas’s dragon missile (G_EX))
obj\EH_G_EX290\g_ex.bdscript ((EH) Speeder B (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\F_WI360_PETE\f_wi.bdscript ((F) Building site’s platform (PETE) (WI))
obj\G_EC130\g_ec.bdscript ()
obj\G_EC140\g_ec.bdscript ()
obj\G_EC140_WHITE\g_ec.bdscript ()
obj\G_EX240\g_ex.bdscript ()
obj\G_EX240_G\g_ex.bdscript ()
obj\G_EX240_R\g_ex.bdscript ()
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
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
obj\M_EX680\m_ex.bdscript ((M) Devastator)
obj\M_EX680_HB\m_ex.bdscript ((M) Reckless)
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX770_TR_RAW\m_ex.bdscript ()
obj\M_EX780\m_ex.bdscript ((M) Aerial Knocker)
obj\M_EX780_HB\m_ex.bdscript ((M) Aeriel Champ)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
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
obj\P_AL000\p_al.bdscript ((P) Aladdin)
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
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
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
obj\P_HE000\p_he.bdscript ((P) Auron)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_MU000\p_mu.bdscript ((P) Mulan)
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L2209:
 pushFromPSpVal 16
 pushFromFSp 4
 pushFromFSp 0
 gosub 8, L2389
 syscall 0, 46 ; trap_vector_homing (3 in, 0 out)
