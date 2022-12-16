---
---
---
name: trap_command_enable
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
syscall 1, 334 ; trap_command_enable (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::INDICATION::Enable()
/----- (0000000000508760) ----------------------------------------------------
void __fastcall YS::trap_command_enable(BD_VALUE_21 *args)
{
  YS::INDICATION::enable((YS::INDICATION_3 *const)*((unsigned int *)YS::PLAYER::Player + 719));
}
// 7FE80C: using guessed type void *__ptr32 YS::PLAYER::Player;
->
/----- (00000000004EA14C) ----------------------------------------------------
void __cdecl YS::INDICATION::Enable()
{
  if ( YS::Current )
    YS::INDICATION::enable((YS::INDICATION_3 *const)(unsigned int)YS::Current);
}
// 7FED74: using guessed type int YS::Current;


---
---
---
appears in:
obj\N_EX690_TT_TUTOR_RTN\n_ex.bdscript ((N) Villager (woman) (TT_TUTOR) (RTN) (EX))
---
---
---
example usage from obj\N_EX690_TT_TUTOR_RTN\n_ex.bdscript
L37:
 syscall 1, 334 ; trap_command_enable (0 in, 0 out)
 pushFromPWp W4112
 pushImm 1
 syscall 1, 52 ; method_obj_enable_collision (2 in, 0 out)
 jmp L66
