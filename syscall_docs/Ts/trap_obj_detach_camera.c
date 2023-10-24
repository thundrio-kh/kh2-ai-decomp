---
---
---
name: trap_obj_detach_camera
---
---
---
category: camera
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
syscall 6, 36 ; trap_obj_detach_camera (1 in, 0 out)
---
---
---
description: Detatch the camera from an object
---
---
---
decompiled code:
void __fastcall YS::OBJ::detach_camera(YS::OBJ_130 *const this)
/----- (0000000000626A00) ----------------------------------------------------
void __fastcall Ts::trap_obj_detach_camera(BD_VALUE_25 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::OBJ::detach_camera((YS::OBJ_130 *const)*(unsigned int *)(v1 + 4));
}
// 626A20: variable 'back_chain' is possibly undefined
->
/----- (0000000000469CEC) ----------------------------------------------------
void __fastcall YS::OBJ::detach_camera(YS::OBJ_130 *const this)
{
  unsigned int *v1; // r4
  int v2; // r7

  v1 = (unsigned int *)(unsigned int)((_DWORD)this + 268);
  v2 = *v1;
  *(_DWORD *)&(*this)[1936] = 0;
  *v1 = v2 & 0xFFFFFFBF;
  *(_DWORD *)(unsigned int)((_DWORD)this + 1896) &= 0xFFFFEFFF;
}


---
---
---
appears in:
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
---
---
---
example usage from obj\N_HB040_BTL\n_hb.bdscript
L169:
 popToSp 0
 gosub 20, L397
 pushFromPSpVal 20
 syscall 1, 127 ; trap_obj_act_clear (1 in, 0 out)
 pushFromPSpVal 20
 syscall 6, 36 ; trap_obj_detach_camera (1 in, 0 out)
 pushFromPSpVal 4
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 syscall 1, 305 ; trap_camera_eye (0 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromPSpVal 4
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 32
 pushFromPSpVal 4
 pushImmf 700
 pushImm 0
 syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
 pushFromPSpVal 4
 pushFromPSp 32
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromPSp 48
 pushImmf 0
 pushImmf 0
 pushImmf 0
 pushImmf 0
 gosub 20, L403
 pushFromPSp 32
 pushImmf 0
 pushImmf 0
 pushImmf 0
 pushImmf 0
 gosub 20, L403
 pushFromPSpVal 20
 pushFromPSp 48
 syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
 pushFromPSpVal 20
 pushFromPSp 32
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromPSpVal 20
 pushFromPSpVal 4
 pushImm 16386
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromPSpVal 20
 fetchValue 4
 pushImm 241
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSpVal 20
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 20
 pushFromPSpVal 4
 pushImm 253
 pushImmf 0
 syscall 1, 29 ; trap_obj_motion_capture (4 in, 1 out)
 drop 
 pushFromPSpVal 20
 pushFromPAi L3844 ; ___ai '10' (L3844)
 pushFromPSpVal 4
 syscall 1, 157 ; trap_obj_camera_start (3 in, 0 out)
