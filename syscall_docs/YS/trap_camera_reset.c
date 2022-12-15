---
---
---
name: trap_camera_reset
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
syscall 1, 295 ; trap_camera_reset (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::ObjCamera::setHome(dk::ObjCamera *const this)
/----- (0000000000509CC0) ----------------------------------------------------
void __fastcall YS::trap_camera_reset(BD_VALUE_21 *args)
{
  dk::ObjCamera *v1; // r3

  v1 = dk::ObjCamera::getInstance();
  dk::ObjCamera::setHome(v1);
}
->
/----- (0000000000068C34) ----------------------------------------------------
void __fastcall dk::ObjCamera::setHome(dk::ObjCamera *const this)
{
  (*this)[57] = 1;
}


---
---
---
appears in:

---
---
---
example usage from NA

