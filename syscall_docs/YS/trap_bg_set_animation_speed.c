---
---
---
name: trap_bg_set_animation_speed
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
syscall 1, 326 ; trap_bg_set_animation_speed (1 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

