/----- (00000000004F763C) ----------------------------------------------------
void __fastcall YS::trap_sysobj_motion_is_end(BD_VALUE_21 *args)
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
      "../yasui/trapobj.h",
      81LL,
      "trap_sysobj_motion_is_end",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/trapobj.h", 81);
  }
  *(_DWORD *)args = (*(_DWORD *)(v2 + 352) & 2) != 0;
}
// 4F7660: variable 'back_chain' is possibly undefined

