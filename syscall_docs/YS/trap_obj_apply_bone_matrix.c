---
---
---
name: trap_obj_apply_bone_matrix
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
push obj ; (YS::OBJ_125 *)  (Representation of an obj/mdlx)
push bone ; (int)  (Bone number)
push matrix ; (A matrix to apply to the bone)
syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
pop matrix_out ; (float) (the resulting matrix?)
---
---
---
description: Applies a matrix to a bone
---
---
---
decompiled code:
void __fastcall Axa::FMATRIX44::unit(Axa::FMATRIX44 *const this)
float __fastcall YS::OBJ::get_bone_matrix(YS::OBJ_125 *const this, int bone, kn::FMatrix *m)
/----- (0000000000505E28) ----------------------------------------------------
void __fastcall YS::trap_obj_apply_bone_matrix(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-F0h]
  kn::FVector v5; // [sp+70h] [-80h] BYREF
  Axa::FVECTOR4 v6; // [sp+80h] [-70h] BYREF
  Axa::FMATRIX44 v7; // [sp+90h] [-60h] BYREF

  Axa::FMATRIX44::unit(&v7);
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
  YS::OBJ::get_bone_matrix((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4], (kn::FMatrix *)&v7);
  Axa::FMATRIX44::operator*(&v6, &v7, (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[8]);
  v5.x = v6.x;
  v5.y = v6.y;
  v5.z = v6.z;
  v5.w = v6.w;
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 505E60: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;

//COMPLICATED Axa::FMATRIX44::unit YS::OBJ::get_bone_matrix
->
/----- (00000000000202B0) ----------------------------------------------------
void __fastcall Axa::FMATRIX44::unit(Axa::FMATRIX44 *const this)
{
  _R5 = 16;
  _R4 = Axa::FMATRIX44::unit;
  _R7 = 32;
  _R9 = 48;
  _R6 = 16;
  _R8 = 32;
  __asm
  {
    lvx       v2, 0, r4
    lvx       v3, r5, r4
  }
  _R10 = 48;
  __asm
  {
    lvx       v4, r7, r4
    lvx       v5, r9, r4
    stvx      v2, 0, this
    stvx      v3, r6, this
    stvx      v4, r8, this
    stvx      v5, r10, this
  }
}
// 20270: using guessed type __int64 Axa::FMATRIX44::unit[2];


->
/----- (000000000045E240) ----------------------------------------------------
float __fastcall YS::OBJ::get_bone_matrix(YS::OBJ_125 *const this, int bone, kn::FMatrix *m)
{
  int v3; // r29
  double v6; // fp31
  unsigned __int64 v7; // r28
  __int64 v8; // r30
  BOOL v9; // r4
  unsigned int v10; // r3
  unsigned int v11; // r29
  const YS::COLLISION_ELEM_0 *v12; // r30
  YS::COLLISION_DATA_0 *v13; // r3
  BOOL v14; // r4
  double v15; // fp2
  double v16; // fp3
  double v17; // fp4
  double v18; // fp5
  double v19; // fp1
  YS::COLLISION_DATA_0 *v20; // r3
  const YS::COLLISION_ELEM_0 *v21; // r29
  BOOL v22; // r4
  int v24; // r3
  double v25; // fp31
  __int64 back_chain; // [sp+0h] [-1C0h]
  Axa::FVECTOR4 v28; // [sp+70h] [-150h] BYREF
  kn::FVector v29; // [sp+80h] [-140h] BYREF
  kn::FVector v30; // [sp+90h] [-130h] BYREF
  Axa::FVECTOR4 v31; // [sp+A0h] [-120h] BYREF
  Axa::FVECTOR4 v32; // [sp+B0h] [-110h] BYREF
  int v33; // [sp+CCh] [-F4h]
  kn::FVector v34; // [sp+D0h] [-F0h] BYREF
  int v35; // [sp+ECh] [-D4h]
  float v36; // [sp+F0h] [-D0h]
  float v37; // [sp+F4h] [-CCh]
  float v38; // [sp+F8h] [-C8h]
  float v39; // [sp+FCh] [-C4h]
  kn::FMatrix v40; // [sp+100h] [-C0h] BYREF
  Axa::FMATRIX44 v41; // [sp+140h] [-80h] BYREF

  v3 = bone;
  v6 = 0.0;
  v28.z = 0.0;
  v28.y = 0.0;
  v28.x = 0.0;
  v28.w = 1.0;
  v33 = 0;
  v34.z = 0.0;
  v34.y = 0.0;
  v34.x = 0.0;
  v34.w = 1.0;
  v7 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( bone < 0 || bone >= 0x10000 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "bone >= 0 && bone < 0x10000",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      758LL,
      "get_bone_matrix",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 758);
  }
  if ( (v3 & 0x4000) != 0 )
  {
    if ( v3 > 16386 )
    {
      if ( v3 <= 16390 )
      {
        if ( v3 <= 16388 )
        {
          v6 = YS::OBJ::get_bone_matrix_weapon(this, ((_BYTE)v3 - 3) & 1, m);
          v28.y = 0.0;
          v28.z = 0.0;
          v28.w = 1.0;
          v28.x = v6;
          Axa::FMATRIX44::operator*(&v31, m, &v28);
          v30.x = v31.x;
          v30.y = v31.y;
          v30.z = v31.z;
          v30.w = v31.w;
          kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)m + 48), &v30);
        }
        else
        {
          YS::OBJ::get_bone_matrix_weapon(this, ((_BYTE)v3 - 5) & 1, m);
        }
        return v6;
      }
      if ( v3 <= 16392 )
      {
        v19 = YS::OBJ::get_bone_matrix_weapon(this, ((_BYTE)v3 - 7) & 1, m);
        v28.y = 0.0;
        v28.z = 0.0;
        v28.w = 1.0;
        v6 = (float)((float)v19 * (float)0.5);
        v28.x = (float)v19 * (float)0.5;
        Axa::FMATRIX44::operator*(&v32, m, &v28);
        v30.x = v32.x;
        v30.y = v32.y;
        v30.z = v32.z;
        v30.w = v32.w;
        kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)m + 48), &v30);
        return v6;
      }
      if ( v3 <= 16393 )
      {
        kn::FMatrix::operator=(m, (const kn::FMatrix *)(unsigned int)((_DWORD)this + 64));
        v20 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
        v21 = 0LL;
        if ( (_DWORD)v20 )
        {
          do
          {
            v21 = (const YS::COLLISION_ELEM_0 *)YS::COLLISION_DATA::next_elem(v20, 9, v21);
            if ( !(_DWORD)v21 )
              break;
            v22 = YS::OBJ::is_enable_collision(this, v21->Group);
            v20 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
          }
          while ( !v22 );
          if ( (_DWORD)v21 )
          {
            YS::COLLISION::set((YS::COLLISION_33 *const)(&v32 + 1), this, v21);
            kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)m + 48), &v34);
          }
        }
        return v6;
      }
    }
    else
    {
      if ( v3 > 0x4000 )
      {
        if ( v3 <= 16385 )
        {
          kn::FMatrix::operator=(m, (const kn::FMatrix *)(unsigned int)((_DWORD)this + 64));
          v11 = (_DWORD)m + 48;
          v12 = 0LL;
          v13 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
          v35 = 0;
          v38 = 0.0;
          v37 = 0.0;
          v36 = 0.0;
          v39 = 1.0;
          if ( !(_DWORD)v13 )
            goto LABEL_27;
          do
          {
            v12 = (const YS::COLLISION_ELEM_0 *)YS::COLLISION_DATA::next_elem(v13, 1, v12);
            if ( !(_DWORD)v12 )
              break;
            v14 = YS::OBJ::is_enable_collision(this, v12->Group);
            v13 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
          }
          while ( !v14 );
          if ( (_DWORD)v12 )
          {
            YS::COLLISION::set((YS::COLLISION_33 *const)(&v34 + 1), this, v12);
            v15 = v36;
            v16 = v37;
            v17 = v38;
            v18 = v39;
          }
          else
          {
LABEL_27:
            v15 = *(float *)(unsigned int)((_DWORD)this + 1344);
            v16 = *(float *)((unsigned int)((_DWORD)this + 1344) + 4LL);
            v17 = *(float *)((unsigned int)((_DWORD)this + 1344) + 8LL);
            v18 = *(float *)((unsigned int)((_DWORD)this + 1344) + 0xCLL);
          }
          v29.x = v15;
          v29.y = v16;
          v29.z = v17;
          v29.w = v18;
          kn::FVector::operator=((kn::FVector *const)v11, &v29);
          *(_DWORD *)(v11 + 0xCLL) = 1065353216;
        }
        else
        {
          kn::FMatrix::operator=(m, (const kn::FMatrix *)(unsigned int)((_DWORD)this + 1712));
        }
        return v6;
      }
      if ( v3 > 0x3FFF )
      {
        kn::FMatrix::operator=(m, (const kn::FMatrix *)(unsigned int)((_DWORD)this + 64));
        v8 = (unsigned int)((_DWORD)m + 48);
        if ( !(_DWORD)this )
        {
          ErrorPrintf(
            "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
            "this != NULL",
            "common",
            "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
            1306LL,
            "get_pos",
            (const void *)v7);
          ErrorRaise();
          Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1306);
        }
        v9 = YS::OBJ::is_attach(this);
        v10 = (_DWORD)this + 1344;
        if ( v9 )
          v10 = (_DWORD)this + 112;
        kn::FVector::operator=((kn::FVector *const)v8, (const kn::FVector *)v10);
        *(_DWORD *)(v8 + 12) = 1065353216;
        return v6;
      }
    }
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      806LL,
      "get_bone_matrix",
      (const void *)v7);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 806);
    return v6;
  }
  if ( (v3 & 0x8000) != 0 )
  {
    v24 = ((__int64 (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[2224]
                                                               + 0x18LL))();
    if ( v24 < 0 )
      v24 = 0;
    v3 = v24;
  }
  v25 = kn::ModelObj::getPartMatrix((kn::ModelObj_9 *const)*(unsigned int *)&(*this)[1648], v3, m);
  Axa::FMATRIX44::operator*(&v41, (const Axa::FMATRIX44 *const)(unsigned int)((_DWORD)this + 1712), m);
  v40.v0.x = v41.v0.x;
  v40.v0.y = v41.v0.y;
  v40.v0.z = v41.v0.z;
  v40.v0.w = v41.v0.w;
  v40.v1.x = v41.v1.x;
  v40.v1.y = v41.v1.y;
  v40.v1.z = v41.v1.z;
  v40.v1.w = v41.v1.w;
  v40.v2.x = v41.v2.x;
  v40.v2.y = v41.v2.y;
  v40.v2.z = v41.v2.z;
  v40.v2.w = v41.v2.w;
  v40.v3.x = v41.v3.x;
  v40.v3.y = v41.v3.y;
  v40.v3.z = v41.v3.z;
  v40.v3.w = v41.v3.w;
  kn::FMatrix::operator=(m, &v40);
  return v25;
}
// 45E2B8: variable 'back_chain' is possibly undefined


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\jack\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
limit\trinity_zz\limi.bdscript
limit\tron\limi.bdscript
magic\cure1\cure.bdscript
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_AL110\b_al.bdscript ((B) Volcanic Lord’s lava pool)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
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
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX290\b_ex.bdscript ((F) Xemnas armor - Xigbar’s arrowgun)
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_EX430\b_ex.bdscript ((?) Related to Lingering Will?)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_HE030_CLSM\b_he.bdscript ((B) Hades (CLSM) (HE))
obj\B_HE030_HE05\b_he.bdscript ((B) Hades)
obj\B_HE030_PART\b_he.bdscript ((B) Hades (1st & 2nd fight))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\EH_G_EX250\g_ex.bdscript ((EH) Bomb Bell B)
obj\EH_G_EX250_FLY\g_ex.bdscript ((EH) Bomb Bell B (FLY) (G_EX))
obj\EH_G_EX320\g_ex.bdscript ((EH) Spiked Roller B (G_EX))
obj\F_AL170\f_al.bdscript ((F) Tip of tower (AL))
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_MU000\f_mu.bdscript ((F) Destructable Rock 1 (Reaction Command) (MU))
obj\F_MU010\f_mu.bdscript ((F) Destructable Rock 2 (Reaction Command) (MU))
obj\F_MU020\f_mu.bdscript ((F) Destructable Rock 3 (Reaction Command) (MU))
obj\F_NM080\f_nm.bdscript ((F) Oogie’s present box (NM))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\F_WI060\f_wi.bdscript ((F) Cannon tower (WI))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\G_EX250_EH\g_ex.bdscript ()
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX110\m_ex.bdscript ((M) Silver Rock)
obj\M_EX120\m_ex.bdscript ((M) Emerald Blues)
obj\M_EX120_HB\m_ex.bdscript ((M) Spring Metal)
obj\M_EX120_NM\m_ex.bdscript ((M) Emerald Blues (NM))
obj\M_EX120_TR\m_ex.bdscript ((M) Emerald Blues (TR))
obj\M_EX130\m_ex.bdscript ((M) Crimson Jazz)
obj\M_EX350_02\m_ex.bdscript ((M) Mushroom 2 (EX))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
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
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX760_RAW\m_ex.bdscript ((M) Armored Knight (RAW) (1000 battle))
obj\M_EX770\m_ex.bdscript ((M) Surveillance Robot)
obj\M_EX770_RAW\m_ex.bdscript ((M) Surveillance Robot (RAW) (1000 battle))
obj\M_EX770_TR\m_ex.bdscript ((M) Surveillance Robot (TR))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX880_DANCER\m_ex.bdscript ((M) Demyx’s water form)
obj\M_EX880_DANCER_EH\m_ex.bdscript ((M) Demyx’s water form (EH))
obj\M_EX880_DANCER_LV99\m_ex.bdscript ((M) Demyx’s water form (Data))
obj\M_EX910\m_ex.bdscript ((M) Samurai)
obj\M_EX920\m_ex.bdscript ((M) Sniper)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
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
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
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
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_HE000\p_he.bdscript ((P) Auron)
obj\P_MU000\p_mu.bdscript ((P) Mulan)
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L782:
 pushFromPSp 176
 gosub 52, L2499
 eqz 
 jz L1049
 pushFromPSp 16
 pushImmf 1
 gosub 52, L1889
 pushFromFSp 0
 pushImm 16385
 pushFromPSp 16
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 192
 pushFromPSp 192
 memcpyToSp 16, 16
 pushFromPSp 48
 pushFromPSp 16
 gosub 52, L1951
 pushFromPSp 48
 fetchValue 92
 jz L833
 pushFromPAi L6864 ; ___ai break (L6864)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 jmp L1049
