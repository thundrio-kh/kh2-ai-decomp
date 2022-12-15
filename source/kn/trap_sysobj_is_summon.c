/----- (0000000000613064) ----------------------------------------------------
void __fastcall kn::trap_sysobj_is_summon(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
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
      211LL,
      "trap_sysobj_is_summon",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp", 211);
  }
  *(_DWORD *)args = (*(_DWORD *)(v2 + 1416) & 0x400000) != 0;
}
// 613088: variable 'back_chain' is possibly undefined

//CHEAT YS::OBJ::is_exist