---
---
---
name: trap_status_set_prize_ratio
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
syscall 1, 249 ; trap_status_set_prize_ratio (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::STATUS::SetPrizeRatio(double ratio)
/----- (00000000005099B4) ----------------------------------------------------
void __fastcall YS::trap_status_set_prize_ratio(BD_VALUE_21 *args)
{
  YS::STATUS::SetPrizeRatio(*(float *)&(*args)[0]);
}
->
/----- (00000000004A1218) ----------------------------------------------------
void __fastcall YS::STATUS::SetPrizeRatio(double ratio)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( ratio < 0.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ratio >= 0.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\status.cpp",
      227LL,
      "SetPrizeRatio",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\status.cpp", 227);
  }
  *(float *)&YS::PrizeRatio = ratio;
}
// 4A123C: variable 'back_chain' is possibly undefined
// 2AAD558: using guessed type int YS::PrizeRatio;


---
---
---
appears in:

---
---
---
example usage from NA

