/----- (00000000005099B4) ----------------------------------------------------
void __fastcall YS::trap_status_set_prize_ratio(BD_VALUE_21 *args)
{
  YS::STATUS::SetPrizeRatio(*(float *)&(*args)[0]);
}

