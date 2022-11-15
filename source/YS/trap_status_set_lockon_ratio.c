/----- (00000000005099DC) ----------------------------------------------------
void __fastcall YS::trap_status_set_lockon_ratio(BD_VALUE_21 *args)
{
  YS::STATUS::SetLockOnRatio(*(float *)&(*args)[0]);
}

