/----- (00000000004F6660) ----------------------------------------------------
void __fastcall YS::trap_mission_add_gauge(BD_VALUE_20 *args)
{
  YS::MISSION::AddGauge(*(float *)&(*args)[0], *(_DWORD *)&(*args)[4]);
}

