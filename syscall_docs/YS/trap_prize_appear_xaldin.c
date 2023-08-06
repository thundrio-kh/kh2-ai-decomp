---
---
---
name: trap_prize_appear_xaldin
---
---
---
category: prize
---
---
---
documentation level: untested
---
---
---
push pos ; (kn::FVector *)  (A position vector)
push num ; (int)  (number of prizes)
syscall 1, 363 ; trap_prize_appear_xaldin (2 in, 0 out)
---
---
---
description: Makes a number of prizes for mushroom 3 appear at a position
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
obj\M_EX350_03\m_ex.bdscript ((M) Mushroom 3 (EX))
---
---
---
example usage from obj\M_EX350_03\m_ex.bdscript
L440:
 jz L474
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 1
 syscall 1, 363 ; trap_prize_appear_xaldin (2 in, 0 out)
 pushFromFSpVal 436
 pushImm 1
 sub 
 popToSpVal 436
 pushFromFSp 12
 pushImm 1
 sub 
 popToSp 12
 jmp L418
