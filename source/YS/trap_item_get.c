/----- (00000000004B9118) ----------------------------------------------------
void __fastcall YS::trap_item_get(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::ITEM::Get(*(int *)args, *(int *)&(*args)[4], 0);
}

