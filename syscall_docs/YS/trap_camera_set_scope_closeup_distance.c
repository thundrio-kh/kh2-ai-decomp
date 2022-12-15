---
---
---
name: trap_camera_set_scope_closeup_distance
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
syscall 1, 313 ; trap_camera_set_scope_closeup_distance (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 *__fastcall dk::ScopeCamera::setCloseupDistance(double a1)
/----- (000000000050A20C) ----------------------------------------------------
void __fastcall YS::trap_camera_set_scope_closeup_distance(BD_VALUE_21 *args)
{
  dk::ScopeCamera::setCloseupDistance(*(float *)&(*args)[0]);
}
->
/----- (0000000000077AD8) ----------------------------------------------------
__int64 *__fastcall dk::ScopeCamera::setCloseupDistance(double a1)
{
  __int64 *result; // r3

  result = &dk::GS_DEF_ALPHA;
  dk::ScopeCamera::s_closeupDistance = a1;
  return result;
}
// A0A42C: using guessed type float dk::ScopeCamera::s_closeupDistance;
// A10000: using guessed type __int64 dk::GS_DEF_ALPHA;


---
---
---
appears in:

---
---
---
example usage from NA

