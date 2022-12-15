/----- (00000000004B8238) ----------------------------------------------------
void __fastcall YS::trap_screen_fadein(BD_VALUE_16 *args)
{
  dk::Fade *v2; // r3

  v2 = dk::getAllFade();
  dk::Fade::fadeIn(v2, (int)(float)(*(float *)&(*args)[0] / (float)((float)1.0 * 2.0)), 0);
}
