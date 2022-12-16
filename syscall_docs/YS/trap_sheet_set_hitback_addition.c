---
---
---
name: trap_sheet_set_hitback_addition
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
push unk1 ; (unknown)  (syscall: 1, 84 ; trap_obj_sheet (1 in, 1 out))
push unk2 ; (unknown)  (pushImmf: 0,200)
syscall 1, 348 ; trap_sheet_set_hitback_addition (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:

/----- (000000000050AA44) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_hitback_addition(BD_VALUE_21 *args)
{
  *(float *)(*(unsigned int *)args + 0x1C8LL) = *(float *)&(*args)[4];
}

//BASIC
---
---
---
appears in:
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
---
---
---
example usage from obj\B_EX220\b_ex.bdscript
L409:
 popToSp 4
 popToSp 0
 pushFromPSp 12
 pushImmf 300
 gosub 8, L545
 pushFromPSp 8
 pushImmf 180
 gosub 8, L545
 gosub 8, L621
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImmf 200
 syscall 1, 348 ; trap_sheet_set_hitback_addition (2 in, 0 out)
