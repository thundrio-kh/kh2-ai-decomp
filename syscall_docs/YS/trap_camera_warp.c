---
---
---
name: trap_camera_warp
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
syscall 1, 193 ; trap_camera_warp (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::ObjCamera::setWarp(dk::ObjCamera *const this)
/----- (0000000000509C94) ----------------------------------------------------
void __fastcall YS::trap_camera_warp(BD_VALUE_21 *args)
{
  dk::ObjCamera *v1; // r3

  v1 = dk::ObjCamera::getInstance();
  dk::ObjCamera::setWarp(v1);
}
->
/----- (0000000000068C28) ----------------------------------------------------
void __fastcall dk::ObjCamera::setWarp(dk::ObjCamera *const this)
{
  (*this)[56] = 1;
}


---
---
---
appears in:

---
---
---
example usage from NA

