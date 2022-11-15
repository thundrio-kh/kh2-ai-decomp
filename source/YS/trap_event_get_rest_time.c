/----- (00000000005095E8) ----------------------------------------------------
void __fastcall YS::trap_event_get_rest_time(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::EVENT::GetRestTime();
}

