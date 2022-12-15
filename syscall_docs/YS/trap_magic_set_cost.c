---
---
---
name: trap_magic_set_cost
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
push unk2 ; (unknown) 
syscall 2, 68 ; trap_magic_set_cost (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MAGIC::set_cost(YS::MAGIC_85 *const this, double cost, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (00000000004F5128) ----------------------------------------------------
void __fastcall YS::trap_magic_set_cost(BD_VALUE_19 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  YS::MAGIC::set_cost((YS::MAGIC_85 *const)(*args)[0], *(float *)&(*args)[4], a3, a4, a5, a6, a7, a8);
}
->
/----- (0000000000446C28) ----------------------------------------------------
void __fastcall YS::MAGIC::set_cost(YS::MAGIC_85 *const this, double cost, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r7
  __int64 v14; // r6
  __int64 back_chain; // [sp+0h] [-A0h]

  printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\magic.cpp", 306LL, a4, a5, a6, a7, a8);
  printf((unsigned int)"%s = %f\n", (__int64)"Cost", COERCE__INT64(*(float *)&(*this)[8]), v14, v13, v12, v11, v10);
  if ( *(float *)&(*this)[8] != 0.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Cost == 0.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\magic.cpp",
      307LL,
      "set_cost",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\magic.cpp", 307);
  }
  if ( cost > 0.0 )
  {
    *(float *)&(*this)[8] = cost;
    YS::AREADATA::AddCost(cost);
  }
}
// 446C94: variable 'v14' is possibly undefined
// 446C94: variable 'v13' is possibly undefined
// 446C94: variable 'v12' is possibly undefined
// 446C94: variable 'v11' is possibly undefined
// 446C94: variable 'v10' is possibly undefined
// 446CAC: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

