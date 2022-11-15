/----- (00000000004F5158) ----------------------------------------------------
void __fastcall YS::trap_magic_can_add_cost(BD_VALUE_19 *args)
{
  *(_DWORD *)args = YS::MAGIC::CanAddCost(*(float *)&(*args)[0]);
}

