---
---
---
name: trap_saveram_increment_friend_recov
---
---
---
category: save
---
---
---
documentation level: untested
---
---
---
syscall 0, 100 ; trap_saveram_increment_friend_recov (0 in, 0 out)
---
---
---
description: Increments the "Healed Party Members" value on the battle report at the end of the game
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
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
---
---
---
example usage from magic\CURE_1\cure.bdscript
L221:
 drop 
 pushFromFSp 36
 jz L230
 syscall 0, 100 ; trap_saveram_increment_friend_recov (0 in, 0 out)
 jmp L230
