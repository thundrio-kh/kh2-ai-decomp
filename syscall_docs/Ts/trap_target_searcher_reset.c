---
---
---
name: trap_target_searcher_reset
---
---
---
category: target
---
---
---
documentation level: untested
---
---
---
push searcher ; (Ts::TARGET_SEARCHER_0)  (A target searcher object)
syscall 6, 4 ; trap_target_searcher_reset (1 in, 0 out)
---
---
---
description: Reset a target searcher counter to 0
---
---
---
decompiled code:
void __fastcall Ts::TARGET_SEARCHER::reset(Ts::TARGET_SEARCHER_0 *const this)
/----- (0000000000624F10) ----------------------------------------------------
void __fastcall Ts::trap_target_searcher_reset(BD_VALUE_25 *args)
{
  Ts::TARGET_SEARCHER::reset((Ts::TARGET_SEARCHER_0 *const)(*args)[0]);
}
->
/----- (0000000000622A54) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::reset(Ts::TARGET_SEARCHER_0 *const this)
{
  this->Counter = 0;
  this->_anon_0._anon_0.Index = 0;
}


---
---
---
appears in:
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\mulan\limi.bdscript
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\M_EX780\m_ex.bdscript ((M) Aerial Knocker)
obj\M_EX780_HB\m_ex.bdscript ((M) Aeriel Champ)
obj\P_AL000\p_al.bdscript ((P) Aladdin)
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_BB000\p_bb.bdscript ((P) Beast)
obj\P_CA000\p_ca.bdscript ((P) Jack Sparrow)
obj\P_CA000_HUMAN\p_ca.bdscript ((P) Jack Sparrow (human))
obj\P_CA000_HUMAN_LOW\p_ca.bdscript ((P) Jack Sparrow (human) (LOW))
obj\P_CA000_LOW\p_ca.bdscript ((P) Jack Sparrow (LOW))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_HE000\p_he.bdscript ((P) Auron)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_MU000\p_mu.bdscript ((P) Mulan)
obj\P_TR000\p_tr.bdscript ((P) Tron)
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from limit\goofy2\limi.bdscript
L4858:
 popToSp 0
 pushFromPWp W0
 pushFromFSp 0
 gosub 4, L605
 popToSp 4
 pushFromPWp W0
 pushImm 80
 add 
 pushFromFSp 4
 pushFromPWp W0
 pushImm 4
 add 
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPWp W0
 pushImm 4
 add 
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 0
 pushImm 1
 pushImm 1
 syscall 6, 5 ; trap_target_seracher_search (7 in, 0 out)
 pushFromFSp 4
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 eqz 
 jz L4975
 pushFromPWp W0
 pushImm 80
 add 
 syscall 6, 4 ; trap_target_searcher_reset (1 in, 0 out)
 pushFromPWp W0
 pushImm 80
 add 
 pushFromFSp 4
 pushFromPWp W0
 pushImm 4
 add 
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromPWp W0
 pushImm 4
 add 
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 0
 pushImm 1
 pushImm 1
 syscall 6, 5 ; trap_target_seracher_search (7 in, 0 out)
 jmp L4975
