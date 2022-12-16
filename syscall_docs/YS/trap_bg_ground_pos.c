---
---
---
name: trap_bg_ground_pos
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
push unk1 ; (unknown)  (pushFromPSp: 16,160,32,48,64,...) (pushFromFSp: 4,72) (pushFromPSpVal: 32,96) (pushImm: 32)
push unk2 ; (unknown)  (pushFromPSp: 16,160,32,48,64,...) (pushFromFSp: 4) (pushImmf: 2) (pushFromPSpVal: 32,96) (add: )
push unk3 ; (unknown)  (pushImmf: 10000,10000 ; ___possible_ref,180,200,220,250,3000) (pushFromFSp: 4) (mulf: )
syscall 1, 141 ; trap_bg_ground_pos (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::BG::GetGroundPos(const kn::FVector *pos, kn::FVector *result, double height, double range, int type)
/----- (00000000005034D0) ----------------------------------------------------
void __fastcall YS::trap_bg_ground_pos(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::BG::GetGroundPos(
                      (const kn::FVector *)(*args)[0],
                      (kn::FVector *)*(unsigned int *)&(*args)[4],
                      *(float *)&(*args)[8],
                      0.0,
                      4);
}
->
/----- (000000000040D7E8) ----------------------------------------------------
__int64 __fastcall YS::BG::GetGroundPos(const kn::FVector *pos, kn::FVector *result, double height, double range, int type)
{
  __int64 v10; // r3
  kn::FVector v11; // [sp+70h] [-80h] BYREF
  kn::FVector v12; // [sp+80h] [-70h] BYREF
  kn::FVector v13[2]; // [sp+90h] [-60h] BYREF

  v11.z = 0.0;
  v11.y = 0.0;
  v11.x = 0.0;
  v11.w = 1.0;
  v12.z = 0.0;
  v12.y = 0.0;
  v12.x = 0.0;
  v12.w = 1.0;
  v13[0].z = 0.0;
  v13[0].y = 0.0;
  v13[0].x = 0.0;
  v13[0].w = 1.0;
  kn::FVector::operator=(&v11, pos);
  v11.y = v11.y - (float)range;
  kn::FVector::operator=(&v12, pos);
  v12.y = (float)((float)height + (float)range) + v12.y;
  if ( YS::BGHIT::check_line((YS::BGHIT_0 *const)v13, &v11, &v12, type) )
  {
    kn::FVector::operator=(result, v13);
    v10 = 1LL;
  }
  else
  {
    kn::FVector::operator=(result, pos);
    v10 = 0LL;
  }
  return v10;
}


---
---
---
appears in:
limit\auron\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\simba\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\tron\limi.bdscript
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
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_CA000\f_ca.bdscript ((F) Black Pearl (CA))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\M_EX650\m_ex.bdscript ((M) Cannon Gun)
obj\M_EX650_HB\m_ex.bdscript ((M) Camo Cannon)
obj\M_EX650_TR\m_ex.bdscript ((M) Cannon Gun (TR))
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
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
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\auron\limi.bdscript
L96:
 popToSp 0
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromPSp 16
 pushImmf 10000
 syscall 1, 141 ; trap_bg_ground_pos (3 in, 1 out)
 drop 
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 fetchValue 12
 popToSp 48
 pushImm 0
 popToSp 52
 pushImm 12
