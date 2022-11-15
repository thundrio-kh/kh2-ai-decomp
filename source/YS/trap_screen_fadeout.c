/----- (00000000004B81C0) ----------------------------------------------------
void __fastcall YS::trap_screen_fadeout(BD_VALUE_16 *args)
{
  dk::Fade *v2; // r3

  v2 = dk::getAllFade();
  dk::Fade::fadeOut(v2, (int)(float)(*(float *)&(*args)[0] / (float)((float)1.0 * 2.0)), 0);
}

