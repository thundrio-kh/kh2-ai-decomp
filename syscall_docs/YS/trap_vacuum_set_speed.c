---
---
---
name: trap_vacuum_set_speed
---
---
---
category: vacuum
---
---
---
documentation level: incomplete
---
---
---
push vacuum ; (YS::VACUUM::VACUUM) (A vacuum object)
push unk2 ; (float)  (Unknown)
push unk3 ; (float)  (Unknown)
push unk4 ; (float)  (Unknown)
syscall 2, 81 ; trap_vacuum_set_speed (4 in, 0 out)
---
---
---
description: Set the speed of a vacuum
---
---
---
decompiled code:

/----- (00000000004F5884) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_speed(BD_VALUE_19 *args)
{
  float *v1; // r4
  double v2; // fp2
  double v3; // fp3

  v1 = (float *)(*args)[0];
  v2 = *(float *)&(*args)[8];
  v3 = *(float *)&(*args)[12];
  v1[6] = *(float *)&(*args)[4];
  v1[7] = v2;
  v1[8] = v3;
}

//BASIC
---
---
---
appears in:
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\F_WI310\f_wi.bdscript ((F) ??? (WI))
---
---
---
example usage from obj\B_EX180\b_ex.bdscript
L5602:
 pushFromFWp W4264
 pushFromFSp 72
 pushFromFSp 72
 pushFromFSp 72
 syscall 2, 81 ; trap_vacuum_set_speed (4 in, 0 out)
 gosub 24, L3255
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 6, 63 ; trap_obj_is_damage_motion (1 in, 1 out)
 jz L5627
 syscall 1, 295 ; trap_camera_reset (0 in, 0 out)
 jmp L5627
