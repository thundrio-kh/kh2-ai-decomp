/----- (000000000050A8C4) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_min_hp(BD_VALUE_21 *args)
{
  int v2; // r4
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = *(_DWORD *)&(*args)[8];
  if ( v2 < 0 || v2 >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[2].i >= 0 && args[2].i < SHEET::PARTS_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      1142LL,
      "trap_sheet_set_min_hp",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 1142);
    v2 = *(_DWORD *)&(*args)[8];
  }
  *(_DWORD *)(unsigned int)(*(_DWORD *)args + 12 * v2 + 8) = *(_DWORD *)&(*args)[4];
}
// 50A8E0: variable 'back_chain' is possibly undefined

