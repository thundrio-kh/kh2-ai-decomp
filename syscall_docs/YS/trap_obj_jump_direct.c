---
---
---
name: trap_obj_jump_direct
---
---
---
category: Movement
---
---
---
documentation level: incomplete
---
---
---
push obj ; (YS::OBJ_125) (An object)
push unk ; (unknown)  (Unknown what this is used for)
syscall 1, 227 ; trap_obj_jump_direct (2 in, 0 out)
---
---
---
description: Makes an object jump probably 10 units.
---
---
---
decompiled code:

/----- (00000000004FDF90) ----------------------------------------------------
void __fastcall YS::trap_obj_jump_direct(BD_VALUE_21 *args)
{
  __int64 v1; // r29
  unsigned __int64 v2; // r30
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
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)(*(unsigned int *)(v1 + 4)
                                                                                       + 0xCLL)
                                                    + 0x10LL))();
}
// 4FDFB4: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
limit\auron\limi.bdscript
limit\riku\limi.bdscript
obj\B_AL020\b_al.bdscript ((B) Jafar (Djinn))
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\F_BB120\f_bb.bdscript ((F) Minigame’s box (BB))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
obj\F_PO080\f_po.bdscript ((F) Honey pot (PO))
obj\F_TR020\f_tr.bdscript ((F) Energy core’s cube (TR))
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
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
obj\M_AL020_FIRE2\m_al.bdscript ((M) Fiery Globe (2))
obj\M_AL020_ICEE2\m_al.bdscript ((M) Icy Cube (2))
obj\M_EX550\m_ex.bdscript ((M) Minute Bomb)
obj\M_EX550_WI\m_ex.bdscript ((M) Minute Bomb (WI))
obj\M_EX940\m_ex.bdscript ((M) Berserker)
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))
obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))
obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))
obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))
obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript ((N) Dove (TT) (SKATE) (RTN) (EX))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_TR000\p_tr.bdscript ((P) Tron)
---
---
---
example usage from limit\auron\limi.bdscript
L1200:
 popToSp 0
 pushFromPWp W108
 fetchValue 0
 pushFromFSp 0
 pushImm 252
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1323
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 227 ; trap_obj_jump_direct (2 in, 0 out)
 pushFromFSp 0
 pushImm -1
 syscall 1, 179 ; trap_obj_set_fall_motion (2 in, 0 out)
 pushFromFSp 0
 pushImm -1
 syscall 1, 180 ; trap_obj_set_land_motion (2 in, 0 out)
