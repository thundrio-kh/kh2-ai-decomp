---
---
---
name: trap_bghit_get_normal
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown) 
syscall 6, 52 ; trap_bghit_get_normal (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BGHIT::get_normal(YS::BGHIT_0 *const this, __int64 a2)
/----- (0000000000627720) ----------------------------------------------------
void __fastcall Ts::trap_bghit_get_normal(BD_VALUE_25 *args)
{
  kn::FVector v2[2]; // [sp+70h] [-30h] BYREF

  YS::BGHIT::get_normal((YS::BGHIT_0 *const)v2, *(unsigned int *)args);
  kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, v2);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 3EAD630: using guessed type int Ts::ResultVector;
->
/----- (000000000040EE50) ----------------------------------------------------
void __fastcall YS::BGHIT::get_normal(YS::BGHIT_0 *const this, __int64 a2)
{
  int v4; // r28
  unsigned __int64 v5; // r29
  __int64 v6; // r31
  __int64 v7; // r4
  __int64 back_chain; // [sp+0h] [-A0h]

  v4 = *(_DWORD *)(a2 + 20);
  v5 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( v4 == -1 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "is_hit()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\bghit.cpp",
      40LL,
      "get_normal",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\bghit.cpp", 40);
    v4 = *(_DWORD *)(a2 + 20);
  }
  v6 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v6 )
  {
    v7 = *(unsigned int *)(v6 + 4);
    if ( !(_DWORD)v7 )
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "m_octCollFile",
        "common",
        "../../harata/libdk/objocc.h",
        62LL,
        "getNormal",
        (const void *)v5);
      ErrorRaise();
      Axa::AxaAssert("../../harata/libdk/objocc.h", 62);
      v7 = *(unsigned int *)(v6 + 4);
    }
    dk::OctCollFile::getNormal((dk::OctCollFile_5 *const)this, v7, (unsigned __int16)v4);
  }
  else
  {
    dk::Octree::getNormal((dk::OctCollFile_5 *)this, v4, 0);
  }
}
// 40EE7C: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

