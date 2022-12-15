---
---
---
name: trap_event_layer_off
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
syscall 1, 354 ; trap_event_layer_off (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::INDICATION::Disable()
/----- (0000000000509664) ----------------------------------------------------
void __fastcall YS::trap_event_layer_off(BD_VALUE_21 *args)
{
  YS::EVENT::LayerOff();
  YS::INDICATION::Disable();
}
->
/----- (00000000004EA100) ----------------------------------------------------
void __cdecl YS::INDICATION::Disable()
{
  YS::INDICATION_3 *v0; // r31

  v0 = (YS::INDICATION_3 *)(unsigned int)YS::Current;
  if ( YS::Current )
  {
    YS::LOCKON::release((YS::LOCKON_6 *const)(unsigned int)(YS::Current + 2752));
    YS::INDICATION::_disable(v0);
  }
}
// 7FED74: using guessed type int YS::Current;


---
---
---
appears in:

---
---
---
example usage from NA

