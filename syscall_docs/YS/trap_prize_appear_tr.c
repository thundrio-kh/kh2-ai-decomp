---
---
---
name: trap_prize_appear_tr
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
syscall 1, 279 ; trap_prize_appear_tr (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PRIZE_TR::AppearNum(const kn::FVector *pos, int num)
/----- (000000000050ADC8) ----------------------------------------------------
void __fastcall YS::trap_prize_appear_tr(BD_VALUE_21 *args)
{
  YS::PRIZE_TR::AppearNum((const kn::FVector *)(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (0000000000489CB4) ----------------------------------------------------
void __fastcall YS::PRIZE_TR::AppearNum(const kn::FVector *pos, int num)
{
  __int64 i; // r28

  if ( YS::PrizeTr )
  {
    for ( i = 0LL; (int)i < num; ++i )
      YS::PRIZE::appear((YS::PRIZE *const)(unsigned int)YS::PrizeTr, &YS::ParamTable, pos);
  }
}
// 7FE834: using guessed type void *__ptr32 YS::PrizeTr;


---
---
---
appears in:

---
---
---
example usage from NA

