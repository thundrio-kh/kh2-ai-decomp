/----- (00000000004B9160) ----------------------------------------------------
void __fastcall YS::trap_item_reduce(BD_VALUE_16 *args)
{
  YS::ITEM::Reduce(*(int *)args, *(int *)&(*args)[4]);
}

