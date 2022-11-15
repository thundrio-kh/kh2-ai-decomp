/----- (00000000004F67BC) ----------------------------------------------------
void __fastcall YS::trap_mission_warning_gauge(BD_VALUE_20 *args)
{
  YS::MISSION::WarningGauge((_cntlzw(*(_DWORD *)args) & 0x20) == 0, *(_DWORD *)&(*args)[4]);
}

