---
---
---
name: trap_command_cage_off
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
syscall 1, 118 ; trap_command_cage_off (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::STATUS::CageOff()
/----- (0000000000508464) ----------------------------------------------------
void __fastcall YS::trap_command_cage_off(BD_VALUE_21 *args)
{
  YS::STATUS::CageOff();
}
->
/----- (00000000004A10C8) ----------------------------------------------------
void __cdecl YS::STATUS::CageOff()
{
  YS::SELECTOR::ResetPauseMode(6);
  YS::Mode = 0;
  YS::ModeChangeDelay = 0;
  YS::STATUS::CheckBattleMode();
}
// 2AAD54C: using guessed type int YS::Mode;
// 2AAD554: using guessed type int YS::ModeChangeDelay;


---
---
---
appears in:

---
---
---
example usage from NA

