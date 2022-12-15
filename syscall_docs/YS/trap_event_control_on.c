---
---
---
name: trap_event_control_on
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
syscall 1, 294 ; trap_event_control_on (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::EVENT::ControlOn()
/----- (0000000000509640) ----------------------------------------------------
void __fastcall YS::trap_event_control_on(BD_VALUE_21 *args)
{
  YS::EVENT::ControlOn();
}
->
/----- (0000000000427DFC) ----------------------------------------------------
void __cdecl YS::EVENT::ControlOn()
{
  YS::OBJ::ControlOn(0LL);
  YS::OBJ::ControlOn(1uLL);
}


---
---
---
appears in:

---
---
---
example usage from NA

