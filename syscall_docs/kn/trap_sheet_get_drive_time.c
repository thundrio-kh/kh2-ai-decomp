---
---
---
name: trap_sheet_get_drive_time
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
syscall 10, 45 ; trap_sheet_get_drive_time (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000613EA4) ----------------------------------------------------
void __fastcall kn::trap_sheet_get_drive_time(BD_VALUE_22 *args)
{
  *(float *)&(*args)[0] = *(float *)(*(unsigned int *)args + 0x1B4LL);
}

//BASIC
---
---
---
appears in:
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\N_HB040_BTL\n_hb.bdscript
L1306:
 gosub 8, L1348
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 syscall 10, 45 ; trap_sheet_get_drive_time (1 in, 1 out)
 pushImmf 0
 subf 
 infoezf 
 jz L1328
 jmp L1345
