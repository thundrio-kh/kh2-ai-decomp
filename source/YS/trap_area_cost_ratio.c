/----- (00000000005030F8) ----------------------------------------------------
void __fastcall YS::trap_area_cost_ratio(BD_VALUE_21 *args)
{
  *(float *)&(*args)[0] = YS::AREADATA::GetCostRatio();
}

