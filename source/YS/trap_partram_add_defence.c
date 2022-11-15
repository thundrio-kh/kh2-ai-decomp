/----- (00000000004B8F08) ----------------------------------------------------
void __fastcall YS::trap_partram_add_defence(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 11) += *(_DWORD *)&(*args)[4];
}

