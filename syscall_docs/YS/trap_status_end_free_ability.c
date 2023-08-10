---
---
---
name: trap_status_end_free_ability
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
syscall 1, 289 ; trap_status_end_free_ability (0 in, 0 out)
---
---
---
description: Takes away Soras ability to jump infinitely
---
---
---
decompiled code:

/----- (0000000000509A44) ----------------------------------------------------
void __fastcall YS::trap_status_end_free_ability(BD_VALUE_21 *args)
{
  YS::STATUS::Flag &= 0xFFFFDFFF;
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

