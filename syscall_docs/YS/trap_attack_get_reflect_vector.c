---
---
---
name: trap_attack_get_reflect_vector
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
push unk1 ; (unknown)  (pushFromFSpVal: 68)
syscall 2, 43 ; trap_attack_get_reflect_vector (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::get_reflect_vector(YS::ATTACK_MAGIC_3 *const this, __int64 a2)
/----- (00000000004F47A4) ----------------------------------------------------
void __fastcall YS::trap_attack_get_reflect_vector(BD_VALUE_19 *args)
{
  __int64 v2; // r4
  kn::FVector v3; // [sp+70h] [-30h] BYREF

  v2 = *(unsigned int *)args;
  if ( !LS_163_LV_12_0 )
  {
    LS_163_result.x = 0.0;
    LS_163_result.z = 0.0;
    LS_163_result.y = 0.0;
    LS_163_result.w = 1.0;
    LS_163_LV_12_0 = 1;
  }
  YS::ATTACK_MAGIC::get_reflect_vector((YS::ATTACK_MAGIC_3 *const)&v3, v2);
  kn::FVector::operator=(&LS_163_result, &v3);
  *(_DWORD *)args = (unsigned int)&LS_163_result;
}
// 2B75C20: using guessed type char LS_163_LV_12_0;
->
/----- (000000000050CDA8) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::get_reflect_vector(YS::ATTACK_MAGIC_3 *const this, __int64 a2)
{
  YS::OBJ_128 *v4; // r3
  Axa::FVECTOR4 *v5; // r3
  Axa::FVECTOR4 *v6; // r3
  Axa::FVECTOR4 *v7; // r3
  Axa::FVECTOR4 v8; // [sp+70h] [-B0h] BYREF
  kn::FVector v9; // [sp+80h] [-A0h] BYREF
  float v10[4]; // [sp+90h] [-90h] BYREF
  kn::FVector v11; // [sp+A0h] [-80h] BYREF
  kn::FVector v12; // [sp+B0h] [-70h] BYREF
  YS::TARGET_108 v13; // [sp+C0h] [-60h] BYREF
  float v14; // [sp+D4h] [-4Ch]
  float v15; // [sp+D8h] [-48h]
  float v16; // [sp+DCh] [-44h]
  Axa::FVECTOR4 v17; // [sp+E0h] [-40h] BYREF
  Axa::FVECTOR4 v18; // [sp+F0h] [-30h] BYREF

  v4 = (YS::OBJ_128 *)*(unsigned int *)(a2 + 12);
  *(_DWORD *)&(*this)[8] = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_DWORD *)this = 0;
  *(_DWORD *)&(*this)[12] = 1065353216;
  v8.z = 0.0;
  v8.y = 0.0;
  v8.x = 0.0;
  v8.w = 1.0;
  if ( (unsigned int)YS::OBJ::is_exist(v4) )
  {
    YS::OBJ::get_target_pos((YS::OBJ_125 *const)v10, (YS::OBJ_168 *)*(unsigned int *)(a2 + 12));
    v18.x = v10[0];
    v18.y = v10[1];
    v18.z = v10[2];
    v18.w = v10[3];
    v5 = Axa::FVECTOR4::operator-=(&v18, (const Axa::FVECTOR4 *)(unsigned int)(a2 + 224));
    v9.x = v5->x;
    v9.y = v5->y;
    v9.z = v5->z;
    v9.w = v5->w;
    kn::FVector::operator=((kn::FVector *const)this, &v9);
    Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)this);
  }
  else
  {
    YS::OBJ::get_dir((YS::OBJ_125 *const)&v11, (YS::OBJ_126 *)*(unsigned int *)(a2 + 132));
    kn::FVector::operator=((kn::FVector *const)this, &v11);
  }
  if ( (unsigned int)YS::TARGET::is_exist((const YS::TARGET_108 *const)(unsigned int)(*(_DWORD *)(a2 + 132) + 2548)) )
  {
    YS::TARGET::get_pos(
      (const YS::TARGET_108 *const)v13,
      (const YS::TARGET_108 *)(unsigned int)(*(_DWORD *)(a2 + 132) + 2548));
    v17.x = *(float *)v13;
    v17.y = *(float *)&v13[4];
    v17.z = *(float *)&v13[8];
    v17.w = *(float *)&v13[12];
    v6 = Axa::FVECTOR4::operator-=(&v17, (const Axa::FVECTOR4 *)(unsigned int)(a2 + 224));
    v12.x = v6->x;
    v12.y = v6->y;
    v12.z = v6->z;
    v12.w = v6->w;
    kn::FVector::operator=((kn::FVector *const)&v8, &v12);
    Axa::FVECTOR4::normalize(&v8);
    *(float *)&v13[16] = *(float *)&(*this)[0];
    v14 = *(float *)&(*this)[4];
    v15 = *(float *)&(*this)[8];
    v16 = *(float *)&(*this)[12];
    v7 = Axa::FVECTOR4::operator+=((Axa::FVECTOR4 *const)&v13[16], &v8);
    *(float *)v13 = v7->x;
    *(float *)&v13[4] = v7->y;
    *(float *)&v13[8] = v7->z;
    *(float *)&v13[12] = v7->w;
    kn::FVector::operator=((kn::FVector *const)this, (const kn::FVector *)v13);
    Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)this);
  }
}


---
---
---
appears in:
limit\riku\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX290\b_ex.bdscript ((F) Xemnas armor - Xigbar’s arrowgun)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX500\m_ex.bdscript ((M) Trick Ghost)
obj\M_EX500_HB\m_ex.bdscript ((M) Magic Phantom)
obj\M_EX500_NM\m_ex.bdscript ((M) Trick Ghost (NM))
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
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
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
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX100_MAGF\wisd.bdscript ((P) Sora (Wisdom))
obj\P_EX100_NM_MAGF\wisd.bdscript ((P) Sora (NM) (Wisdom))
obj\P_EX100_TR_MAGF\wisd.bdscript ((P) Sora (TR) (Wisdom))
obj\P_EX100_WI_MAGF\wisd.bdscript ((P) Sora (WI) (Wisdom))
obj\P_EX100_XM_MAGF\wisd.bdscript ((P) Sora (XM) (Wisdom))
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_NM000\p_nm.bdscript ((P) Jack Skellington)
obj\P_NM000_SANTA\p_nm.bdscript ((P) Jack Skellington (XM))
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from limit\riku\limi.bdscript
L5227:
 pushFromFSpVal 68
 syscall 2, 43 ; trap_attack_get_reflect_vector (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromFSpVal 68
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 pushImm 0
 popToSpVal 68
 pushFromPSp 16
 ret 
