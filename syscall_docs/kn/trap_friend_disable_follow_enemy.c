---
---
---
name: trap_friend_disable_follow_enemy
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
syscall 10, 46 ; trap_friend_disable_follow_enemy (1 in, 0 out)
---
---
---
description: Stop the friend from following an enemy
---
---
---
decompiled code:
void __fastcall kn::Friend::disableFollowEnemy(kn::Friend_0 *const this)
/----- (0000000000613EB4) ----------------------------------------------------
void __fastcall kn::trap_friend_disable_follow_enemy(BD_VALUE_22 *args)
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
  kn::Friend::disableFollowEnemy((kn::Friend_0 *const)*(unsigned int *)(v1 + 4));
}
// 613ED4: variable 'back_chain' is possibly undefined
->
/----- (00000000000E24E4) ----------------------------------------------------
void __fastcall kn::Friend::disableFollowEnemy(kn::Friend_0 *const this)
{
  *(_DWORD *)&(*this)[2944] |= 0x1000u;
}


---
---
---
appears in:

---
---
---
example usage from NA

