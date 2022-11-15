/----- (00000000005033B8) ----------------------------------------------------
void __fastcall YS::trap_bg_get_normal(BD_VALUE_21 *args)
{
  int v2; // r4
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v4; // [sp+70h] [-30h] BYREF

  v2 = *(_DWORD *)args;
  if ( !LS_447_LV_51 )
  {
    LS_447_LV_51 = 1;
    LS_447_result.z = 0.0;
    LS_447_result.y = 0.0;
    LS_447_result.x = 0.0;
    LS_447_result.w = 1.0;
  }
  if ( v2 < 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].i >= 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      228LL,
      "trap_bg_get_normal",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 228);
    v2 = *(_DWORD *)args;
  }
  dk::Octree::getNormal((dk::OctCollFile_5 *)&v4, v2, 0);
  kn::FVector::operator=(&LS_447_result, &v4);
  *(_DWORD *)args = (unsigned int)&LS_447_result;
}
// 503418: variable 'back_chain' is possibly undefined
// 2B75EC0: using guessed type char LS_447_LV_51;

