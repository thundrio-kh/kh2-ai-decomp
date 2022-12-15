/----- (0000000000612F74) ----------------------------------------------------
void __fastcall kn::trap_sysobj_is_finish_blow(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  int v4; // r5
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
      204LL,
      "trap_sysobj_is_finish_blow",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\trapfunctions.cpp", 204);
  }
  v4 = 0;
  if ( *(_DWORD *)(v2 + 12)
    && (*(_DWORD *)(*(unsigned int *)(v2 + 12) + 8LL) & 0x40) != 0
    && (*(_DWORD *)(v2 + 268) & 0x20000) != 0 )
  {
    v4 = 1;
  }
  *(_DWORD *)args = v4;
}
// 612F98: variable 'back_chain' is possibly undefined

//CHEAT YS::OBJ::is_exist