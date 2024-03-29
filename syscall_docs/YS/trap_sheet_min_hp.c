---
---
---
name: trap_sheet_min_hp
---
---
---
category: min_hp
---
---
---
documentation level: untested
---
---
---
push sheet ; (YS::SHEET_44 *) (An object stat sheet)
push index ; (int)  (HP index to use)
syscall 1, 232 ; trap_sheet_min_hp (2 in, 1 out)
pop min_hp ; (int) 
---
---
---
description: Return the min HP of an object
---
---
---
decompiled code:

/----- (000000000050A618) ----------------------------------------------------
void __fastcall YS::trap_sheet_min_hp(BD_VALUE_21 *args)
{
  int v2; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = *(_DWORD *)&(*args)[4];
  if ( v2 < 0 || v2 >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[1].i >= 0 && args[1].i < SHEET::PARTS_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      1127LL,
      "trap_sheet_min_hp",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 1127);
    v2 = *(_DWORD *)&(*args)[4];
  }
  *(_DWORD *)args = *(_DWORD *)(unsigned int)(*(_DWORD *)args + 12 * v2 + 8);
}
// 50A634: variable 'back_chain' is possibly undefined

//BASIC
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
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_HE100\b_he.bdscript ((B) Hydra)
obj\B_LK110\b_lk.bdscript ((B) Scar)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\B_MU110\b_mu.bdscript ((B) Hayabusa (Shan-Yu’s Falcon))
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\B_NM100\b_nm.bdscript ((B) Prison Keeper)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\F_BB050\f_bb.bdscript ((F) Shadow Stalker (Chandelier) (BB))
obj\F_BB060\f_bb.bdscript ((F) Shadow Stalker (Columns) (BB))
obj\F_EH100\f_eh.bdscript ((F) Xemnas’s dragon energy core (EH))
obj\F_HB070\f_hb.bdscript ((F) CoR’s droppable spike (HB))
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\F_TR050\f_tr.bdscript ((F) MCP barrier (TR))
obj\M_EX350_04\m_ex.bdscript ((M) Mushroom 4 (EX))
obj\M_EX350_05\m_ex.bdscript ((M) Mushroom 5 (EX))
obj\M_EX350_07\m_ex.bdscript ((M) Mushroom 7 (EX))
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
obj\N_TR010_BTL_L\n_tr.bdscript ((N) Sark (large) (BTL) (TR))
obj\P_BB000_BTL\p_bb.bdscript ((P) Beast (BTL))
---
---
---
example usage from obj\B_AL020\b_al.bdscript
L3693:
 drop 
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 228 ; trap_sheet_hp (2 in, 1 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 232 ; trap_sheet_min_hp (2 in, 1 out)
 sub 
 info 
 jz L3814
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 232 ; trap_sheet_min_hp (2 in, 1 out)
 pushFromFSpVal 128
 sub 
 eqz 
 jz L3764
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushFromFSpVal 132
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 pushFromFSp 0
 pushImm 24
 add 
 pushImm 1
 memcpy 0
 pushFromFSp 0
 pushImm 16
 add 
 pushImm 10000
 memcpy 0
 jmp L3812
