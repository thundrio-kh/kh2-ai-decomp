---
---
---
name: trap_bg_get_normal
---
---
---
category: camera
---
---
---
documentation level: untested
---
---
---
push camera ; (int)  (Value designating the camera)
syscall 1, 137 ; trap_bg_get_normal (1 in, 1 out)
pop normal ; (kn::FVector) 
---
---
---
description: Return the normal of the background position from the given camera
---
---
---
decompiled code:
void __fastcall dk::Octree::getNormal(dk::OctCollFile_5 *polyid, unsigned __int16 camera, char a3)
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
->
/----- (000000000006DCBC) ----------------------------------------------------
void __fastcall dk::Octree::getNormal(dk::OctCollFile_5 *polyid, unsigned __int16 camera, char a3)
{
  int v4; // r30
  __int64 v5; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = camera;
  if ( !a3 || (v5 = (unsigned int)dk::Octree::s_cameraTree, !dk::Octree::s_cameraTree) )
  {
    v5 = (unsigned int)dk::Octree::s_collTree;
    if ( !dk::Octree::s_collTree )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "s_collTree",
        "common",
        "C:\\hd25\\kingdom2\\harata\\libdk\\octree.cpp",
        1453LL,
        "getNormal",
        (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\harata\\libdk\\octree.cpp", 1453);
      v5 = (unsigned int)dk::Octree::s_collTree;
    }
  }
  dk::OctCollFile::getNormal(polyid, v5, v4);
}
// 6DD18: variable 'back_chain' is possibly undefined
// 7EA164: using guessed type void *__ptr32 dk::Octree::s_collTree;
// 7EA168: using guessed type int dk::Octree::s_cameraTree;


---
---
---
appears in:
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_HEAD\b_nm.bdscript ((B) The Experiment (Head))
---
---
---
example usage from obj\B_EX140\b_ex.bdscript
L8661:
 pushFromFSp 64
 syscall 1, 137 ; trap_bg_get_normal (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSpVal 80
 pushFromPSp 16
 pushImmf 3.141593
 syscall 0, 83 ; trap_vector_rot (3 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf -1
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSpVal 16, 80
 pushImm 1
 popToSp 4
