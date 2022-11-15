/----- (000000000050A7DC) ----------------------------------------------------
void __fastcall YS::trap_sheet_set_hp(BD_VALUE_21 *args)
{
  int v2; // r4
  int v3; // r3
  int v4; // r4
  int v5; // r31
  unsigned __int64 v6; // r4
  int v7; // r5
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = *(_DWORD *)&(*args)[8];
  if ( v2 < 0 || v2 >= 32 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[2].i >= 0 && args[2].i < SHEET::PARTS_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      1137LL,
      "trap_sheet_set_hp",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 1137);
    v2 = *(_DWORD *)&(*args)[8];
  }
  v3 = 3 * v2;
  v4 = *(_DWORD *)args;
  v5 = *(_DWORD *)&(*args)[4];
  v6 = (unsigned int)(v4 + 4 * v3);
  v7 = *(_DWORD *)(v6 + 8);
  if ( v5 >= v7 )
  {
    if ( v5 > *(_DWORD *)(v6 + 4) )
      v5 = *(_DWORD *)(v6 + 4);
    v7 = v5;
  }
  *(_DWORD *)v6 = v7;
}
// 50A7F8: variable 'back_chain' is possibly undefined

