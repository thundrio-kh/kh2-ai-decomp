---
---
---
name: trap_status_force_leave_end
---
---
---
category: status
---
---
---
documentation level: complete
---
---
---
syscall 1, 205 ; trap_status_force_leave_end (0 in, 0 out)
---
---
---
description: Set the force leave flag to false
---
---
---
decompiled code:

/----- (0000000000509944) ----------------------------------------------------
void __fastcall YS::trap_status_force_leave_end(BD_VALUE_21 *args)
{
  YS::STATUS::Flag &= 0xFFFFFF7F;
}
// 2AAD548: using guessed type int YS::STATUS::Flag;

//BASIC
---
---
---
appears in:
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\B_NM000\b_nm.bdscript ((B) Oogie Boogie)
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
obj\N_EX760_BTL_WILLY\n_ex.bdscript ((N) Pete (BTL_WILLY) (EX))
---
---
---
example usage from obj\B_MU120\b_mu.bdscript
L6971:
 popToSp 0
 pushFromFWp W4708
 pushImm 1
 sub 
 eqz 
 jz L7019
 syscall 1, 205 ; trap_status_force_leave_end (0 in, 0 out)
 pushImm 0
 popToWp W4708
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 230 ; trap_sheet_hp_rate (2 in, 1 out)
 pushImmf 0.7
 subf 
 supzf 
 jz L7012
 pushImm 97
 syscall 1, 203 ; trap_unit_enable (1 in, 0 out)
 jmp L7017
