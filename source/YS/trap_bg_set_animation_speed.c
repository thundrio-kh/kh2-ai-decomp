/----- (0000000000503828) ----------------------------------------------------
void __fastcall YS::trap_bg_set_animation_speed(BD_VALUE_21 *args)
{
  dk::Map::setAnimationSpeedRatio(2LL, *(float *)&(*args)[0]);
}

