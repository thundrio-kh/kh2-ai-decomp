---
---
---
name: trap_status_close_pete_curtain
---
---
---
category: special
---
---
---
documentation level: complete
---
---
---
syscall 1, 350 ; trap_status_close_pete_curtain (0 in, 0 out)
---
---
---
description: Show the screen effect of the Pete curtain closing
---
---
---
decompiled code:

/----- (0000000000509A70) ----------------------------------------------------
void __fastcall YS::trap_status_close_pete_curtain(BD_VALUE_21 *args)
{
  YS::STATUS::Flag |= 0x100000u;
}
// 2AAD548: using guessed type int YS::STATUS::Flag;

//BASIC
---
---
---
appears in:
obj\N_EX760_BTL\n_ex.bdscript ((B) Pete (BTL))
---
---
---
example usage from obj\N_EX760_BTL\n_ex.bdscript
L6309:
 pushFromFSp 4
 jz L6708
 pushFromFSp 0
 gosub 4, L2642
 syscall 1, 350 ; trap_status_close_pete_curtain (0 in, 0 out)
 gosub 4, L2351
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 gosub 4, L2351
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 gosub 4, L2351
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L12998 ; ___ai wait (L12998)
 pushImmf 0
 syscall 1, 90 ; trap_obj_act_shout (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L12885 ; ___ai 20 (L12885)
 pushFromFSp 0
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 235
 pushFromFSp 0
 fetchValue 36
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
