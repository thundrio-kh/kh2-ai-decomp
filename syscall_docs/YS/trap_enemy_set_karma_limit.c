---
---
---
name: trap_enemy_set_karma_limit
---
---
---
category: enemy
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::BTLOBJ *)  (an enemy battle object)
push karma ; (float)  (value to set for karma. Is 100 normally)
syscall 2, 76 ; trap_enemy_set_karma_limit (2 in, 0 out)
---
---
---
description: Sets an enemies karma value (revenge limit) to the specified number.
---
---
---
decompiled code:

/----- (00000000004F3B08) ----------------------------------------------------
void __fastcall YS::trap_enemy_set_karma_limit(BD_VALUE_19 *args)
{
  __int64 v1; // r31
  double v2; // fp31
  unsigned __int64 v3; // r30
  __int64 v4; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = *(float *)&(*args)[4];
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v4 = *(unsigned int *)(v1 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 0x10) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_enemy()",
      "common",
      "../yasui/libys/enemy.h",
      45LL,
      "TOENEMY",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/enemy.h", 45);
  }
  *(float *)(v4 + 2804) = v2;
}
// 4F3B30: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX400\b_ex.bdscript ((B) Larxene (Absent Silhouette))
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE030\b_he.bdscript ((B) Hades (3rd & Paradox Hades Cup fight))
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\M_EX960\m_ex.bdscript ((M) Sorcerer)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_EX500_BTL\n_ex.bdscript ((N) Hayner (BTL) (EX))
obj\N_EX570_BTL\n_ex.bdscript ((N) Seifer (BTL) (EX))
obj\N_EX600_BTL\n_ex.bdscript ((N) Setzer (BTL) (EX))
obj\N_EX610_BTL\n_ex.bdscript ((N) Vivi (BTL) (EX))
obj\N_EX610_BTL2\n_ex.bdscript ((N) Vivi (BTL2) (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_HB530_BTL2\n_hb.bdscript ((N) Squall / Leon (BTL2) (HB))
obj\N_HB550_BTL2\n_hb.bdscript ((N) Cloud (BTL2) (HB))
obj\N_HB570_BTL2\n_hb.bdscript ((N) Tifa (BTL2) (HB))
obj\N_HB580_BTL2\n_hb.bdscript ((N) Yuffie (BTL2) (HB))
obj\N_HE010_BTL_CLSM\n_he.bdscript ((N) Hercules (BTL) (CLSM) (HE))
obj\P_EX100_HTLF_BTL\p_ex.bdscript ((P) Vexen’s Anti-Sora (BTL))
obj\P_EX130\p_ex.bdscript ((P) Shadow Roxas)
---
---
---
example usage from obj\B_EX110\b_ex.bdscript
L4842:
 pushFromFSp 0
 pushFromFSp 8
 pushImm -1
 pushImmf 300
 pushImmf 600
 pushImmf 8
 pushImm -1
 pushImmf 0.75
 pushImmf 0.4
 gosub 8, L11946
 pushFromFSp 0
 gosub 8, L12261
 pushImm 1
 popToWp W4560
 pushImm 1
 popToWp W4564
 pushImm 0
 popToWp W4568
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L4930
 pushFromPWp W4544
 pushImmf 1
 gosub 8, L252
 pushFromFSp 0
 gosub 8, L12296
 popToSpVal 112
 pushFromFSp 0
 gosub 8, L13058
 popToSpVal 116
 pushFromFSp 0
 pushImmf 92
 syscall 2, 76 ; trap_enemy_set_karma_limit (2 in, 0 out)
 jmp L4969
