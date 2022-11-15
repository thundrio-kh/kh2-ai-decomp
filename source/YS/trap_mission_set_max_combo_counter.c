/----- (00000000004F68F4) ----------------------------------------------------
void __fastcall YS::trap_mission_set_max_combo_counter(BD_VALUE_20 *args)
{
  YS::MISSION::SetMaxComboCounter(*(_DWORD *)args, *(_DWORD *)&(*args)[4]);
}

