/----- (00000000004B8CC4) ----------------------------------------------------
void __fastcall YS::trap_memory_alloc(BD_VALUE_16 *args)
{
  *(_DWORD *)args = (unsigned int)AREA::Alloc(*(_DWORD *)args);
}

