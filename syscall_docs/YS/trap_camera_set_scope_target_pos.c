---
---
---
name: trap_camera_set_scope_target_pos
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
syscall 1, 314 ; trap_camera_set_scope_target_pos (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall dk::ScopeCamera::setTargetPos(RCFVector target_pos)
/----- (000000000050A234) ----------------------------------------------------
void __fastcall YS::trap_camera_set_scope_target_pos(BD_VALUE_21 *args)
{
  dk::ScopeCamera::setTargetPos((RCFVector)(*args)[0]);
}
->
/----- (0000000000077AE4) ----------------------------------------------------
void __fastcall dk::ScopeCamera::setTargetPos(RCFVector target_pos)
{
  kn::FVector::operator=((kn::FVector *const)&dk::ScopeCamera::s_targetPos, target_pos);
}
// A0A430: using guessed type float dk::ScopeCamera::s_targetPos;


---
---
---
appears in:

---
---
---
example usage from NA

