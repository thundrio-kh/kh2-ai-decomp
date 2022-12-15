---
---
---
name: trap_bghit_get_kind
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
syscall 6, 55 ; trap_bghit_get_kind (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::BGHIT::get_kind(YS::BGHIT_0 *const this)
/----- (00000000006277F4) ----------------------------------------------------
void __fastcall Ts::trap_bghit_get_kind(BD_VALUE_25 *args)
{
  *(_DWORD *)args = YS::BGHIT::get_kind((YS::BGHIT_0 *const)(*args)[0]);
}
->
/----- (000000000040EFA8) ----------------------------------------------------
__int64 __fastcall YS::BGHIT::get_kind(YS::BGHIT_0 *const this)
{
  int v2; // r29
  unsigned __int64 v3; // r30
  __int64 v4; // r31
  dk::OctCollFile_5 *v6; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(_DWORD *)&(*this)[20];
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( v2 == -1 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "is_hit()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\bghit.cpp",
      50LL,
      "get_kind",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\bghit.cpp", 50);
    v2 = *(_DWORD *)&(*this)[20];
  }
  v4 = *(unsigned int *)&(*this)[16];
  if ( !(_DWORD)v4 )
    return dk::Octree::getAttrKind(v2, 0);
  v6 = (dk::OctCollFile_5 *)*(unsigned int *)(v4 + 4);
  if ( !(_DWORD)v6 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "m_octCollFile",
      "common",
      "../harata/libdk/objocc.h",
      70LL,
      "getAttrKind",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../harata/libdk/objocc.h", 70);
    v6 = (dk::OctCollFile_5 *)*(unsigned int *)(v4 + 4);
  }
  return dk::OctCollFile::getAttr(v6, (unsigned __int16)v2)->m_attr.attrInt & 0xFLL;
}
// 40EFCC: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

