/----- (00000000004F655C) ----------------------------------------------------
void __fastcall YS::trap_mission_set_warning_se(BD_VALUE_20 *args)
{
  YS::MISSION::SetCountWarningSe(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}

