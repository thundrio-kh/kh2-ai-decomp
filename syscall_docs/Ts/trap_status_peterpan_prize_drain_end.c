---
---
---
name: trap_status_peterpan_prize_drain_end
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
syscall 6, 20 ; trap_status_peterpan_prize_drain_end (0 in, 0 out)
---
---
---
description: End Peter Pan prize drain
---
---
---
decompiled code:

/----- (0000000000626218) ----------------------------------------------------
void __fastcall Ts::trap_status_peterpan_prize_drain_end(BD_VALUE_25 *args)
{
  YS::STATUS::Flag &= 0xFFFFF7FF;
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
