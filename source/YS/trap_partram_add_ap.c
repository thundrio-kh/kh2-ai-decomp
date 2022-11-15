/----- (00000000004B8F90) ----------------------------------------------------
void __fastcall YS::trap_partram_add_ap(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 8) += *(_DWORD *)&(*args)[4];
}

