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
description: Turns off temporary barriers, like those used during the escape from Hades sequence.
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
msn\HB16_MS404B\hb16.bdscript
msn\HB16_MS404C\hb16.bdscript
msn\HB16_MS404D\hb16.bdscript
msn\HB24_CONFINE\hb24.bdscript
msn\HB24_CONFINE_2\hb24.bdscript
msn\HB25_CONFINE_1\hb25.bdscript
msn\HB25_CONFINE_2\hb25.bdscript
msn\HB25_CONFINE_3\hb25.bdscript
msn\HE05_MS102\he05.bdscript
msn\TT40_KINOKO_AXE\kino.bdscript
---
---
---
example usage from msn\HB16_MS404B\hb16.bdscript
L33:
 pushImm 21
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 pushImm 8077
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 syscall 1, 117 ; trap_command_cage_on (0 in, 0 out)
 jmp L65
