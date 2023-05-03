---
---
---
name: trap_camera_begin_scope
---
---
---
category: camera
---
---
---
documentation level: complete
---
---
---
push obj ; (YS::OBJ_8 *)  (Object to center the camera on)
push heightOffset ; (int) (height offset for the camera, value of 200 is used by Xigbar)
syscall 1, 281 ; trap_camera_begin_scope (2 in, 0 out)
---
---
---
description: Switch the camera mode to the inverse scope used in the Xigbar fight.
---
---
---
decompiled code:
void __fastcall dk::ScopeCamera::create(YS::OBJ_8 *obj, double heightOffset)
/----- (0000000000509FFC) ----------------------------------------------------
void __fastcall YS::trap_camera_begin_scope(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
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
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  dk::ScopeCamera::create((YS::OBJ_8 *)*(unsigned int *)(v2 + 4), *(float *)&(*args)[4]);
}
// 50A020: variable 'back_chain' is possibly undefined
->
/----- (00000000000779C4) ----------------------------------------------------
void __fastcall dk::ScopeCamera::create(YS::OBJ_8 *obj, double heightOffset)
{
  int v3; // r31

  v3 = (int)obj;
  dk::ObjCamera::cancelSubjective(30.0);
  *(_DWORD *)&(*dk::ObjCamera::getInstance())[64] = 7;
  dk::ScopeCamera::s_obj = v3;
  dk::ScopeCamera::s_heightOffset = heightOffset;
  dk::ScopeCamera::s_zoom = 0.5;
  dk::ScopeCamera::s_closeupDistance = 10.0;
  dk::ScopeCamera::s_targetPos = 0.0;
  flt_A0A438 = 0.0;
  flt_A0A434 = 0.0;
  flt_A0A43C = 1.0;
  printf(
    (unsigned int)"ScopeCamera::create\n",
    (__int64)&dk::GS_DEF_ALPHA,
    1056964608LL,
    (__int64)&dk::GS_DEF_ALPHA,
    (__int64)&dk::GS_DEF_ALPHA,
    0LL,
    1092616192LL,
    1065353216LL);
}
// A0A420: using guessed type int dk::ScopeCamera::s_obj;
// A0A424: using guessed type float dk::ScopeCamera::s_heightOffset;
// A0A428: using guessed type float dk::ScopeCamera::s_zoom;
// A0A42C: using guessed type float dk::ScopeCamera::s_closeupDistance;
// A0A430: using guessed type float dk::ScopeCamera::s_targetPos;
// A0A434: using guessed type float flt_A0A434;
// A0A438: using guessed type float flt_A0A438;
// A0A43C: using guessed type float flt_A0A43C;
// A10000: using guessed type __int64 dk::GS_DEF_ALPHA;


---
---
---
appears in:
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
---
---
---
example usage from obj\B_EX140\b_ex.bdscript
L20862:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 memcpyToSpVal 16, 0
 pushFromPSpVal 92
 pushImmf 0
 pushImmf 32
 pushImmf 0
 gosub 4, L21032
 pushFromPSpVal 104
 pushImmf 4
 pushImmf 182
 pushImmf 0
 gosub 4, L21032
 pushImmf 0
 popToSpVal 80
 pushImmf 0
 popToSpVal 84
 pushImmf 0
 popToSpVal 116
 pushImmf 0
 popToSpVal 120
 pushFromPSpVal 128
 gosub 4, L9603
 pushFromPSpVal 128
 pushImmf 0.174533
 gosub 4, L9669
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 8
 pushFromPSp 8
 gosub 8, L6504
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSpVal 16, 32
 pushFromPSpVal 32
 memcpyToSpVal 16, 64
 syscall 1, 306 ; trap_camera_at (0 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 305 ; trap_camera_eye (0 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSpVal 16, 48
 pushFromPSpVal 0
 pushImmf 200
 syscall 1, 281 ; trap_camera_begin_scope (2 in, 0 out)
 pushImmf 150
 syscall 1, 313 ; trap_camera_set_scope_closeup_distance (1 in, 0 out)
 pushFromPSpVal 0
 pushImm 0
 syscall 1, 285 ; trap_obj_show_picture (2 in, 1 out)
 popToSpVal 88
 syscall 2, 67 ; trap_attack_new_combo_group (0 in, 1 out)
 popToSpVal 208
 pushImm 0
 popToSpVal 16
 pushFromPSpVal 0
 pushImm 1
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushImm 0
 popToSpVal 212
 pushImm 0
 popToSpVal 216
 pushImm 0
 popToSpVal 220
 pushImm 0
 popToSpVal 224
 ret 
