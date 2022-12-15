---
---
---
name: trap_target_searcher_set_check_hide_from_friend
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
syscall 10, 55 ; trap_target_searcher_set_check_hide_from_friend (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::TARGET_SEARCHER::set_check_hide_from_friend(Ts::TARGET_SEARCHER_0 *const this, bool check)
/----- (0000000000614800) ----------------------------------------------------
void __fastcall kn::trap_target_searcher_set_check_hide_from_friend(BD_VALUE_22 *args)
{
  Ts::TARGET_SEARCHER::set_check_hide_from_friend(
    (Ts::TARGET_SEARCHER_0 *const)(*args)[0],
    (_cntlzw(*(_DWORD *)&(*args)[4]) & 0x20) == 0);
}
->
/----- (0000000000622A64) ----------------------------------------------------
void __fastcall Ts::TARGET_SEARCHER::set_check_hide_from_friend(Ts::TARGET_SEARCHER_0 *const this, bool check)
{
  *((_WORD *)&this->_anon_0._anon_0 + 1) = (((_cntlzw(check) & 0x20) == 0) << 15) | *((_WORD *)&this->_anon_0._anon_0 + 1) & 0x7FFF;
}


---
---
---
appears in:

---
---
---
example usage from NA

