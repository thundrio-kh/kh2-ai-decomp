---
---
---
name: trap_friend_disable_follow_player
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
syscall 10, 48 ; trap_friend_disable_follow_player (1 in, 0 out)
---
---
---
description: Stop the friend from following the player
---
---
---
decompiled code:
void __fastcall kn::Friend::disableFollowPlayer(kn::Friend_0 *const this)
/----- (00000000006140CC) ----------------------------------------------------
void __fastcall kn::trap_friend_disable_follow_player(BD_VALUE_22 *args)
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
  kn::Friend::disableFollowPlayer((kn::Friend_0 *const)*(unsigned int *)(v1 + 4));
}
// 6140EC: variable 'back_chain' is possibly undefined
->
/----- (00000000000E6180) ----------------------------------------------------
void __fastcall kn::Friend::disableFollowPlayer(kn::Friend_0 *const this)
{
  *(_DWORD *)&(*this)[2944] |= 0x20000u;
}


---
---
---
appears in:
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
---
---
---
example usage from obj\B_EX260\b_ex.bdscript
L5725:
 popToSp 0
 pushImm 0
 gosub 12, L618
 memcpyToSp 16, 40
 pushFromPSp 40
 memcpyToSp 16, 24
 pushFromPSp 24
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L5762
 pushFromPSp 4
 pushFromPSp 24
 fetchValue 4
 gosub 12, L640
 pushFromPSp 4
 syscall 10, 48 ; trap_friend_disable_follow_player (1 in, 0 out)
 jmp L5762
