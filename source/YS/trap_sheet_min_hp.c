/----- (000000000050A618) ----------------------------------------------------
void __fastcall YS::trap_sheet_min_hp(BD_VALUE_21 *args)
{
  int v2; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = *(_DWORD *)&(*args)[4];
  if ( v2 < 0 || v2 >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[1].i >= 0 && args[1].i < SHEET::PARTS_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      1127LL,
      "trap_sheet_min_hp",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 1127);
    v2 = *(_DWORD *)&(*args)[4];
  }
  *(_DWORD *)args = *(_DWORD *)(unsigned int)(*(_DWORD *)args + 12 * v2 + 8);
}
// 50A634: variable 'back_chain' is possibly undefined

//BASIC
