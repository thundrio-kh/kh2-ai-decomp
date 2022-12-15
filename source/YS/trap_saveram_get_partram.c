/----- (00000000004B82AC) ----------------------------------------------------
void __fastcall YS::trap_saveram_get_partram(BD_VALUE_16 *args)
{
  int v2; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = YS::SAVERAM_BATTLE::get_partram((YS::SAVERAM_BATTLE *const)&unk_8F7240, *(int *)args);
  *(_DWORD *)args = v2;
  if ( !v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      407LL,
      "trap_saveram_get_partram",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 407);
  }
}
// 4B82E4: variable 'back_chain' is possibly undefined

//CHEAT YS::SAVERAM_BATTLE::get_partram