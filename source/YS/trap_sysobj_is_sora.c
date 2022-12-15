/----- (00000000004F7384) ----------------------------------------------------
void __fastcall YS::trap_sysobj_is_sora(BD_VALUE_21 *args)
{
  unsigned __int64 v2; // r30
  __int64 back_chain; // [sp+0h] [-80h]

  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)(*args)[0]) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "SYSOBJ(args[0].p)->is_exist()",
      "common",
      "../yasui/trapobj.h",
      51LL,
      "trap_sysobj_is_sora",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/trapobj.h", 51);
  }
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 0x588LL) & 0x1000000) != 0;
}
// 4F73A4: variable 'back_chain' is possibly undefined

//CHEAT YS::OBJ::is_exist