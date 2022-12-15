---
---
---
name: trap_saveram_increment_friend_recov
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
syscall 0, 100 ; trap_saveram_increment_friend_recov (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::BATTLE_REPORT::IncrementFriendRecov()
/----- (00000000004B8524) ----------------------------------------------------
void __fastcall YS::trap_saveram_increment_friend_recov(BD_VALUE_16 *args)
{
  YS::BATTLE_REPORT::IncrementFriendRecov();
}
->
/----- (000000000040CC38) ----------------------------------------------------
void __cdecl YS::BATTLE_REPORT::IncrementFriendRecov()
{
  if ( *(unsigned __int16 *)((unsigned int)&SaveRam + 16334 + 2LL) < 0x3E7u )
    ++*(_WORD *)((unsigned int)&SaveRam + 16334 + 2LL);
}


---
---
---
appears in:

---
---
---
example usage from NA

