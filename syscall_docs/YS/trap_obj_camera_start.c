---
---
---
name: trap_obj_camera_start
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
push unk1 ; (unknown)  (pushFromFSp: 0) (gosub: 12, L3999,12, L928,16, L1882,16, L931,20, L427,...) (pushFromPWp: W0,W16,W32,W4,W4208,...) (pushFromPSp: 16,32,64) (gosub32: 12, L4250,4, L4250) (pushFromPSpVal: 0,20)
push unk2 ; (unknown)  (pushFromPAi: L10968 ; ___ai '00' (L10968),L11155 ; ___ai '00' (L11155),L11162 ; ___ai '10' (L11162),L11168 ; ___ai '10' (L11168),L11267 ; ___ai '10' (L11267),...) (memcpyToSp: 16, 16,16, 32,16, 48,16, 64) (pushFromFSp: 20,8) (pushImm: 144)
push unk3 ; (unknown)  (pushFromFSp: 0,4,8) (pushFromPSpVal: 0,4) (pushFromPSp: 16,32,48,64) (pushFromPWp: W0,W16,W32) (add: )
syscall 1, 219 ; trap_obj_camera_start (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::STDOBJ::start_camera(YS::STDOBJ_112 *const this, const char *label, YS::OBJ_164 *target)
/----- (00000000005021BC) ----------------------------------------------------
void __fastcall YS::trap_obj_camera_start(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  const char *v5; // r28
  __int64 v6; // r31
  __int64 back_chain; // [sp+0h] [-A0h]

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
  if ( (*(_DWORD *)(v4 + 1416) & 1) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_stdobj()",
      "common",
      "../yasui/libys/stdobj.h",
      104LL,
      "TOSTDOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/stdobj.h", 104);
  }
  v5 = (const char *)*(unsigned int *)&(*args)[4];
  v6 = *(unsigned int *)&(*args)[8];
  if ( !(_DWORD)v6 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v6 & 3) != 0 )
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
  YS::STDOBJ::start_camera((YS::STDOBJ_112 *const)v4, v5, (YS::OBJ_164 *)*(unsigned int *)(v6 + 4));
}
// 5021E0: variable 'back_chain' is possibly undefined
->
/----- (00000000004A2284) ----------------------------------------------------
void __fastcall YS::STDOBJ::start_camera(YS::STDOBJ_112 *const this, const char *label, YS::OBJ_164 *target)
{
  int v3; // r30
  const YS::BINARC_47 *v5; // r3
  unsigned __int64 v6; // r3
  unsigned int *v7; // r29
  YS::EVENT_10 *v8; // r27
  YS::EVENT_10 *v9; // r3
  YS::EVENT_10 *v10; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v3 = (int)this;
  v5 = (const YS::BINARC_47 *)*(unsigned int *)&(*this)[1968];
  if ( (_DWORD)v5
    && (v6 = YS::BINARC::get_info_by_tag(
               v5,
               0x16u,
               *label | (label[1] << 8) | (label[2] << 16) | (unsigned int)(label[3] << 24),
               0LL),
        (_DWORD)v6) )
  {
    v7 = (unsigned int *)*(unsigned int *)(v6 + 8);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !(_DWORD)v7 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "data != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp",
      206LL,
      "start_camera",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\stdobj.cpp", 206);
  }
  v8 = 0LL;
  v9 = (YS::EVENT_10 *)AREA::Alloc(0xB0u);
  v10 = v9;
  if ( (_DWORD)v9 )
  {
    YS::EVENT::EVENT(v9, 11, v7);
    v8 = v10;
  }
  *(_DWORD *)&(*v8)[8] = v3 + 128;
  if ( (_DWORD)target )
    YS::EVENT::set_camera_target(v8, target);
  YS::EVENT::start(v8);
}
// 4A2324: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_BB100\b_bb.bdscript ((B) Thresholder)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB130\f_bb.bdscript ((F) ??? - Minigame related? (BB))
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_EH110\f_eh.bdscript ((F) Rising building (EH))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
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
obj\M_EX350_13\m_ex.bdscript ((M) Mushroom 13 (EX))
obj\N_BB050_BTL\n_bb.bdscript ((N) Cogsworth (BTL) (BB))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))
obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))
obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))
obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))
obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript ((N) Dove (TT) (SKATE) (RTN) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_CLSM\n_ex.bdscript ((N) Pete (BTL) (CLSM) (EX))
obj\N_EX760_BTL_HERCULES\n_ex.bdscript ((N) Pete (BTL_HERCULES) (EX))
obj\N_EX760_BTL_MEGARA\n_ex.bdscript ((N) Pete (BTL_MEGARA) (EX))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\N_HB500_BTL\n_hb.bdscript ()
obj\N_HB530_BOSS\n_hb.bdscript ((N) Squall / Leon (BOSS) (HB))
obj\N_HB530_BTL\n_hb.bdscript ((N) Squall / Leon (BTL) (HB))
obj\N_HB550_BOSS\n_hb.bdscript ((N) Cloud (BOSS) (HB))
obj\N_HB550_BTL\n_hb.bdscript ((N) Cloud (BTL) (HB))
obj\N_HB570_BOSS\n_hb.bdscript ((N) Tifa (BOSS) (HB))
obj\N_HB570_BTL\n_hb.bdscript ((N) Tifa (BTL) (HB))
obj\N_HB580_BOSS\n_hb.bdscript ((N) Yuffie (BOSS) (HB))
obj\N_HB580_BTL\n_hb.bdscript ((N) Yuffie (BTL) (HB))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX340\p_ex.bdscript ((P) Tinker Bell)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\B_AL020\b_al.bdscript
L3114:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L3311
 memcpyToSp 16, 32
 pushFromPSp 32
 gosub 16, L3296
 pushFromPSpVal 176
 pushImm 360
 syscall 1, 114 ; trap_obj_search_by_entry (2 in, 0 out)
 pushFromPSpVal 176
 pushFromFSp 8
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromPSpVal 176
 fetchValue 4
 pushImm 151
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushFromFSp 8
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 4
 gosub 12, L3311
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPAi L11299 ; ___ai 'target pos' (L11299)
 syscall 0, 8 ; trap_vector_dump (2 in, 0 out)
 pushFromFSp 8
 pushFromPSpVal 0
 pushImmf 0
 gosub 12, L3322
 pushFromFSp 8
 pushImm L3360
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromFSp 8
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImmf 0
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1838
 pushFromFSp 8
 pushFromPSp 16
 gosub 12, L3043
 pushFromFSp 0
 pushFromFSp 8
 pushImm 252
 pushImmf 0
 gosub 12, L3454
 drop 
 pushFromFSp 8
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L11322 ; ___ai 'rc_roll_up' (L11322)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L11339 ; ___ai '00' (L11339)
 pushFromFSp 8
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 ret 
