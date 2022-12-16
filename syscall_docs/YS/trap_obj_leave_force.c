---
---
---
name: trap_obj_leave_force
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
push unk1 ; (unknown)  (pushFromFSp: 0)
syscall 1, 17 ; trap_obj_leave_force (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004FCA4C) ----------------------------------------------------
void __fastcall YS::trap_obj_leave_force(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)*(unsigned int *)(v1 + 4)
                                                    + 0x1CLL))();
}
// 4FCA6C: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_EX310\b_ex.bdscript ((F) Xemnas armor - Xaldin’s spears)
obj\F_BB130\f_bb.bdscript ((F) ??? - Minigame related? (BB))
obj\F_CA050\f_ca.bdscript ((F) Explosive barrel (CA))
obj\F_CA690_BTL\f_ca.bdscript ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_EX210\f_ex.bdscript ((F) Vexen’s Absent Silhouette portal (can’t be used))
obj\F_EX220\f_ex.bdscript ((F) Lexeus’ Absent Silhouette portal (can’t be used))
obj\F_EX230\f_ex.bdscript ((F) Zexion’s Absent Silhouette portal (can’t be used))
obj\F_EX240\f_ex.bdscript ((F) Marluxia’s Absent Silhouette portal (can’t be used))
obj\F_EX250\f_ex.bdscript ((F) Larxene’s Absent Silhouette portal (can’t be used))
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
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
obj\F_HE030_S\f_he.bdscript ((F) Phil minigame S (HE))
obj\F_HE030_S_FREE\f_he.bdscript ((F) Phil minigame S (FREE) (HE))
obj\F_HE110\f_he.bdscript ((F) Mist Sphere (HE))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\F_NM160\f_nm.bdscript ((F) Lever (NM))
obj\F_NM170_CATCH\f_nm.bdscript ((F) Present minigame (CATCH) (NM))
obj\F_NM170_L\f_nm.bdscript ((F) Present minigame (L) (NM))
obj\F_NM170_M\f_nm.bdscript ((F) Present minigame (M) (NM))
obj\F_NM170_S\f_nm.bdscript ((F) Present minigame (S) (NM))
obj\F_NM170_XL\f_nm.bdscript ((F) Present minigame (XL) (NM))
obj\F_PO030\f_po.bdscript ((F) ??? (PO))
obj\F_PO090\f_po.bdscript ((PO) Bees (PO))
obj\F_PO090_ETC\f_po.bdscript ((F) Bees (ETC) (PO))
obj\F_PO090_TT\f_po.bdscript ((F) Bees (TT) (PO))
obj\F_TR060\f_tr.bdscript ((F) MCP wall (TR))
obj\F_TR110\tr_b.bdscript ((F) Light cycle’s columns (5) (TR))
obj\F_TR120\tr_b.bdscript ((F) Light cycle’s columns (3) (TR))
obj\F_TR130\tr_b.bdscript ((F) Light cycle’s columns (1) (TR))
obj\F_TR160\f_tr.bdscript ((F) WARNING message (TR))
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT060\f_tt.bdscript ((F) ??? - minigame reaction command? (TT))
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_TT170\f_tt.bdscript ((F) ??? - flying attack balls - bees? (TT))
obj\N_PO020_BTL\n_po.bdscript ((N) Tigger (BTL) (PO))
obj\N_PO030_BTL\n_po.bdscript ((N) Pigglet (BTL) (PO))
obj\N_PO040_BTL\n_po.bdscript ((N) Eeyore (BTL) (PO))
obj\N_PO070_BTL\n_po.bdscript ((N) Roo (BTL) (PO))
obj\N_WI010_BTL\n_wi.bdscript ((N) Pete (captain) (BTL) (WI))
obj\N_WI010_BTL_VS\n_wi.bdscript ((N) Pete (captain) (BTL_VS) (WI))
---
---
---
example usage from obj\B_EX310\b_ex.bdscript
L2726:
 popToSp 0
 pushFromFSp 0
 syscall 1, 17 ; trap_obj_leave_force (1 in, 0 out)
 ret 
