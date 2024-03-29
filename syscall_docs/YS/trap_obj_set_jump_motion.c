---
---
---
name: trap_obj_set_jump_motion
---
---
---
category: mset
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push id ; (int)  (ID of a specific motion set entry)
syscall 1, 115 ; trap_obj_set_jump_motion (2 in, 0 out)
---
---
---
description: Sets an object to go into a falling animation
---
---
---
decompiled code:

/----- (00000000004FE0C8) ----------------------------------------------------
void __fastcall YS::trap_obj_set_jump_motion(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  int v4; // r3
  __int64 v5; // r4
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
  v4 = *(_DWORD *)&(*args)[4];
  v5 = *(unsigned int *)(v2 + 4);
  *(_DWORD *)(v5 + 0x100) = v4 + 1;
  *(_DWORD *)(v5 + 260) = v4 + 2;
}
// 4FE0EC: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
limit\auron\limi.bdscript
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\F_TT000\f_tt.bdscript ((F) Tram (TT))
obj\M_EX710\m_ex.bdscript ((M) Morning Star)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\auron\limi.bdscript
L2149:
 popToSp 0
 pushFromPSpVal 4
 syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
 pushFromPWp W108
 fetchValue 0
 pushFromPSpVal 4
 pushImm 257
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 4
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 20
 syscall 1, 214 ; trap_obj_hook_stop (1 in, 0 out)
 pushFromPWp W108
 fetchValue 0
 pushFromPSpVal 20
 pushImm 257
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPSpVal 20
 pushImm 3
 syscall 1, 115 ; trap_obj_set_jump_motion (2 in, 0 out)
 pushFromPSpVal 20
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 20
 pushFromPSpVal 4
 pushImm 16386
 pushImm 1
 pushImm 0
 pushImm 0
 syscall 1, 18 ; trap_obj_attach (6 in, 0 out)
 pushFromFSp 0
 fetchValue 0
 pushFromPAi L3411 ; ___ai 10 (L3411)
 pushImmf 500
 pushImm 0
 syscall 2, 50 ; trap_limit_camera_start (4 in, 0 out)
 pushFromPWp W108
 pushImm 44
 add 
 pushImm 0
 memcpy 0
 pushFromPSpVal 4
 gosub 4, L2267
 ret 
