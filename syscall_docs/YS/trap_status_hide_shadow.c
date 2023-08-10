---
---
---
name: trap_status_hide_shadow
---
---
---
category: visual
---
---
---
documentation level: complete
---
---
---
syscall 1, 286 ; trap_status_hide_shadow (0 in, 0 out)
---
---
---
description: Turns off all shadows displayed by objects
---
---
---
decompiled code:

/----- (0000000000509A04) ----------------------------------------------------
void __fastcall YS::trap_status_hide_shadow(BD_VALUE_21 *args)
{
  YS::STATUS::Flag |= 0x1000u;
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
