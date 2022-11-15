/----- (0000000000509880) ----------------------------------------------------
void __fastcall YS::trap_status_is_mission(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::MISSION::IsExec();
}

