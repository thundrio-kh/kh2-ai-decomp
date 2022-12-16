---
---
---
name: trap_peterpan_accept_notify_player_target
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
push unk1 ; (unknown)  (pushFromFSp: 0)
syscall 10, 26 ; trap_peterpan_accept_notify_player_target (1 in, 0 out)
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
void __fastcall kn::Peterpan::acceptNotifyPlayerTarget(kn::Peterpan *const this)
/----- (0000000000612A2C) ----------------------------------------------------
void __fastcall kn::trap_peterpan_accept_notify_player_target(BD_VALUE_22 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  kn::Peterpan *v3; // r31
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
  v3 = (kn::Peterpan *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v1 + 4));
  if ( kn::Peterpan::receiveNotifyPlayerTarget(v3) )
    kn::Peterpan::acceptNotifyPlayerTarget(v3);
}
// 612A4C: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Peterpan::receiveNotifyPlayerTarget kn::Peterpan::acceptNotifyPlayerTarget
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


->
/----- (0000000000105374) ----------------------------------------------------
void __fastcall kn::Peterpan::acceptNotifyPlayerTarget(kn::Peterpan *const this)
{
  kn::Friend_0 *v1; // r31
  int v2; // r3

  v1 = (kn::Friend_0 *)*(unsigned int *)&this->baseclass_0[4];
  v2 = kn::Friend::getFlag(v1);
  kn::Friend::setFlag(v1, v2 | 0x200);
}


---
---
---
appears in:
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\P_EX330\p_ex.bdscript
L6806:
 popToSp 0
 pushImm 0
 popToSpVal 28
 pushImm 0
 popToSpVal 32
 pushFromFSp 0
 syscall 10, 26 ; trap_peterpan_accept_notify_player_target (1 in, 0 out)
 ret 
