---
---
---
name: trap_status_prize_drain_end
---
---
---
category: prize
---
---
---
documentation level: complete
---
---
---
syscall 1, 188 ; trap_status_prize_drain_end (0 in, 0 out)
---
---
---
description: End the prize drain effect
---
---
---
decompiled code:

/----- (0000000000509918) ----------------------------------------------------
void __fastcall YS::trap_status_prize_drain_end(BD_VALUE_21 *args)
{
  YS::STATUS::Flag &= 0xFFFFFFF7;
}
// 2AAD548: using guessed type int YS::STATUS::Flag;

//BASIC
---
---
---
appears in:
magic\MAGNET_1\magn.bdscript
magic\MAGNET_1lk\magn.bdscript
magic\MAGNET_2\magn.bdscript
magic\MAGNET_2lk\magn.bdscript
magic\MAGNET_3\magn.bdscript
magic\MAGNET_3lk\magn.bdscript
obj\B_EX370\b_ex.bdscript ((B) Zexion (Absent Silhouette))
---
---
---
example usage from magic\MAGNET_1\magn.bdscript
L44:
 halt 
 pushFromFSp 0
 gosub 24, L600
 jz L55
 syscall 1, 188 ; trap_status_prize_drain_end (0 in, 0 out)
 jmp L55
