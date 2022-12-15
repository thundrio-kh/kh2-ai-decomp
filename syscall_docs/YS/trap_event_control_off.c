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

---
---
---
example usage from NA

