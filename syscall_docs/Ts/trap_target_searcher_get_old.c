---
---
---
name: trap_target_searcher_get_old
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
push unk1 ; (unknown)  (pushFromFSp: 20,36) (pushFromFSpVal: 48) (pushFromPWp: W0,W108)
push unk2 ; (unknown)  (pushFromFSp: 16,20,52,56,68)
push unk3 ; (unknown)  (syscall: 0, 16 ; trap_random_get (1 in, 1 out)) (pushFromFSp: 8)
syscall 6, 12 ; trap_target_searcher_get_old (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::TARGET_SEARCHER::get_old(Ts::TARGET_SEARCHER_0 *const this, YS::TARGET_156 *target, int n)
/----- (0000000000625E28) ----------------------------------------------------
void __fastcall Ts::trap_target_searcher_get_old(BD_VALUE_25 *args)
{
  Ts::TARGET_SEARCHER::get_old(
    (Ts::TARGET_SEARCHER_0 *const)(*args)[0],
    (YS::TARGET_156 *)*(unsigned int *)&(*args)[4],
    *(_DWORD *)&(*args)[8]);
}
->
/----- (000000000062267C) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::get_old(Ts::TARGET_SEARCHER_0 *const this, YS::TARGET_156 *target, int n)
{
  int v3; // r5
  int v4; // r5

  v3 = this->_anon_0._anon_0.Index - n + this->Num - 1;
  v4 = (_DWORD)this + 8 * (v3 - v3 / this->Num * this->Num);
  YS::TARGET::set_obj(
    target,
    (YS::OBJ_168 *)*(unsigned int *)(unsigned int)(v4 + 28),
    *(_DWORD *)((unsigned int)(v4 + 28) + 4LL));
}


---
---
---
appears in:
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
obj\F_HB020\f_hb.bdscript ((F) ??? (HB))
obj\P_EX100_KH1F\limi.bdscript ((P) Sora (Limit))
obj\P_EX100_NM_KH1F\limi.bdscript ((P) Sora (NM) (Limit))
obj\P_EX100_TR_KH1F\limi.bdscript ((P) Sora (TR) (Limit))
obj\P_EX100_WI_KH1F\limi.bdscript ((P) Sora (WI) (Limit))
obj\P_EX100_XM_KH1F\limi.bdscript ((P) Sora (XM) (Limit))
---
---
---
example usage from limit\donald2\limi.bdscript
L549:
 pushFromFSp 72
 pushImm 0
 sub 
 ipos 
 jz L619
 pushFromFSp 72
 pushImm 1
 sub 
 popToSp 72
 pushImm 0
 gosub 24, L756
 popToSp 32
 pushFromFSp 32
 pushImm 0
 sub 
 neqz 
 jz L615
 pushFromFSp 68
 pushImm 0
 sub 
 ipos 
 jz L607
 pushFromPWp W72
 pushImm 80
 add 
 pushFromFSp 36
 pushFromFSp 68
 syscall 0, 16 ; trap_random_get (1 in, 1 out)
 syscall 6, 12 ; trap_target_searcher_get_old (3 in, 0 out)
 jmp L607
