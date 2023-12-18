---
---
---
name: trap_obj_detach
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
push object ; (YS::OBJ_126)  (An object)
syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
---
---
---
description: removes a connection between two bones
---
---
---
decompiled code:
void __fastcall YS::OBJ::detach(YS::OBJ_126 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004FBFEC) ----------------------------------------------------
void __fastcall YS::trap_obj_detach(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8; // r4
  __int64 v9; // r30
  unsigned __int64 v10; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v8 = back_chain;
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
  YS::OBJ::detach((YS::OBJ_126 *const)*(unsigned int *)(v9 + 4), v8, a3, a4, a5, a6, a7, a8);
}
// 4FBFFC: variable 'back_chain' is possibly undefined
// 4FC0D4: variable 'v8' is possibly undefined
// 4FC0D4: variable 'a3' is possibly undefined
// 4FC0D4: variable 'a4' is possibly undefined
// 4FC0D4: variable 'a5' is possibly undefined
// 4FC0D4: variable 'a6' is possibly undefined
// 4FC0D4: variable 'a7' is possibly undefined
// 4FC0D4: variable 'a8' is possibly undefined
->
/----- (0000000000462E78) ----------------------------------------------------
void __fastcall YS::OBJ::detach(YS::OBJ_126 *const this, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned __int64 v9; // r28
  int v10; // r29
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  __int64 v15; // r6
  __int64 v16; // r5
  __int64 v17; // r4
  const char *v18; // r3
  __int64 v19; // r10
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r7
  __int64 v23; // r6
  __int64 v24; // r5
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r7
  __int64 v29; // r6
  __int64 v30; // r5
  __int64 v31; // r4
  int v32; // r30
  unsigned __int64 v33; // r29
  int v34; // r22
  unsigned __int64 v35; // r5
  YS::ACTION::ID v36; // r4
  const kn::FVector *v37; // r3
  __int64 v38; // r3
  double v39; // fp1
  Axa::FVECTOR4 *v40; // r3
  YS::VM_377 *v41; // r3
  __int64 back_chain; // [sp+0h] [-100h]
  kn::FVector v43; // [sp+70h] [-90h] BYREF
  kn::FVector v44; // [sp+80h] [-80h] BYREF
  Axa::FVECTOR4 v45; // [sp+90h] [-70h] BYREF
  BD_VALUE_0 v46[4]; // [sp+A0h] [-60h] BYREF

  v43.z = 0.0;
  v43.y = 0.0;
  v43.x = 0.0;
  v43.w = 1.0;
  v9 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp",
      21LL,
      "is_attach",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp", 21);
  }
  v10 = *(_DWORD *)&(*this)[1392];
  if ( v10 )
  {
    v32 = (_DWORD)this + 1648;
    v33 = (unsigned int)(v10 + 1888);
    v34 = *(_DWORD *)v33;
    if ( (_DWORD)this + 1648 == *(_DWORD *)v33 )
    {
      v34 = 0;
      *(_DWORD *)v33 = *(_DWORD *)(unsigned int)((_DWORD)this + 1884);
    }
    else
    {
      while ( 1 )
      {
        v35 = (unsigned int)(v34 + 236);
        if ( *(_DWORD *)v35 == v32 )
          break;
        v34 = *(_DWORD *)v35;
        if ( !*(_DWORD *)v35 )
        {
          ErrorPrintf(
            "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
            "prev != NULL",
            "common",
            "../yasui/list.h",
            131LL,
            "unlink",
            (const void *)v9);
          ErrorRaise();
          Axa::AxaAssert("../yasui/list.h", 131);
        }
      }
      *(_DWORD *)v35 = *(_DWORD *)(unsigned int)((_DWORD)this + 1884);
    }
    if ( v32 == *(_DWORD *)(v33 + 4) )
      *(_DWORD *)(v33 + 4) = v34;
    *(_DWORD *)(unsigned int)((_DWORD)this + 1884) = 0;
    v36 = *(_DWORD *)&(*this)[1400];
    if ( *(_DWORD *)(*(unsigned int *)&(*this)[12] + 4LL) != v36 )
      YS::OBJ::change_action(this, v36);
    v37 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)*(unsigned int *)&(*this)[1392]);
    kn::FVector::operator=(&v43, v37);
    v38 = *(unsigned int *)&(*this)[1392];
    *(_DWORD *)&(*this)[1548] = *(_DWORD *)&(*this)[2060];
    *(_DWORD *)(v38 + 1548) = *(_DWORD *)((unsigned int)(v38 + 2048) + 0xCLL);
    LOWORD(v38) = *(_WORD *)&(*this)[1398];
    *(_DWORD *)&(*this)[1392] = 0;
    if ( (v38 & 2) == 0 )
    {
      *(_DWORD *)(unsigned int)((_DWORD)this + 2040) &= 0xFFFFFFF7;
      v39 = f_atan2f(-*(float *)(unsigned int)((_DWORD)this + 96), -*(float *)((unsigned int)((_DWORD)this + 96) + 8LL));
      YS::OBJ::set_rot(this, v39);
    }
    if ( (unsigned int)YS::OBJ::is_hit_bg(this) )
    {
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1424), &v43);
      v45.x = *(float *)(unsigned int)((_DWORD)this + 112);
      v45.y = *(float *)((unsigned int)((_DWORD)this + 112) + 4LL);
      v45.z = *(float *)((unsigned int)((_DWORD)this + 112) + 8LL);
      v45.w = *(float *)((unsigned int)((_DWORD)this + 112) + 0xCLL);
      v40 = Axa::FVECTOR4::operator-=(&v45, &v43);
      v44.x = v40->x;
      v44.y = v40->y;
      v44.z = v40->z;
      v44.w = v40->w;
      kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1440), &v44);
      *(_DWORD *)&(*this)[1536] |= 0x80000000;
      dk::Octree::collisionToMap((dk::CollisionParam_5 *)(unsigned int)((_DWORD)this + 1424));
      YS::OBJ::set_pos(this, (const kn::FVector *)(unsigned int)((_DWORD)this + 1472));
    }
    else
    {
      YS::OBJ::set_pos(this, (const kn::FVector *)(unsigned int)((_DWORD)this + 112));
    }
    v41 = (YS::VM_377 *)*(unsigned int *)&(*this)[1404];
    if ( (_DWORD)v41 )
    {
      v46[0] = *(BD_VALUE_0 *)&(*this)[1412];
      YS::VM::syscallback(v41, *(_DWORD *)&(*this)[1408], v46, 1, 0LL);
    }
    YS::OBJ::make_matrix(this);
  }
  else
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\objattach.cpp",
      70LL,
      a4,
      a5,
      a6,
      a7,
      a8);
    printf((unsigned int)"\x1B[41m** CAUTION! ", v17, v16, v15, v14, v13, v12, v11);
    v18 = YS::OBJ::get_entry_name(this);
    printf((unsigned int)"%s is not attach", (__int64)v18, v24, v23, v22, v21, v20, v19);
    printf((unsigned int)" **\x1B[00m\n", v31, v30, v29, v28, v27, v26, v25);
  }
}
// 462EB0: variable 'back_chain' is possibly undefined
// 462F50: variable 'a4' is possibly undefined
// 462F50: variable 'a5' is possibly undefined
// 462F50: variable 'a6' is possibly undefined
// 462F50: variable 'a7' is possibly undefined
// 462F50: variable 'a8' is possibly undefined
// 462F60: variable 'v17' is possibly undefined
// 462F60: variable 'v16' is possibly undefined
// 462F60: variable 'v15' is possibly undefined
// 462F60: variable 'v14' is possibly undefined
// 462F60: variable 'v13' is possibly undefined
// 462F60: variable 'v12' is possibly undefined
// 462F60: variable 'v11' is possibly undefined
// 462F84: variable 'v24' is possibly undefined
// 462F84: variable 'v23' is possibly undefined
// 462F84: variable 'v22' is possibly undefined
// 462F84: variable 'v21' is possibly undefined
// 462F84: variable 'v20' is possibly undefined
// 462F84: variable 'v19' is possibly undefined
// 462F94: variable 'v31' is possibly undefined
// 462F94: variable 'v30' is possibly undefined
// 462F94: variable 'v29' is possibly undefined
// 462F94: variable 'v28' is possibly undefined
// 462F94: variable 'v27' is possibly undefined
// 462F94: variable 'v26' is possibly undefined
// 462F94: variable 'v25' is possibly undefined


