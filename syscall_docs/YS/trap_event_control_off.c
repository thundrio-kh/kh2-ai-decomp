---
---
---
name: trap_event_control_off
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
syscall 1, 293 ; trap_event_control_off (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::EVENT::ControlOff()
/----- (000000000050961C) ----------------------------------------------------
void __fastcall YS::trap_event_control_off(BD_VALUE_21 *args)
{
  YS::EVENT::ControlOff();
}
->
/----- (0000000000427B08) ----------------------------------------------------
void __cdecl YS::EVENT::ControlOff()
{
  YS::OBJ::ControlOff(0LL);
  YS::OBJ::ControlOff(1uLL);
}


---
---
---
appears in:
msn\TT02_MS201\save.bdscript
msn\TT32_MS303\tt32.bdscript
obj\F_AL030\f_al.bdscript ((F) ??? (AL))
---
---
---
example usage from msn\TT02_MS201\save.bdscript
L52:
 pushImm 32
 syscall 0, 57 ; trap_saveflag_set (1 in, 0 out)
 syscall 1, 293 ; trap_event_control_off (0 in, 0 out)
 pushImm 1
 popToWp W12
 jmp L66
