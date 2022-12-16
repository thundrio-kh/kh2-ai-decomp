---
---
---
name: trap_status_secure_mode_end
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
syscall 1, 264 ; trap_status_secure_mode_end (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000005098C8) ----------------------------------------------------
void __fastcall YS::trap_status_secure_mode_end(BD_VALUE_21 *args)
{
  YS::STATUS::Flag &= 0xFFFFFFFD;
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
L221:
 halt 
 syscall 1, 264 ; trap_status_secure_mode_end (0 in, 0 out)
 pushFromFWp W8
 pushImm 5
 sub 
 eqz 
 jz L254
