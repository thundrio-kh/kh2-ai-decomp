---
---
---
name: trap_obj_is_tornado
---
---
---
category: vacuum
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
syscall 10, 44 ; trap_obj_is_tornado (1 in, 1 out)
pop is_tornado ; (bool) 
---
---
---
description: Returns if the object is a tornado object
---
---
---
decompiled code:

/----- (0000000000613D74) ----------------------------------------------------
void __fastcall kn::trap_obj_is_tornado(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
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
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)(*(unsigned int *)(v2 + 4) + 0xCLL) + 8LL) & 0x10) != 0;
}
// 613D98: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\P_EX350\p_ex.bdscript
L7335:
 jz L7542
 pushFromFSpVal 48
 gosub 16, L7603
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 10, 44 ; trap_obj_is_tornado (1 in, 1 out)
 eqz 
 jz L7384
 pushFromFSpVal 68
 pushFromFSpVal 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 68
 pushFromFSpVal 48
 gosub 16, L7603
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 0
 pushFromFSp 36
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 jmp L7526
