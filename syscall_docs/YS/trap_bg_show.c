---
---
---
name: trap_bg_show
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
syscall 1, 37 ; trap_bg_show (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::Map::setVisibleGroup(u_int groupNumber)
/----- (00000000005032E8) ----------------------------------------------------
void __fastcall YS::trap_bg_show(BD_VALUE_21 *args)
{
  dk::Map::setVisibleGroup(*(_DWORD *)args);
}
->
/----- (000000000005FD28) ----------------------------------------------------
void __fastcall dk::Map::setVisibleGroup(u_int groupNumber)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( groupNumber >= 0x40 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "groupNumber < (u_int)GROUP_MAX",
      "common",
      "C:\\hd25\\kingdom2\\harata\\libdk\\map.cpp",
      123LL,
      "setVisibleGroup",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\harata\\libdk\\map.cpp", 123);
  }
  dk::Map::s_groupOnBit |= 1LL << groupNumber;
  dk::Octree::visible(groupNumber);
  dk::PointLight::setVisibleGroup(groupNumber);
  dk::ObjEntry::show(groupNumber);
  if ( dk::Map::paxInit == 1 )
    ryj::PAX::start_group((ryj::PAX_161 *const)dk::Map::pax, groupNumber, 1, 2, 0, 0LL);
}
// 5FD44: variable 'back_chain' is possibly undefined
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

