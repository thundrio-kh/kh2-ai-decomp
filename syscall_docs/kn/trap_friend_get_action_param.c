---
---
---
name: trap_friend_get_action_param
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
push unk2 ; (unknown) 
syscall 10, 35 ; trap_friend_get_action_param (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
unsigned __int64 __fastcall kn::FriendPersonality::getActionParam(kn::FriendPersonality_0 *const this, int id)
/----- (00000000006132F0) ----------------------------------------------------
void __fastcall kn::trap_friend_get_action_param(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::FriendPersonality_0 *v4; // r3
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
  v4 = kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  *(_DWORD *)args = kn::FriendPersonality::getActionParam(v4, *(_DWORD *)&(*args)[4]);
}
// 613314: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::FriendPersonality::getActionParam
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (00000000000E7B90) ----------------------------------------------------
unsigned __int64 __fastcall kn::FriendPersonality::getActionParam(kn::FriendPersonality_0 *const this, int id)
{
  unsigned __int64 result; // r3
  __int64 v4; // r5
  int v5; // r6
  unsigned int v6; // r7
  int v7; // r5
  int i; // r8

  result = 0LL;
  v4 = *(unsigned int *)&(*this)[8];
  if ( (_DWORD)v4 )
  {
    v5 = 0;
    v6 = v4 + *(_DWORD *)(v4 + 164);
    v7 = *(_DWORD *)(v4 + 160);
    if ( v7 > 0 )
    {
      for ( i = 0; *(_DWORD *)(v6 + (__int64)i) != id; i += 128 )
      {
        if ( ++v5 >= v7 )
          return result;
      }
      result = v6 + (v5 << 7);
    }
  }
  return result;
}


---
---
---
appears in:

---
---
---
example usage from NA

