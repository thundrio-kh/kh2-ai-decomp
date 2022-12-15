---
---
---
name: trap_camera_end_scope
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
syscall 1, 283 ; trap_camera_end_scope (0 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __cdecl dk::ScopeCamera::destroy()
/----- (000000000050A118) ----------------------------------------------------
void __fastcall YS::trap_camera_end_scope(BD_VALUE_21 *args)
{
  dk::ScopeCamera::destroy();
}
->
/----- (0000000000077A70) ----------------------------------------------------
void __cdecl dk::ScopeCamera::destroy()
{
  dk::ObjCamera *v0; // r31
  __int64 v1; // r10
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // r7
  __int64 v5; // r6
  __int64 v6; // r5
  __int64 v7; // r4

  v0 = dk::ObjCamera::getInstance();
  if ( dk::ObjCamera::getMode() == 7 )
  {
    dk::ObjCamera::returnMode(v0);
    printf((unsigned int)"ScopeCamera::destroy \n", v7, v6, v5, v4, v3, v2, v1);
  }
}
// 77AB0: variable 'v7' is possibly undefined
// 77AB0: variable 'v6' is possibly undefined
// 77AB0: variable 'v5' is possibly undefined
// 77AB0: variable 'v4' is possibly undefined
// 77AB0: variable 'v3' is possibly undefined
// 77AB0: variable 'v2' is possibly undefined
// 77AB0: variable 'v1' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

