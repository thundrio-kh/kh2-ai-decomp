---
---
---
name: trap_friend_follow_enemy
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
push unk1 ; (unknown)  (pushFromPSpVal: 0)
syscall 10, 21 ; trap_friend_follow_enemy (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall kn::Friend::followEnemy(kn::Friend_0 *const this)
kn::FVector *__fastcall kn::Friend::getMovement(kn::Friend_0 *const this)
kn::FVector *__fastcall kn::Friend::getInertia(kn::Friend_0 *const this)
/----- (00000000006123B8) ----------------------------------------------------
void __fastcall kn::trap_friend_follow_enemy(BD_VALUE_22 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  kn::Friend_0 *v3; // r31
  const kn::FVector *v4; // r3
  const kn::FVector *v5; // r3
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
  v3 = (kn::Friend_0 *)*(unsigned int *)(v1 + 4);
  kn::Friend::followEnemy(v3);
  v4 = kn::Friend::getMovement(v3);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)v3 + 16), v4);
  v5 = kn::Friend::getInertia(v3);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)v3 + 32), v5);
}
// 6123D8: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::followEnemy kn::Friend::getMovement kn::Friend::getInertia
->
/----- (00000000000DFA84) ----------------------------------------------------
void __fastcall kn::Friend::followEnemy(kn::Friend_0 *const this)
{
  kn::Friend::followMove(this, (const kn::VecSet *)(unsigned int)((_DWORD)this + 3008));
}


->
/----- (00000000000E5150) ----------------------------------------------------
kn::FVector *__fastcall kn::Friend::getMovement(kn::Friend_0 *const this)
{
  return (kn::FVector *)(unsigned int)((_DWORD)this + 3088);
}


->
/----- (00000000000E5160) ----------------------------------------------------
kn::FVector *__fastcall kn::Friend::getInertia(kn::Friend_0 *const this)
{
  return (kn::FVector *)(unsigned int)((_DWORD)this + 3120);
}


---
---
---
appears in:
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
---
---
---
example usage from obj\P_LK020\p_lk.bdscript
L2181:
 pushFromPSpVal 0
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 eqz 
 syscall 7, 19 ; trap_friend_update_target (2 in, 1 out)
 drop 
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L2207
 pushFromPSpVal 0
 syscall 10, 21 ; trap_friend_follow_enemy (1 in, 0 out)
 jmp L2207
