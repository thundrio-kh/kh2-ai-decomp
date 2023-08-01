---
---
---
name: trap_obj_hide
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
syscall 1, 133 ; trap_obj_hide (1 in, 0 out)
---
---
---
description: Hides all parts of an object
---
---
---
decompiled code:

/----- (00000000004F7B08) ----------------------------------------------------
void __fastcall YS::trap_obj_hide(BD_VALUE_21 *args)
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
                                                    + 0x40LL))();
}
// 4F7B28: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\simba\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_BB120\b_bb.bdscript ((B) Shadow Stalker)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_HE110\b_he.bdscript ((B) Hydra head (Out of the ground))
obj\F_AL140\f_al.bdscript ((F) Boxes and rugs (AL))
obj\F_AL150\f_al.bdscript ((F) Piece of stone wall (AL))
obj\F_AL160\f_al.bdscript ((F) Building floor (AL))
obj\F_BB080\f_bb.bdscript ((F) Shadow Stalker’s ground trap (BB))
obj\F_EH000\f_eh.bdscript ((F) Crooked Ascension room (EH))
obj\F_EH010\f_eh.bdscript ((F) Twilight’s View room (EH))
obj\F_EH040\f_eh.bdscript ((F) White and green beam (EH))
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_EH110\f_eh.bdscript ((F) Rising building (EH))
obj\F_HE000\f_he.bdscript ((F) Standing Torch (HE))
obj\F_NM040_00\f_nm.bdscript ((F) Statue (horse) (NM))
obj\F_NM040_10\f_nm.bdscript ((F) Statue (human) (NM))
obj\F_NM050\f_nm.bdscript ((F) Falling grave (NM))
obj\F_PO030\f_po.bdscript ((F) ??? (PO))
obj\F_PO090\f_po.bdscript ((PO) Bees (PO))
obj\F_PO090_ETC\f_po.bdscript ((F) Bees (ETC) (PO))
obj\F_PO090_TT\f_po.bdscript ((F) Bees (TT) (PO))
obj\F_TR050\f_tr.bdscript ((F) MCP barrier (TR))
obj\F_TR080\tr_w.bdscript ((F) Light cycle’s wall (TR))
obj\F_TR090\tr_w.bdscript ((F) Light cycle’s wall 2 (TR))
obj\F_TR100\tr_w.bdscript ((F) Light cycle’s wall 3 (single panel) (TR))
obj\F_TR110\tr_b.bdscript ((F) Light cycle’s columns (5) (TR))
obj\F_TR120\tr_b.bdscript ((F) Light cycle’s columns (3) (TR))
obj\F_TR130\tr_b.bdscript ((F) Light cycle’s columns (1) (TR))
obj\F_TT020\f_tt.bdscript ((F) Juggling ball (TT))
obj\F_TT040\f_tt.bdscript ((F) Junk (TT))
obj\F_TT120\f_tt.bdscript ((F) Junk 2 (TT))
obj\F_TT130\f_tt.bdscript ((F) Junk 3 (TT))
obj\F_WI000\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? (WI))
obj\F_WI010\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))
obj\F_WI010_BOSS\f_wi.bdscript ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))
obj\F_WI120\f_wi.bdscript ((F) Piano (WI))
obj\F_WI170\f_wi.bdscript ((F) Fireplace (WI))
obj\F_WI180\f_wi.bdscript ((F) Chimney (WI))
obj\F_WI220\f_wi.bdscript ((F) Sofa 2 (WI))
obj\F_WI230\f_wi.bdscript ((F) Wall deer trophy (WI))
obj\F_WI240\f_wi.bdscript ((F) Wall lamp (WI))
obj\F_WI250\f_wi.bdscript ((F) Christmas tree (WI))
obj\F_WI260\f_wi.bdscript ((F) Drawer (WI))
obj\F_WI270\f_wi.bdscript ((F) Wardrobe 4 (WI))
obj\F_WI280\f_wi.bdscript ((F) Wardrobe 5 (WI))
obj\F_WI290\f_wi.bdscript ((F) Painting (WI))
obj\F_WI300\f_wi.bdscript ((F) Shelf (WI))
obj\M_BB010_AX\m_bb.bdscript ((M) Gargoyle Warrior)
obj\M_BB010_SWORD\m_bb.bdscript ((M) Gargoyle Knight)
obj\M_EX020\m_ex.bdscript ((M) Shadow)
obj\M_EX020_NM\m_ex.bdscript ((M) Shadow (NM))
obj\M_EX020_NM_RAW\m_ex.bdscript ((M) Shadow (NM) (RAW))
obj\M_EX020_RAW\m_ex.bdscript ((M) Shadow (RAW))
obj\M_EX020_WI\m_ex.bdscript ((M) Shadow (WI))
obj\M_EX020_WI_RAW\m_ex.bdscript ((M) Shadow (WI) (RAW))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX870\m_ex.bdscript ((M) Sorcerer v2 - Cubes?)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\N_HE020_BTL\n_he.bdscript ((N) Phil (BTL) (HE))
obj\N_HE040_BTL\n_he.bdscript ((N) Pegasus (BTL) (HE))
obj\N_TR010_BTL\n_tr.bdscript ((N) Sark (BTL) (TR))
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\W_EX010_ROXAS_DARK\w_ex.bdscript ((W) Roxas’s Oblivion)
obj\W_EX010_ROXAS_LIGHT\w_ex.bdscript ((W) Roxas’s Oathkeeper)
---
---
---
example usage from limit\aladdin\limi.bdscript
L3659:
 popToSp 0
 pushFromPSpVal 4
 syscall 1, 133 ; trap_obj_hide (1 in, 0 out)
 pushFromPSpVal 20
 syscall 1, 133 ; trap_obj_hide (1 in, 0 out)
 ret 
