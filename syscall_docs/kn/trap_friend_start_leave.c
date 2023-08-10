---
---
---
name: trap_friend_start_leave
---
---
---
category: friend
---
---
---
documentation level: untested
---
---
---
push friend ; (kn::Friend_0 *)  (A friend object)
syscall 10, 41 ; trap_friend_start_leave (1 in, 0 out)
---
---
---
description: Have the friend start the leave action
---
---
---
decompiled code:
void __fastcall kn::Friend::startLeave(kn::Friend_0 *const this)
/----- (00000000006139D0) ----------------------------------------------------
void __fastcall kn::trap_friend_start_leave(BD_VALUE_22 *args)
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
  kn::Friend::startLeave((kn::Friend_0 *const)*(unsigned int *)(v1 + 4));
}
// 6139F0: variable 'back_chain' is possibly undefined
->
/----- (00000000000E54D4) ----------------------------------------------------
void __fastcall kn::Friend::startLeave(kn::Friend_0 *const this)
{
  *(_DWORD *)&(*this)[2944] |= 0x40000000u;
}


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
L3514:
 popToSp 0
 pushFromFSp 0
 syscall 10, 41 ; trap_friend_start_leave (1 in, 0 out)
 pushImm 0
 popToSpVal 16
 ret 
