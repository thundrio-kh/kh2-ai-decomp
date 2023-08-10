---
---
---
name: trap_status_begin_free_ability
---
---
---
category: player
---
---
---
documentation level: complete
---
---
---
syscall 1, 288 ; trap_status_begin_free_ability (0 in, 0 out)
---
---
---
description: Gives Sora the ability to Jump infinitely like is done in the Armor Xemnas II fight
---
---
---
decompiled code:

/----- (0000000000509A30) ----------------------------------------------------
void __fastcall YS::trap_status_begin_free_ability(BD_VALUE_21 *args)
{
  YS::STATUS::Flag |= 0x2000u;
}
// 2AAD548: using guessed type int YS::STATUS::Flag;

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

