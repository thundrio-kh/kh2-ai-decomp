---
---
---
name: trap_skateboardscore_add_count
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
push unk1 ; (unknown)  (pushImm: 0,10,20,200,30,40,5,50)
push unk2 ; (unknown)  (pushImmf: 24,60)
syscall 6, 48 ; trap_skateboardscore_add_count (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::SKATEBOARDSCORE::add_count(Ts::SKATEBOARDSCORE *const this, int point, double time)
/----- (00000000006268B4) ----------------------------------------------------
void __fastcall Ts::trap_skateboardscore_add_count(BD_VALUE_25 *args)
{
  Ts::SKATEBOARDSCORE::add_count(
    (Ts::SKATEBOARDSCORE *const)(unsigned int)Ts::SKATEBOARDSCORE::Self,
    *(_DWORD *)args,
    *(float *)&(*args)[4]);
}
// 8074C4: using guessed type void *__ptr32 Ts::SKATEBOARDSCORE::Self;
->
/----- (0000000000622158) ----------------------------------------------------
void __fastcall Ts::SKATEBOARDSCORE::add_count(Ts::SKATEBOARDSCORE *const this, int point, double time)
{
  YS::SIGNAL::Call(140, point);
  _FP2 = this->Time - time;
  __asm { fsel      f1, f2, f1, f31 }
  _FP2 = 1.0 - _FP1;
  __asm { fsel      f1, f2, f3, f1 }
  this->Time = _FP1;
}


---
---
---
appears in:
obj\F_TT010\f_tt.bdscript ((F) Skateboard (TT))
obj\F_TT010_AL\f_tt.bdscript ((F) Skateboard (AL))
obj\F_TT010_CA\f_tt.bdscript ((F) Skateboard (CA))
obj\F_TT010_HE\f_tt.bdscript ((F) Skateboard (HE))
obj\F_TT010_NM\f_tt.bdscript ((F) Skateboard (NM))
obj\F_TT010_SORA\f_tt.bdscript ((F) Skateboard (SORA) (TT))
obj\F_TT010_TR\f_tt.bdscript ((F) Skateboard (TR))
obj\F_TT010_WI\f_tt.bdscript ((F) Skateboard (WI))
obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))
obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))
obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))
obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))
obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript ((N) Dove (TT) (SKATE) (RTN) (EX))
---
---
---
example usage from obj\F_TT010\f_tt.bdscript
L522:
 popToSp 0
 pushImm 20
 pushImmf 60
 syscall 6, 48 ; trap_skateboardscore_add_count (2 in, 0 out)
 pushImm 0
 pushImm 0
 sub 
 ipos 
 jz L555
 pushImm 64
 pushImm L556
 pushFromFSp 0
 gosub 4, L757
 drop 
 jmp L555
