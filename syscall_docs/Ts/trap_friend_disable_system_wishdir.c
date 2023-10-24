---
---
---
name: trap_friend_disable_system_wishdir
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
syscall 7, 25 ; trap_friend_disable_system_wishdir (1 in, 0 out)
---
---
---
description: Disables a friend's system wishdir used for summons
---
---
---
decompiled code:
void __fastcall kn::Friend::disableSystemWishDir(kn::Friend_0 *const this)
/----- (0000000000624184) ----------------------------------------------------
void __fastcall Ts::trap_friend_disable_system_wishdir(BD_VALUE_24 *args)
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
  kn::Friend::disableSystemWishDir((kn::Friend_0 *const)*(unsigned int *)(v1 + 4));
}
// 6241A4: variable 'back_chain' is possibly undefined
->
/----- (00000000000E502C) ----------------------------------------------------
void __fastcall kn::Friend::disableSystemWishDir(kn::Friend_0 *const this)
{
  *(_DWORD *)&(*this)[2944] |= 0x400u;
}


---
---
---
appears in:
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\P_EH000\p_eh.bdscript
L2787:
 popToSp 0
 pushFromPSpVal 0
 fetchValue 4
 pushImm 193
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushImmf 200
 pushImmf 0.1
 pushImm 1
 pushImm 10
 pushImm 9
 gosub 16, L3044
 pushFromPSpVal 0
 syscall 7, 25 ; trap_friend_disable_system_wishdir (1 in, 0 out)
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L2838
 pushFromPSpVal 0
 gosub 16, L3711
 jmp L2856
