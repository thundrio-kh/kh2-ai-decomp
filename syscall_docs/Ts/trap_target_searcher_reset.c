---
---
---
name: trap_target_searcher_reset
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
syscall 6, 4 ; trap_target_searcher_reset (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::TARGET_SEARCHER::reset(Ts::TARGET_SEARCHER_0 *const this)
/----- (0000000000624F10) ----------------------------------------------------
void __fastcall Ts::trap_target_searcher_reset(BD_VALUE_25 *args)
{
  Ts::TARGET_SEARCHER::reset((Ts::TARGET_SEARCHER_0 *const)(*args)[0]);
}
->
/----- (0000000000622A54) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::reset(Ts::TARGET_SEARCHER_0 *const this)
{
  this->Counter = 0;
  this->_anon_0._anon_0.Index = 0;
}


---
---
---
appears in:

---
---
---
example usage from NA

