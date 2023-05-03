---
---
---
name: trap_bg_set_animation_speed
---
---
---
category: map
---
---
---
documentation level: complete
---
---
---
push ratio ; (float)  (ratio to set for animation speed. Used values are 0 and 1)
syscall 1, 326 ; trap_bg_set_animation_speed (1 in, 0 out)
---
---
---
description: Sets the background animation speed of the map. Only used by Hostile Program to stop the animation of the walls when Hostile Program has been frozen.
---
---
---
decompiled code:
void __fastcall dk::Map::setAnimationSpeedRatio(__int64 type, double ratio)
/----- (0000000000503828) ----------------------------------------------------
void __fastcall YS::trap_bg_set_animation_speed(BD_VALUE_21 *args)
{
  dk::Map::setAnimationSpeedRatio(2LL, *(float *)&(*args)[0]);
}
->
/----- (000000000005FE68) ----------------------------------------------------
void __fastcall dk::Map::setAnimationSpeedRatio(__int64 type, double ratio)
{
  kn::ModelObj_1 *v4; // r3

  v4 = dk::Octree::getModelObj();
  kn::ModelObj::setAnimationSpeedRatio(v4, type, 0LL, 0LL, ratio);
  dk::BgObj::setAnimationSpeedRatioAll(type, ratio);
}


---
---
---
appears in:
obj\B_TR000\b_tr.bdscript ((B) Hostile Program)
---
---
---
example usage from obj\B_TR000\b_tr.bdscript
L402:
 gosub 12, L440
 pushImm 6
 syscall 7, 0 ; trap_enemy_stop_all_start (1 in, 0 out)
 pushImmf 0
 syscall 1, 326 ; trap_bg_set_animation_speed (1 in, 0 out)
