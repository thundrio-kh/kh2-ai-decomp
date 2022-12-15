/----- (00000000004F45A8) ----------------------------------------------------
void __fastcall YS::trap_attack_is_hit(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::ATTACK::is_hit((YS::ATTACK_10 *const)(*args)[0]);
}

//BASIC