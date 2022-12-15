/----- (000000000062466C) ----------------------------------------------------
void __fastcall Ts::trap_limit_reset_hit_counter(BD_VALUE_24 *args)
{
  *(_DWORD *)args = YS::LIMIT::reset_hit_counter((YS::LIMIT_1 *const)(*args)[0]);
}

