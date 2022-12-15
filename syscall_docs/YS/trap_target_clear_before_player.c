---
---
---
name: trap_target_clear_before_player
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
syscall 1, 245 ; trap_target_clear_before_player (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::TARGET::ClearBeforePlayer()
/----- (0000000000508FEC) ----------------------------------------------------
void __fastcall YS::trap_target_clear_before_player(BD_VALUE_21 *args)
{
  YS::TARGET::ClearBeforePlayer();
}
->
/----- (00000000004AA4F8) ----------------------------------------------------
void __cdecl YS::TARGET::ClearBeforePlayer()
{
  YS::PRIORITYTARGET::clear((YS::PRIORITYTARGET_0 *const)&YS::BeforePlayer);
}


---
---
---
appears in:

---
---
---
example usage from NA

