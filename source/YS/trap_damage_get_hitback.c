/----- (00000000004F41F4) ----------------------------------------------------
void __fastcall YS::trap_damage_get_hitback(BD_VALUE_19 *args)
{
  *(float *)&(*args)[0] = YS::DAMAGE::get_hitback((YS::DAMAGE_5 *const)(*args)[0]);
}

