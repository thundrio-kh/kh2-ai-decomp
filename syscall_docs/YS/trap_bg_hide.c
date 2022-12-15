---
---
---
name: trap_bg_hide
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
syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::Map::setHideGroup(u_int groupNumber)
/----- (00000000005032C0) ----------------------------------------------------
void __fastcall YS::trap_bg_hide(BD_VALUE_21 *args)
{
  dk::Map::setHideGroup(*(_DWORD *)args);
}
->
/----- (000000000005FC30) ----------------------------------------------------
void __fastcall dk::Map::setHideGroup(u_int groupNumber)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v7; // r5
  __int64 back_chain; // [sp+0h] [-80h]

  if ( groupNumber >= 0x40 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "groupNumber < (u_int)GROUP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\harata\\libdk\\map.cpp",
      108LL,
      "setHideGroup",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\harata\\libdk\\map.cpp", 108);
  }
  dk::Map::s_groupOnBit &= ~(1LL << groupNumber);
  dk::Octree::hide(groupNumber);
  dk::PointLight::setHideGroup(groupNumber);
  dk::ObjEntry::hide(groupNumber);
  if ( dk::Map::paxInit == 1 )
    ryj::PAX::kill_group((ryj::PAX_161 *const)dk::Map::pax, (int)groupNumber, v7, v6, v5, v4, v3, v2);
}
// 5FC4C: variable 'back_chain' is possibly undefined
// 5FD08: variable 'v7' is possibly undefined
// 5FD08: variable 'v6' is possibly undefined
// 5FD08: variable 'v5' is possibly undefined
// 5FD08: variable 'v4' is possibly undefined
// 5FD08: variable 'v3' is possibly undefined
// 5FD08: variable 'v2' is possibly undefined
// A08ADC: using guessed type char dk::Map::paxInit;
// A08AE0: using guessed type __int64 dk::Map::s_groupOnBit;


---
---
---
appears in:

---
---
---
example usage from NA

