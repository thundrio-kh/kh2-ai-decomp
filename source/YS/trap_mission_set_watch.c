/----- (00000000004F6384) ----------------------------------------------------
void __fastcall YS::trap_mission_set_watch(BD_VALUE_20 *args)
{
  YS::MISSION::SetWatch(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}

