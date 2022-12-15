---
---
---
name: trap_special_last_xemnus_laser_optimize
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
syscall 8, 6 ; trap_special_last_xemnus_laser_optimize (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl ryj::LAST_XEMNUS_LASER::Optimize()
/----- (00000000006175D0) ----------------------------------------------------
void __fastcall ryj::trap_special_last_xemnus_laser_optimize(BD_VALUE_23 *args)
{
  ryj::LAST_XEMNUS_LASER::Optimize();
}
->
/----- (0000000000619A3C) ----------------------------------------------------
void __cdecl ryj::LAST_XEMNUS_LASER::Optimize()
{
  dk::Map::setHideGroup(0);
  dk::Map::hideSky();
  dk::Glow::off();
}


---
---
---
appears in:

---
---
---
example usage from NA

