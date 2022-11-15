/----- (00000000004F63E4) ----------------------------------------------------
void __fastcall YS::trap_mission_set_count(BD_VALUE_20 *args)
{
  YS::MISSION::SetCount(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}

