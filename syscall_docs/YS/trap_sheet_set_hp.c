---
---
---
name: trap_sheet_set_hp
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
push unk1 ; (unknown)  (pushImm: 0,1,2,3) (pushFromFSp: 4,8) (syscall: 1, 84 ; trap_obj_sheet (1 in, 1 out)) (gosub: 4, L457)
push unk2 ; (unknown)  (syscall: 1, 229 ; trap_sheet_max_hp (2 in, 1 out)) (sub: ) (pushFromFSpVal: 204) (citf: ) (fetchValue: 60)
push unk3 ; (unknown)  (pushImm: 0,1,2,3)
syscall 1, 233 ; trap_sheet_set_hp (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (000000000050A7DC) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_hp(BD_VALUE_21 *args)
{
  int v2; // r4
  int v3; // r3
  int v4; // r4
  int v5; // r31
  unsigned __int64 v6; // r4
  int v7; // r5
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = *(_DWORD *)&(*args)[8];
  if ( v2 < 0 || v2 >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[2].i >= 0 && args[2].i < SHEET::PARTS_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      1137LL,
      "trap_sheet_set_hp",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 1137);
    v2 = *(_DWORD *)&(*args)[8];
  }
  v3 = 3 * v2;
  v4 = *(_DWORD *)args;
  v5 = *(_DWORD *)&(*args)[4];
  v6 = (unsigned int)(v4 + 4 * v3);
  v7 = *(_DWORD *)(v6 + 8);
  if ( v5 >= v7 )
  {
    if ( v5 > *(_DWORD *)(v6 + 4) )
      v5 = *(_DWORD *)(v6 + 4);
    v7 = v5;
  }
  *(_DWORD *)v6 = v7;
}
// 50A7F8: variable 'back_chain' is possibly undefined

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
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
obj\B_EX380\b_ex.bdscript ((F) Zexion’s book)
obj\F_HB080\f_hb.bdscript ((F) CoR’s steam wheel (HB))
obj\M_EX350_10\m_ex.bdscript ((M) Mushroom 10 (EX))
obj\N_NM050_BTL\n_nm.bdscript ((N) Lock (BTL) (NM))
obj\N_NM060_BTL\n_nm.bdscript ((N) Shock (BTL) (NM))
obj\N_NM070_BTL\n_nm.bdscript ((N) Barrel (BTL) (NM))
---
---
---
example usage from obj\B_AL020\b_al.bdscript
L148:
 popToSp 0
 pushFromPSpVal 116
 fetchValue 0
 pushImm 0
 sub 
 eqz 
 jz L217
 pushFromPSp 16
 pushImm 1603
 gosub 12, L218
 pushFromPSp 16
 pushImm 1
 pushImm 1
 syscall 1, 218 ; trap_obj_set_unit_arg (3 in, 0 out)
 pushFromPSpVal 116
 pushFromFSp 0
 pushImm 11
 pushImm 0
 gosub 12, L240
 pushFromFSp 0
 pushImm 2
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 2
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 pushImm 2
 syscall 1, 233 ; trap_sheet_set_hp (3 in, 0 out)
 jmp L217
