/----- (0000000000612510) ----------------------------------------------------
void __fastcall kn::trap_sysobj_is_blow(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  int v5; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)v2) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp",
      159LL,
      "trap_sysobj_is_blow",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp", 159);
  }
  v4 = *(unsigned int *)(v2 + 12);
  v5 = 0;
  if ( (_DWORD)v4 && (*(_DWORD *)(v4 + 8) & 0x40) != 0 )
    v5 = 1;
  *(_DWORD *)args = v5;
}
// 612534: variable 'back_chain' is possibly undefined

//CHEAT YS::OBJ::is_exist