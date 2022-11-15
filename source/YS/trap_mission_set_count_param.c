/----- (00000000004F6478) ----------------------------------------------------
void __fastcall YS::trap_mission_set_count_param(BD_VALUE_20 *args)
{
  YS::MISSION::SetCountParam(*(_DWORD *)args, *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8], *(_DWORD *)&(*args)[12]);
}

