---
---
---
name: trap_obj_clear_hitback
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
syscall 6, 66 ; trap_obj_clear_hitback (1 in, 0 out)
---
---
---
description: Clear the hitback flag for an object
---
---
---
decompiled code:

/----- (00000000006280D0) ----------------------------------------------------
void __fastcall Ts::trap_obj_clear_hitback(BD_VALUE_25 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  _DWORD *v3; // r31
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
  v3 = (_DWORD *)*(unsigned int *)(v1 + 4);
  if ( (v3[354] & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  v3[695] = 0;
  v3[694] = 0;
  v3[693] = 0;
  v3[692] = 0;
}
// 6280F0: variable 'back_chain' is possibly undefined

//COMPLICATED
---
---
---
appears in:
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
---
---
---
example usage from obj\B_MU100\b_mu.bdscript
L201:
 popToSp 0
 popToSp 4
 pushFromPWp W4
 pushFromFSp 0
 gosub 12, L284
 pushFromFSp 4
 pushImmf 500
 pushImm 0
 syscall 1, 220 ; trap_obj_move_to_space (3 in, 0 out)
 pushFromPSp 16
 pushImmf 0
 pushImmf 0
 pushImmf 1000
 pushImmf 1
 gosub 12, L320
 pushFromFSp 4
 pushFromFSp 4
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 4
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 4
 syscall 6, 66 ; trap_obj_clear_hitback (1 in, 0 out)
 pushFromFSp 4
 pushImm L347
 pushImm 0
 syscall 1, 112 ; trap_obj_hook (3 in, 0 out)
 pushFromFSp 0
 pushFromPAi L8549 ; ___ai 'rush_guard_start' (L8549)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 ret 
