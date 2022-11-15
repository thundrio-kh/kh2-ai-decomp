/----- (0000000000509CEC) ----------------------------------------------------
void __fastcall YS::trap_camera_watch(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r31
  __int64 back_chain; // [sp+0h] [-A0h]
  YS::TARGET_108 v5; // [sp+70h] [-30h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v5);
  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::TARGET::set_obj((YS::TARGET_108 *const)v5, (YS::OBJ_168 *)*(unsigned int *)(v2 + 4), 0);
  dk::ReactionCamera::create((const YS::TARGET_3 *)v5);
}
// 509D20: variable 'back_chain' is possibly undefined

