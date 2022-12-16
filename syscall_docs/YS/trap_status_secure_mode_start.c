---
---
---
name: trap_status_secure_mode_start
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
syscall 1, 154 ; trap_status_secure_mode_start (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000005098B4) ----------------------------------------------------
void __fastcall YS::trap_status_secure_mode_start(BD_VALUE_21 *args)
{
  YS::STATUS::Flag |= 2u;
}
// 2AAD548: using guessed type int YS::STATUS::Flag;

//BASIC
---
---
---
appears in:
msn\AL13_TRAP\al13.bdscript
msn\AL13_TRAP_FREE\al13.bdscript
msn\AL13_TRAP_FREE2\al13.bdscript
obj\F_EH110\f_eh.bdscript ((F) Rising building (EH))
---
---
---
example usage from msn\AL13_TRAP\al13.bdscript
L182:
 syscall 1, 154 ; trap_status_secure_mode_start (0 in, 0 out)
 pushFromFWp W8
 pushImm 11
 add 
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 pushImmf 100
 gosub 4, L255
 pushFromFWp W8
 pushImm 1
 add 
 syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
 pushFromFWp W8
 pushImm 1
 sub 
 eqz 
 jz L221
 pushImm 14144
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 jmp L221
