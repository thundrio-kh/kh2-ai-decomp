/----- (00000000004B8D24) ----------------------------------------------------
void __fastcall YS::trap_timer_count_down(BD_VALUE_16 *args)
{
  dk::Timer::setCountDown(*(_DWORD *)args);
  dk::Timer::start();
}

