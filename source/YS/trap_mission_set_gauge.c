/----- (00000000004F6630) ----------------------------------------------------
void __fastcall YS::trap_mission_set_gauge(BD_VALUE_20 *args)
{
  YS::MISSION::SetGauge(*(float *)&(*args)[0], *(_DWORD *)&(*args)[4]);
}

