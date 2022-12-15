---
---
---
name: trap_friend_enable_follow_enemy
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown) 
syscall 10, 47 ; trap_friend_enable_follow_enemy (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Friend::enableFollowEnemy(kn::Friend_0 *const this)
/----- (0000000000613FC0) ----------------------------------------------------
void __fastcall kn::trap_friend_enable_follow_enemy(BD_VALUE_22 *args)
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
  kn::Friend::enableFollowEnemy((kn::Friend_0 *const)*(unsigned int *)(v1 + 4));
}
// 613FE0: variable 'back_chain' is possibly undefined
->
/----- (00000000000E616C) ----------------------------------------------------
void __fastcall kn::Friend::enableFollowEnemy(kn::Friend_0 *const this)
{
  *(_DWORD *)&(*this)[2944] &= 0xFFFFEFFF;
}


---
---
---
appears in:

---
---
---
example usage from NA

