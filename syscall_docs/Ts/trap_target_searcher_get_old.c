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
push unk1 ; (unknown) 
push unk2 ; (unknown) 
push unk3 ; (unknown) 
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

---
---
---
example usage from NA

