/----- (00000000004F66C0) ----------------------------------------------------
void __fastcall YS::trap_mission_get_gauge_ratio(BD_VALUE_20 *args)
{
  *(float *)&(*args)[0] = YS::MISSION::GetGaugeRatio(*(_DWORD *)args);
}

