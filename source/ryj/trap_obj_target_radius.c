/----- (000000000061700C) ----------------------------------------------------
void __fastcall ryj::trap_obj_target_radius(BD_VALUE_23 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  YS::OBJ_168 *v4; // r29
  __int64 back_chain; // [sp+0h] [-D0h]
  float v6[8]; // [sp+70h] [-60h] BYREF
  YS::TARGET_108 v7; // [sp+90h] [-40h] BYREF

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
  v4 = (YS::OBJ_168 *)*(unsigned int *)(v2 + 4);
  YS::TARGET::clear((YS::TARGET_108 *const)v7);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v7, v4, 0);
  v6[3] = 0.0;
  v6[6] = 0.0;
  v6[5] = 0.0;
  v6[4] = 0.0;
  v6[7] = 1.0;
  YS::TARGET::make_collision((const YS::TARGET_108 *const)v7, (YS::COLLISION_52 *)v6);
  *(float *)&(*args)[0] = v6[1];
}
// 617030: variable 'back_chain' is possibly undefined

//COMPLICATED YS::TARGET::clear YS::TARGET::set_obj YS::TARGET::make_collision