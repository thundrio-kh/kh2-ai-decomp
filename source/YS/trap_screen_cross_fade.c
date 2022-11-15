/----- (00000000004B8178) ----------------------------------------------------
void __fastcall YS::trap_screen_cross_fade(BD_VALUE_16 *args)
{
  dk::Camera::singleCrossFadeStart((float)(*(float *)&(*args)[0] / (float)((float)1.0 * (float)2.0)));
}

