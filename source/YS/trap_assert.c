/----- (00000000004B8E0C) ----------------------------------------------------
void __fastcall YS::trap_assert(BD_VALUE_16 *args)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( !*(_DWORD *)args )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].i",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp",
      589LL,
      "trap_assert",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.cpp", 589);
  }
}
// 4B8E24: variable 'back_chain' is possibly undefined

