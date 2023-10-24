---
---
---
name: trap_status_peterpan_prize_drain_start
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
syscall 6, 19 ; trap_status_peterpan_prize_drain_start (0 in, 0 out)
---
---
---
description: Start Peter Pan prize drain
---
---
---
decompiled code:

/----- (0000000000626204) ----------------------------------------------------
void __fastcall Ts::trap_status_peterpan_prize_drain_start(BD_VALUE_25 *args)
{
  YS::STATUS::Flag |= 0x800u;
}
// 2AAD548: using guessed type int YS::STATUS::Flag;

//BASIC
---
---
---
appears in:
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\P_EX330\p_ex.bdscript
L764:
 popToSp 0
 pushFromFSp 0
 pushImm 0
 gosub 4, L785
 pushFromFSp 0
 pushImm 595042
 syscall 1, 318 ; trap_obj_play_se (2 in, 0 out)
 syscall 6, 19 ; trap_status_peterpan_prize_drain_start (0 in, 0 out)
 syscall 1, 286 ; trap_status_hide_shadow (0 in, 0 out)
 ret 
