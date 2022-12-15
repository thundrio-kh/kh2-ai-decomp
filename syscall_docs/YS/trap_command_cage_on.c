---
---
---
name: trap_command_cage_on
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
syscall 1, 117 ; trap_command_cage_on (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::STATUS::CageOn()
/----- (0000000000508440) ----------------------------------------------------
void __fastcall YS::trap_command_cage_on(BD_VALUE_21 *args)
{
  YS::STATUS::CageOn();
}
->
/----- (00000000004A1094) ----------------------------------------------------
void __cdecl YS::STATUS::CageOn()
{
  YS::SELECTOR::SetPauseMode(6);
  YS::Mode = 2;
}
// 2AAD54C: using guessed type int YS::Mode;


---
---
---
appears in:

---
---
---
example usage from NA

