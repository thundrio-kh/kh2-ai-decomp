/----- (00000000004F6690) ----------------------------------------------------
void __fastcall YS::trap_mission_set_gauge_ratio(BD_VALUE_20 *args)
{
  YS::MISSION::SetGaugeRatio(*(float *)&(*args)[0], *(_DWORD *)&(*args)[4]);
}

