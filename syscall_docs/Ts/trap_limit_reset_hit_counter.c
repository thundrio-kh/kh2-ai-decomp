---
---
---
name: trap_limit_reset_hit_counter
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
push unk1 ; (unknown)  (fetchValue: 0)
syscall 7, 36 ; trap_limit_reset_hit_counter (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::LIMIT::reset_hit_counter(YS::LIMIT_1 *const this)
/----- (000000000062466C) ----------------------------------------------------
void __fastcall Ts::trap_limit_reset_hit_counter(BD_VALUE_24 *args)
{
  *(_DWORD *)args = YS::LIMIT::reset_hit_counter((YS::LIMIT_1 *const)(*args)[0]);
}
->
/----- (0000000000440838) ----------------------------------------------------
__int64 __fastcall YS::LIMIT::reset_hit_counter(YS::LIMIT_1 *const this)
{
  YS::COMBOCOUNTER_6 *v1; // r31
  __int64 v2; // r30

  v1 = (YS::COMBOCOUNTER_6 *)(unsigned int)((_DWORD)this + 104);
  v2 = *(int *)&(*this)[148];
  YS::COMBOCOUNTER::reset(v1);
  YS::COMBOCOUNTER::activate(v1);
  return v2;
}


---
---
---
appears in:
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
---
---
---
example usage from limit\trinity\limi.bdscript
L8450:
 pushFromFSp 148
 popToSp 156
 pushImm 0
 popToSp 164
 pushFromPWp W0
 fetchValue 0
 syscall 7, 36 ; trap_limit_reset_hit_counter (1 in, 1 out)
 popToSp 160
 pushImm 0
 popToSp 148
 pushImmf 0
 popToSp 144
 pushImm 0
 popToSp 172
