---
---
---
name: trap_event_layer_on
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
syscall 1, 356 ; trap_event_layer_on (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl YS::EVENT::LayerOn()
/----- (0000000000509690) ----------------------------------------------------
void __fastcall YS::trap_event_layer_on(BD_VALUE_21 *args)
{
  YS::INDICATION::Enable();
  YS::EVENT::LayerOn();
}
->
/----- (0000000000427DC0) ----------------------------------------------------
void __cdecl YS::EVENT::LayerOn()
{
  dk::LAYER_COMMON::on();
  dk::LAYER_MISSION::on();
  dk::LAYER_MAP::on();
  dk::LAYER_ETC::on();
}


---
---
---
appears in:

---
---
---
example usage from NA

