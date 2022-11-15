/----- (00000000004B7FA0) ----------------------------------------------------
void __fastcall YS::func_system_set_game_speed(BD_VALUE_16 *args)
{
  dk::Vsync::setGameSpeed(*(float *)&(*args)[0]);
}

