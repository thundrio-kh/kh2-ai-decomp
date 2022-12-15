/----- (00000000006146C8) ----------------------------------------------------
void __fastcall kn::trap_friend_is_effect_exist(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  kn::EffectObserver_0 *v4; // r3
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r7
  __int64 v9; // r6
  __int64 v10; // r5
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
  v4 = kn::Friend::getEffectObserver((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  *(_DWORD *)args = (int)kn::EffectObserver::getIndex(
                           v4,
                           (ryj::EFFECT_55 *)*(unsigned int *)&(*args)[4],
                           v10,
                           v9,
                           v8,
                           v7,
                           v6,
                           v5) >= 0;
}
// 6146EC: variable 'back_chain' is possibly undefined
// 6147C8: variable 'v10' is possibly undefined
// 6147C8: variable 'v9' is possibly undefined
// 6147C8: variable 'v8' is possibly undefined
// 6147C8: variable 'v7' is possibly undefined
// 6147C8: variable 'v6' is possibly undefined
// 6147C8: variable 'v5' is possibly undefined

//COMPLICATED kn::Friend::getEffectObserver kn::EffectObserver::getIndex