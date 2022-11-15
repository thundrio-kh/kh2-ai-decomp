/----- (00000000004F6744) ----------------------------------------------------
void __fastcall YS::trap_mission_get_gauge_warning_ratio(BD_VALUE_20 *args)
{
  *(float *)&(*args)[0] = YS::MISSION::GetGaugeWarningRatio(*(_DWORD *)args);
}

