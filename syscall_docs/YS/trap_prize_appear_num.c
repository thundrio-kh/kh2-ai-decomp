---
---
---
name: trap_prize_appear_num
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
push unk3 ; (unknown) 
syscall 1, 342 ; trap_prize_appear_num (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PRIZE::AppearNum(const kn::FVector *pos, int type, int num)
/----- (000000000050B6D8) ----------------------------------------------------
void __fastcall YS::trap_prize_appear_num(BD_VALUE_21 *args)
{
  YS::PRIZE::AppearNum((const kn::FVector *)(*args)[0], *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}
->
/----- (00000000004833E4) ----------------------------------------------------
void __fastcall YS::PRIZE::AppearNum(const kn::FVector *pos, int type, int num)
{
  __int64 v4; // r27
  int v6; // r30

  v4 = 0LL;
  if ( num > 0 )
  {
    v6 = 16 * type;
    do
    {
      YS::PRIZE::appear(
        (YS::PRIZE *const)(unsigned int)YS::Prize,
        (const YS::PRIZEEFFECT::PARAM *)(v6 + (unsigned int)&YS::ParamTable),
        pos);
      ++v4;
    }
    while ( (int)v4 < num );
  }
}
// 7FE818: using guessed type void *__ptr32 YS::Prize;


---
---
---
appears in:

---
---
---
example usage from NA

