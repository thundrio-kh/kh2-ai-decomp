/----- (00000000004F61E8) ----------------------------------------------------
void __fastcall YS::trap_mission_restart_timer(BD_VALUE_20 *args)
{
  YS::MISSION::RestartTimer(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}

