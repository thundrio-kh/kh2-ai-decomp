---
---
---
name: trap_obj_hide_part
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
push obj ; (YS::OBJ_130 *)  (An object)
push part ; (int)  (A part number)
syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
---
---
---
description: Hides a specific bone/part of an object
---
---
---
decompiled code:
void __fastcall YS::OBJ::hide_part(YS::OBJ_130 *const this, int part)
/----- (0000000000507914) ----------------------------------------------------
void __fastcall YS::trap_obj_hide_part(BD_VALUE_21 *args)
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
  YS::OBJ::hide_part((YS::OBJ_130 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4]);
}
// 507938: variable 'back_chain' is possibly undefined
->
/----- (0000000000469B08) ----------------------------------------------------
void __fastcall YS::OBJ::hide_part(YS::OBJ_130 *const this, int part)
{
  kn::ModelObj_9 *v4; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (kn::ModelObj_9 *)*(unsigned int *)&(*this)[1648];
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "DrawList.ModelObj != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\objdraw.cpp",
      385LL,
      "hide_part",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objdraw.cpp", 385);
    v4 = (kn::ModelObj_9 *)*(unsigned int *)&(*this)[1648];
  }
  kn::ModelObj::hidePart(v4, part);
}
// 469B2C: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX210\b_ex.bdscript ((M) Luxord’s card (attack))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_EX240\b_ex.bdscript ((?) Xemnas’s dragon (Anchored))
obj\B_EX330\b_ex.bdscript ((F) Xemnas’s dragon (Flying))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
obj\B_NM110_L_ARM\b_nm.bdscript ((B) The Experiment (Left Hand))
obj\B_NM110_R_ARM\b_nm.bdscript ((B) The Experiment (Right Hand))
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB060\f_bb.bdscript ((F) Shadow Stalker (Columns) (BB))
obj\F_BB100\f_bb.bdscript ((F) Minigame’s lamp (BB))
obj\F_CA020\f_ca.bdscript ((F) Isla de Muerta’s chest’s lid (CA))
obj\F_CA690_BTL\f_ca.bdscript ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))
obj\F_EH040\f_eh.bdscript ((F) White and green beam (EH))
obj\F_HB070\f_hb.bdscript ((F) CoR’s droppable spike (HB))
obj\F_HE020_A1\f_he.bdscript ((F) Rock 1 (grey) (HE))
obj\F_HE020_A2\f_he.bdscript ((F) Rock 2 (grey) (HE))
obj\F_HE020_B1\f_he.bdscript ((F) Rock 1 (green) (HE))
obj\F_HE020_B2\f_he.bdscript ((F) Rock 2 (green) (HE))
obj\F_HE020_C1\f_he.bdscript ((F) Rock 1 (blue) (HE))
obj\F_HE020_C2\f_he.bdscript ((F) Rock 2 (blue) (HE))
obj\F_HE020_PETE\f_he.bdscript ((F) Falling boulder (Pete battle) (HE))
obj\F_HE020_PO\f_he.bdscript ((F) Falling crystal (PO))
obj\F_HE030_L\f_he.bdscript ((F) Phil minigame L (HE))
obj\F_HE030_L_FREE\f_he.bdscript ((F) Phil minigame L (FREE) (HE))
obj\F_NM080\f_nm.bdscript ((F) Oogie’s present box (NM))
obj\F_NM120\f_nm.bdscript ((F) Oogie’s spikes (NM))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_WI320\f_wi.bdscript ((F) Lilliput houses 1 (WI))
obj\F_WI330\f_wi.bdscript ((F) Lilliput houses 2 (WI))
obj\F_WI340\f_wi.bdscript ((F) Lilliput houses 3 (WI))
obj\F_WI350\f_wi.bdscript ((F) Lilliput houses 4 (WI))
obj\F_WI360\f_wi.bdscript ((F) Building site’s platform (WI))
obj\F_WI360_PETE\f_wi.bdscript ((F) Building site’s platform (PETE) (WI))
obj\F_WI380\f_wi.bdscript ((F) Steamboat with Corner stone in cage (WI))
obj\F_WI380_RTN\f_wi.bdscript ((F) Steamboat with Corner stone in cage (RTN) (WI))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_EX350_12\m_ex.bdscript ((M) Mushroom 12 (EX))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX750\m_ex.bdscript ((M) Creeper Plant)
obj\M_EX750_NM\m_ex.bdscript ((M) Creeper Plant (NM))
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\P_AL010\p_al.bdscript ((P) Genie)
---
---
---
example usage from obj\B_CA010\b_ca.bdscript
L1000:
 pushFromPAi L12173 ; ___ai show_gun######### (L12173)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromPWp W384
 pushImm 13
 syscall 1, 108 ; trap_obj_show_part (2 in, 0 out)
 pushFromPWp W384
 pushImm 23
 syscall 1, 108 ; trap_obj_show_part (2 in, 0 out)
 pushFromPWp W384
 pushImm 14
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromPWp W384
 pushImm 24
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 jmp L1077
