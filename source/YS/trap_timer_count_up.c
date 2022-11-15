/----- (00000000004B8D54) ----------------------------------------------------
void __fastcall YS::trap_timer_count_up(BD_VALUE_16 *args)
{
  dk::Timer::setCountUp(*(_DWORD *)args);
  dk::Timer::start();
}

