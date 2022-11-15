/----- (00000000004F62F0) ----------------------------------------------------
void __fastcall YS::trap_mission_get_timer_second(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::MISSION::GetTimerSecond(*(_DWORD *)args);
}

