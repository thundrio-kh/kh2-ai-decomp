---
---
---
name: trap_light_create
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
syscall 1, 181 ; trap_light_create (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::LIGHT_0 *__fastcall YS::LIGHT::Create(YS::LIGHT::TYPE type)
/----- (0000000000509A9C) ----------------------------------------------------
void __fastcall YS::trap_light_create(BD_VALUE_21 *args)
{
  *(_DWORD *)args = (unsigned int)YS::LIGHT::Create((YS::LIGHT::TYPE)(*args)[0]);
}
->
/----- (000000000043E980) ----------------------------------------------------
YS::LIGHT_0 *__fastcall YS::LIGHT::Create(YS::LIGHT::TYPE type)
{
  YS::LIGHT_0 *v2; // r30
  int v3; // r4
  __int64 v4; // r29
  dk::Fog *v5; // r3
  YS::LIGHT_0 *result; // r3
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = 0LL;
  v3 = dword_2A9D5F8;
  if ( !dword_2A9D5F8 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_full()",
      "common",
      "../yasui/classblock.h",
      40LL,
      "alloc",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 40);
    v3 = dword_2A9D5F8;
  }
  dword_2A9D5F8 = v3 - 1;
  v4 = (unsigned int)&YS::LightBlock + 40 * dword_2A9D5B8[v3 - 1];
  if ( (_DWORD)v4 )
  {
    *(_DWORD *)v4 = type;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(unsigned int)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 8) = 1065353216;
    *(_BYTE *)(v4 + 20) = 0x80;
    *(_BYTE *)(v4 + 21) = 0x80;
    *(_BYTE *)(v4 + 22) = 0x80;
    *(_BYTE *)(v4 + 23) = 0x80;
    if ( *(_DWORD *)v4 == 1 )
    {
      v5 = dk::MapColor::getFogDefault();
      *(float *)(v4 + 24) = v5->m_near;
      *(float *)(v4 + 28) = v5->m_far;
      *(float *)(v4 + 32) = v5->m_min;
      *(float *)(v4 + 36) = v5->m_max;
    }
    v2 = (YS::LIGHT_0 *)v4;
  }
  if ( dword_2A9D334 )
    *(_DWORD *)(unsigned int)(dword_2A9D334 + 4) = (_DWORD)v2;
  else
    YS::LightList = (int)v2;
  *(_DWORD *)(unsigned int)((_DWORD)v2 + 4) = 0;
  result = v2;
  dword_2A9D334 = (int)v2;
  return result;
}
// 43E9B8: variable 'back_chain' is possibly undefined
// 2A9D330: using guessed type int YS::LightList;
// 2A9D334: using guessed type int dword_2A9D334;
// 2A9D5F8: using guessed type int dword_2A9D5F8;


---
---
---
appears in:

---
---
---
example usage from NA

