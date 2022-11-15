/----- (00000000004F6928) ----------------------------------------------------
void __fastcall YS::trap_mission_set_combo_counter_param(BD_VALUE_20 *args)
{
  YS::MISSION::SetComboCounterParam(
    *(_DWORD *)args,
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(_DWORD *)&(*args)[12]);
}

