/----- (00000000004B8CFC) ----------------------------------------------------
void __fastcall YS::trap_memory_free(BD_VALUE_16 *args)
{
  AREA::Free((unsigned int *)(*args)[0]);
}

