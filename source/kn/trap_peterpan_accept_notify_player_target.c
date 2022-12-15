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