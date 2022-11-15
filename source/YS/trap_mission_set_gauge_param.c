/----- (00000000004F66FC) ----------------------------------------------------
void __fastcall YS::trap_mission_set_gauge_param(BD_VALUE_20 *args)
{
  YS::MISSION::SetGaugeParam(*(_DWORD *)args, *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8], *(_DWORD *)&(*args)[12]);
}

