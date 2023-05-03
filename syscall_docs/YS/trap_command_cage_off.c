---
---
---
name: trap_command_cage_off
---
---
---
category: command
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
description: Turns off temporary barriers, like those used during the escape from Hades sequence.
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
msn\HE05_MS102\he05.bdscript
msn\TT40_KINOKO_AXE\kino.bdscript
---
---
---
example usage from msn\HE05_MS102\he05.bdscript
L44:
 syscall 1, 118 ; trap_command_cage_off (0 in, 0 out)
 pushImm 8037
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 pushImm 12
 syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
 pushImm 11
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 jmp L119
