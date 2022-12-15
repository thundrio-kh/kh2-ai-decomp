---
---
---
name: trap_special_last_xemnus_laser_optimize_end
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
syscall 8, 7 ; trap_special_last_xemnus_laser_optimize_end (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl ryj::LAST_XEMNUS_LASER::OptimizeEnd()
/----- (00000000006175F4) ----------------------------------------------------
void __fastcall ryj::trap_special_last_xemnus_laser_optimize_end(BD_VALUE_23 *args)
{
  ryj::LAST_XEMNUS_LASER::OptimizeEnd();
}
->
/----- (0000000000619A74) ----------------------------------------------------
void __cdecl ryj::LAST_XEMNUS_LASER::OptimizeEnd()
{
  dk::Map::setVisibleGroup(0);
  dk::Map::showSky();
  dk::Glow::on();
}


---
---
---
appears in:

---
---
---
example usage from NA

