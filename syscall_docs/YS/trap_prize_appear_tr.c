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
push unk1 ; (unknown)  (pushFromPSp: 16)
push unk2 ; (unknown)  (pushImm: 10,3,30,4)
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
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
obj\F_TR030\f_tr.bdscript ((F) ??? (TR))
---
---
---
example usage from obj\B_TR000\b_tr.bdscript
L2202:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 200
 subf 
 memcpy 0
 pushFromFSp 0
 pushImm 20
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSpVal 180
 eqz 
 jz L2284
 pushFromFSp 0
 gosub 12, L2304
 pushFromFSp 0
 fetchValue 24
 pushImm 2
 sub 
 neqz 
 jz L2275
 pushFromPSp 16
 pushImm 3
 syscall 1, 279 ; trap_prize_appear_tr (2 in, 0 out)
 jmp L2282
