/----- (00000000004F621C) ----------------------------------------------------
void __fastcall YS::trap_mission_set_timer_param(BD_VALUE_20 *args)
{
  YS::MISSION::SetTimerParam(*(_DWORD *)args, *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8], *(_DWORD *)&(*args)[12]);
}

