---
---
---
name: trap_btlobj_is_reflect_motion
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
syscall 10, 52 ; trap_btlobj_is_reflect_motion (1 in, 1 out)
pop is_reflect_motion ; (bool) 
---
---
---
description: Returns if an object is performing a reflect animation
---
---
---
decompiled code:
__int64 __fastcall YS::BTLOBJ::is_reflect_motion(YS::BTLOBJ *const this)
/----- (0000000000614420) ----------------------------------------------------
void __fastcall kn::trap_btlobj_is_reflect_motion(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  *(_DWORD *)args = YS::BTLOBJ::is_reflect_motion((YS::BTLOBJ *const)v4);
}
// 614444: variable 'back_chain' is possibly undefined
->
/----- (0000000000412608) ----------------------------------------------------
__int64 __fastcall YS::BTLOBJ::is_reflect_motion(YS::BTLOBJ *const this)
{
  __int64 v1; // r4

  v1 = 0LL;
  if ( *(_DWORD *)&this->baseclass_0[320]
    && *(_DWORD *)&this->baseclass_0[340] >= 140
    && *(_DWORD *)&this->baseclass_0[340] <= 150 )
  {
    v1 = 1LL;
  }
  return v1;
}


---
---
---
appears in:
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
---
---
---
example usage from obj\B_EX390\b_ex.bdscript
L1635:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L1752
 pushFromFSp 0
 syscall 10, 52 ; trap_btlobj_is_reflect_motion (1 in, 1 out)
 dup 
 jz L1658
 pushFromFSp 0
 pushImm 1
 syscall 1, 150 ; trap_obj_motion_check_range (2 in, 1 out)
 eqzv 
