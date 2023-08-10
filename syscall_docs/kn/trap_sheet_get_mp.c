---
---
---
name: trap_sheet_get_mp
---
---
---
category: sheet
---
---
---
documentation level: untested
---
---
---
push sheet ; (YS::SHEET_44 *) (An object stat sheet)
syscall 10, 50 ; trap_sheet_get_mp (1 in, 1 out)
pop mp ; (int) 
---
---
---
description: Get the amount of MP left
---
---
---
decompiled code:

/----- (00000000006142E4) ----------------------------------------------------
void __fastcall kn::trap_sheet_get_mp(BD_VALUE_22 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x180LL);
}

//BASIC
---
---
---
appears in:
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
---
---
---
example usage from obj\P_EH000\p_eh.bdscript
L327:
 popToSp 0
 pushFromPWp W0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 syscall 10, 50 ; trap_sheet_get_mp (1 in, 1 out)
 popToSp 4
 pushFromPWp W0
 pushImm 1
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromPWp W0
 pushImm 2
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 pushFromFSp 0
 gosub 4, L465
 jz L438
 pushFromFSp 4
 pushFromPWp W0
 fetchValue 32
 sub 
 msbi 
 dup 
 jz L378
 pushFromPWp W0
 fetchValue 20
 pushImmf 0
 subf 
 supzf 
 eqzv 
