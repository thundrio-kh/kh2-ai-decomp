---
---
---
name: trap_friend_action_clear
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
syscall 10, 39 ; trap_friend_action_clear (1 in, 0 out)
---
---
---
description: Clear the friends action queue
---
---
---
decompiled code:
void __fastcall kn::Friend::setLastAction(kn::Friend_0 *const this, kn::FriendAction *lastAction, unsigned int *lastActionParam)
/----- (00000000006136C4) ----------------------------------------------------
void __fastcall kn::trap_friend_action_clear(BD_VALUE_22 *args)
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
  kn::Friend::setLastAction((kn::Friend_0 *const)*(unsigned int *)(v1 + 4), 0LL, 0LL);
}
// 6136E4: variable 'back_chain' is possibly undefined
->
/----- (00000000000DD920) ----------------------------------------------------
void __fastcall kn::Friend::setLastAction(kn::Friend_0 *const this, kn::FriendAction *lastAction, unsigned int *lastActionParam)
{
  *(_DWORD *)&(*this)[3184] = (_DWORD)lastAction;
  *(_DWORD *)&(*this)[3188] = (_DWORD)lastActionParam;
}


---
---
---
appears in:
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
---
---
---
example usage from obj\N_HB040_BTL\n_hb.bdscript
L947:
 pushFromPSpVal 80
 pushImm 598051
 syscall 1, 318 ; trap_obj_play_se (2 in, 0 out)
 pushFromPSpVal 80
 syscall 10, 39 ; trap_friend_action_clear (1 in, 0 out)
 pushImmf 60
 syscall 0, 31 ; func_screen_whiteout (1 in, 0 out)
 pushImmf 60
 gosub 4, L987
 pushImmf 60
 gosub 4, L987
 pushFromFSp 0
 gosub 4, L1009
 pushImmf 0
 syscall 0, 32 ; func_screen_whitein (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L1044
 ret 
