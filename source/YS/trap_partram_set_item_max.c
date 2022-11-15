/----- (00000000004B8E98) ----------------------------------------------------
void __fastcall YS::trap_partram_set_item_max(BD_VALUE_16 *args)
{
  YS::PARTRAM::set_item_max((YS::PARTRAM *const)(*args)[0], *(int *)&(*args)[4]);
}

