/----- (00000000004F67F8) ----------------------------------------------------
void __fastcall YS::trap_mission_start_combo_counter(BD_VALUE_20 *args)
{
  YS::MISSION::AddComboCounter(1, *(float *)&(*args)[0], 0);
}

