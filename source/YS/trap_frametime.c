/----- (00000000004B6ED8) ----------------------------------------------------
void __fastcall YS::trap_frametime(BD_VALUE_16 *args)
{
  *(float *)&(*args)[0] = dk::Vsync::s_frameTime;
}
// A0AD74: using guessed type float dk::Vsync::s_frameTime;

//BASIC