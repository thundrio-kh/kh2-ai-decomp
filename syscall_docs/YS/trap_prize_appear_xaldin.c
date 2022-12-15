---
---
---
name: trap_prize_appear_xaldin
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
syscall 1, 363 ; trap_prize_appear_xaldin (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PRIZE_XALDIN::Appear(const kn::FVector *pos, int num)
/----- (000000000050B714) ----------------------------------------------------
void __fastcall YS::trap_prize_appear_xaldin(BD_VALUE_21 *args)
{
  YS::PRIZE_XALDIN::Appear((const kn::FVector *)(*args)[0], *(_DWORD *)&(*args)[4]);
}
->
/----- (000000000048AFB4) ----------------------------------------------------
void __fastcall YS::PRIZE_XALDIN::Appear(const kn::FVector *pos, int num)
{
  __int64 i; // r28

  if ( YS::PrizeXaldin )
  {
    for ( i = 0LL;
          (int)i < num;
          *(_DWORD *)&(*YS::PRIZE::appear((YS::PRIZE *const)(unsigned int)YS::PrizeXaldin, &YS::ParamTable, pos))[64] = 1123024896 )
    {
      ++i;
    }
  }
}
// 7FE83C: using guessed type int YS::PrizeXaldin;


---
---
---
appears in:

---
---
---
example usage from NA

