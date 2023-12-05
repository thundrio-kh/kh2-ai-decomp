---
---
---
name: trap_camera_set_scope_target_pos
---
---
---
category: camera
---
---
---
documentation level: untested
---
---
---
push target_pos ; (RCFVector target_pos)  (position of target)
syscall 1, 314 ; trap_camera_set_scope_target_pos (1 in, 0 out)
---
---
---
description: Sets the target for the scope mode camera
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
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
---
---
---
example usage from obj\B_EX140\b_ex.bdscript
L21728:
 pushFromPSpVal 32
 syscall 1, 314 ; trap_camera_set_scope_target_pos (1 in, 0 out)
 pushFromFSpVal 116
 syscall 1, 312 ; trap_camera_set_scope_zoom (1 in, 0 out)
 ret 
