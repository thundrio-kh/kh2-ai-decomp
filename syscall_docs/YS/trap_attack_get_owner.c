---
---
---
name: trap_attack_get_owner
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push attack ; (YS::ATTACK_MAGIC *)  (an attack object)
syscall 2, 24 ; trap_attack_get_owner (1 in, 1 out)
pop owner ; (YS::BTLOBJ *) (object of the attack owner) 
---
---
---
description: returns the owner of an attack
---
---
---
decompiled code:

/----- (00000000004F4FE0) ----------------------------------------------------
void __fastcall YS::trap_attack_get_owner(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0xCLL);
}

//BASIC
---
---
---
appears in:
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\M_EX050\m_ex.bdscript ((M) Large Body)
obj\M_EX050_WI\m_ex.bdscript ((M) Large Body (WI))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_HE010_BTL\n_he.bdscript ((N) Hercules (BTL) (HE))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
---
---
---
example usage from obj\B_EX160\b_ex.bdscript
L5643:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 4
 syscall 2, 24 ; trap_attack_get_owner (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 gosub 16, L3666
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 130 ; trap_obj_cmp (2 in, 1 out)
 eqz 
 jz L5724
 pushFromFSp 4
 syscall 2, 24 ; trap_attack_get_owner (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 98 ; trap_obj_step_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 98 ; trap_obj_step_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L10734 ; ___ai 'reflect_counter' (L10734)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L5724
