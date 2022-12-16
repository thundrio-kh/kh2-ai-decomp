---
---
---
name: trap_status_show_shadow
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
syscall 1, 287 ; trap_status_show_shadow (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000509A18) ----------------------------------------------------
void __fastcall YS::trap_status_show_shadow(BD_VALUE_21 *args)
{
  YS::STATUS::Flag &= 0xFFFFEFFF;
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
L2991:
 popToSp 0
 syscall 6, 20 ; trap_status_peterpan_prize_drain_end (0 in, 0 out)
 syscall 1, 287 ; trap_status_show_shadow (0 in, 0 out)
 ret 
