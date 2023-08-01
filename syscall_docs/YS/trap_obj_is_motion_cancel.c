---
---
---
name: trap_obj_is_motion_cancel
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
push obj ; (YS::OBJ_125 *)  (An object)
syscall 1, 192 ; trap_obj_is_motion_cancel (1 in, 1 out)
pop is_motion_cancel ; (bool) 
---
---
---
description: Returns if the object is cancelling a motion
---
---
---
decompiled code:

/----- (00000000004FF12C) ----------------------------------------------------
void __fastcall YS::trap_obj_is_motion_cancel(BD_VALUE_21 *args)
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
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)(v2 + 4) + 0x160LL) & 0x10) != 0;
}
// 4FF150: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\F_TT060\f_tt.bdscript ((F) ??? - minigame reaction command? (TT))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\B_EX170_LAST\b_ex.bdscript
L1937:
 popToSp 0
 pushImm 0
 popToSp 4
 pushFromPSpVal 144
 gosub 4, L2005
 jz L2002
 pushFromPSpVal 144
 syscall 1, 192 ; trap_obj_is_motion_cancel (1 in, 1 out)
 jz L1963
 pushImm 1
 popToSp 4
 jmp L2000