---
---
---
appears in:
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\riku\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL120\b_al.bdscript ((B) Blizzard Lord’s ice spikes)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_HE030_L\f_he.bdscript ((F) Phil minigame L (HE))
obj\F_HE030_L_FREE\f_he.bdscript ((F) Phil minigame L (FREE) (HE))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR020_CORE\f_tr.bdscript ()
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TR170\f_tr.bdscript ((F) ??? (TR))
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\F_WI390\f_wi.bdscript ((F) Steamboat’s hook (WI))
obj\F_WI390_RTN\f_wi.bdscript ((F) Steamboat’s hook (RTN) (WI))
obj\M_EX590\m_ex.bdscript ((M) Bulky Vendor)
obj\M_EX590_NM\m_ex.bdscript ((M) Bulky Vendor (NM))
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX850\m_ex.bdscript ((M) Berserker weapon (Useable))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_BB080_BTL\n_bb.bdscript ((N) Wardrobe maid (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HE020_BTL\n_he.bdscript ((N) Phil (BTL) (HE))
obj\N_HE040_BTL\n_he.bdscript ((N) Pegasus (BTL) (HE))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\donald2\limi.bdscript
L4061:
 pushFromFSp 0
 syscall 1, 161 ; trap_obj_is_attach (1 in, 1 out)
 jz L4073
 pushFromFSp 0
 syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
 jmp L4073
