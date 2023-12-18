---
---
---
name: trap_obj_check_step
---
---
---
category: collision
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_133)  (An object)
push dir ; (kn::FVector)  (A direction vector)
push len ; (float)  (Length of the step?)
push jump_height ; (float)  (How high the step goes)
syscall 1, 119 ; trap_obj_check_step (4 in, 1 out)
pop is_step ; (bool) 
---
---
---
description: Check if a step is interesecting with a given line?
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::check_step(YS::OBJ_133 *const this, const kn::FVector *_dir, double len, double jump_height, double fall_height)
/----- (0000000000508A44) ----------------------------------------------------
void __fastcall YS::trap_obj_check_step(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  const kn::FVector *v3; // r28
  unsigned __int64 v4; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  v3 = (const kn::FVector *)*(unsigned int *)&(*args)[4];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = YS::OBJ::check_step(
                      (YS::OBJ_133 *const)*(unsigned int *)(v2 + 4),
                      v3,
                      v3->w,
                      *(float *)&(*args)[8],
                      *(float *)&(*args)[12]);
}
// 508A70: variable 'back_chain' is possibly undefined
->
/----- (0000000000471550) ----------------------------------------------------
__int64 __fastcall YS::OBJ::check_step(YS::OBJ_133 *const this, const kn::FVector *_dir, double len, double jump_height, double fall_height)
{
  float *v9; // r3
  double v10; // fp27
  double v11; // fp31
  double v12; // fp26
  double v13; // fp25
  double v14; // fp1
  FLOAT *v15; // r3
  double v16; // fp2
  double v17; // fp3
  double v18; // fp4
  Axa::FVECTOR4 *v19; // r3
  Axa::FVECTOR4 v21; // [sp+70h] [-F0h] BYREF
  kn::FVector v22; // [sp+80h] [-E0h] BYREF
  Axa::FVECTOR4 v23; // [sp+90h] [-D0h] BYREF
  kn::FVector v24; // [sp+A0h] [-C0h] BYREF
  kn::FVector v25; // [sp+B0h] [-B0h] BYREF
  float v26[4]; // [sp+C0h] [-A0h] BYREF
  Axa::FVECTOR4 v27; // [sp+D0h] [-90h] BYREF
  dk::Line v28; // [sp+E0h] [-80h] BYREF
  u_short v29; // [sp+100h] [-60h] BYREF

  v28.m_begin.z = 0.0;
  v28.m_begin.y = 0.0;
  v28.m_begin.x = 0.0;
  v28.m_begin.w = 1.0;
  v28.m_end.z = 0.0;
  v28.m_end.y = 0.0;
  v28.m_end.x = 0.0;
  v28.m_end.w = 1.0;
  v22.z = 0.0;
  v22.y = 0.0;
  v22.x = 0.0;
  v22.w = 1.0;
  v9 = (float *)YS::OBJ::get_pos(this);
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  v23.x = _dir->x;
  v23.z = _dir->z;
  v14 = _dir->w;
  v23.y = 0.0;
  v23.w = v14;
  Axa::FVECTOR4::normalize(&v23);
  v24.x = v10;
  v24.z = v12;
  v24.w = v13;
  v26[0] = v23.x;
  v26[1] = v23.y;
  v26[2] = v23.z;
  v26[3] = v23.w;
  v24.y = (float)v11 - (float)jump_height;
  v15 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v26);
  v16 = v15[1];
  v17 = v15[2];
  v18 = v15[3];
  v21.x = *v15;
  v21.y = v16;
  v21.z = v17;
  v21.w = v18;
  v27.x = v24.x;
  v27.y = v24.y;
  v27.z = v24.z;
  v27.w = v24.w;
  v19 = Axa::FVECTOR4::operator+=(&v27, &v21);
  v25.x = v19->x;
  v25.y = v19->y;
  v25.z = v19->z;
  v25.w = v19->w;
  kn::FVector::operator=(&v28.m_begin, &v24);
  kn::FVector::operator=(&v28.m_end, &v25);
  if ( (unsigned int)dk::Octree::intersectLineMap(&v28, &v22, &v29, (*(_DWORD *)&(*this)[1536] >> 25) & 0xF) )
    return 3LL;
  kn::FVector::operator=(&v24, &v25);
  v24.y = (float)((float)fall_height + (float)jump_height) + v24.y;
  kn::FVector::operator=(&v28.m_begin, &v25);
  kn::FVector::operator=(&v28.m_end, &v24);
  if ( !(unsigned int)dk::Octree::intersectLineMap(&v28, &v22, &v29, (*(_DWORD *)&(*this)[1536] >> 25) & 0xF) )
    return 3LL;
  if ( v22.y < (double)(float)-(float)((float)(*(float *)&(*this)[1532] * (float)0.40000001) - (float)v11) )
    return 1LL;
  if ( v22.y <= (double)(float)((float)(*(float *)&(*this)[1532] * (float)0.40000001) + (float)v11) )
    return 0LL;
  return 2LL;
}


---
---
---
appears in:
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
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
obj\B_LK110_PHANTOM\b_lk.bdscript ((M) Scar Ghost)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI010\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))
obj\M_AL020_FIRE\m_al.bdscript ((M) Fiery Globe)
obj\M_AL020_FIRE2\m_al.bdscript ((M) Fiery Globe (2))
obj\M_AL020_FIRE_RAW\m_al.bdscript ((M) Fiery Globe (RAW))
obj\M_AL020_ICEE\m_al.bdscript ((M) Icy Cube)
obj\M_AL020_ICEE2\m_al.bdscript ((M) Icy Cube (2))
obj\M_AL020_ICEE_RAW\m_al.bdscript ((M) Icy Cube (RAW))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
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
obj\M_EX600\m_ex.bdscript ((M) Magnum Loader)
obj\M_EX610\m_ex.bdscript ((M) Strafer)
obj\M_EX610_RAW\m_ex.bdscript ((M) Strafer (RAW))
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
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
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX990\m_ex.bdscript ((M) Dusk)
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
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
---
---
---
example usage from obj\B_BB110\b_bb.bdscript
L4358:
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 4
 fetchValue 12
 pushFromFSp 4
 fetchValue 16
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 12
 add 
 pushImmf 100
 memcpy 0
 pushFromFSp 4
 pushImm 28
 add 
 pushFromFSp 0
 pushFromPSp 16
 pushFromFSp 4
 fetchValue 0
 pushFromFSp 4
 fetchValue 4
 syscall 1, 119 ; trap_obj_check_step (4 in, 1 out)
 memcpy 0
 pushFromFSp 4
 fetchValue 28
 dup 
 pushImm 1
 sub 
 jz L4435
 dup 
 pushImm 2
 sub 
 jz L4435
 jmp L4514
