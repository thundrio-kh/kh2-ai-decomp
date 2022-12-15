---
---
---
name: trap_peterpan_receive_notify_player_target
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
syscall 10, 25 ; trap_peterpan_receive_notify_player_target (1 in, 1 out)
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
bool __fastcall kn::Peterpan::receiveNotifyPlayerTarget(kn::Peterpan *const this)
/----- (0000000000612908) ----------------------------------------------------
void __fastcall kn::trap_peterpan_receive_notify_player_target(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::Peterpan *v4; // r3
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
  v4 = (kn::Peterpan *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  *(_DWORD *)args = kn::Peterpan::receiveNotifyPlayerTarget(v4);
}
// 61292C: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Peterpan::receiveNotifyPlayerTarget
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (00000000001052E8) ----------------------------------------------------
bool __fastcall kn::Peterpan::receiveNotifyPlayerTarget(kn::Peterpan *const this)
{
  __int16 v1; // r31
  double v2; // fp31
  _BOOL8 result; // r3

  v1 = kn::Friend::getFlag((kn::Friend_0 *const)*(unsigned int *)&this->baseclass_0[4]);
  result = 0;
  if ( kn::Friend::getPlayerTargetNotifyMotion() >= 0 && (v1 & 0x200) == 0 )
  {
    v2 = (float)(kn::Friend::getPlayerTargetNotifyTime() + (float)8.0);
    if ( v2 >= kn::Friend::getPlayerTargetNotifyMotionLength() )
      result = 1;
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

