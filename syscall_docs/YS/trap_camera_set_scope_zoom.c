---
---
---
name: trap_camera_set_scope_zoom
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
push unk1 ; (unknown) 
syscall 1, 312 ; trap_camera_set_scope_zoom (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 *__fastcall dk::ScopeCamera::setZoom(double a1)
/----- (000000000050A1E4) ----------------------------------------------------
void __fastcall YS::trap_camera_set_scope_zoom(BD_VALUE_21 *args)
{
  dk::ScopeCamera::setZoom(*(float *)&(*args)[0]);
}
->
/----- (0000000000077ACC) ----------------------------------------------------
__int64 *__fastcall dk::ScopeCamera::setZoom(double a1)
{
  __int64 *result; // r3

  result = &dk::GS_DEF_ALPHA;
  dk::ScopeCamera::s_zoom = a1;
  return result;
}
// A0A428: using guessed type float dk::ScopeCamera::s_zoom;
// A10000: using guessed type __int64 dk::GS_DEF_ALPHA;


---
---
---
appears in:

---
---
---
example usage from NA

