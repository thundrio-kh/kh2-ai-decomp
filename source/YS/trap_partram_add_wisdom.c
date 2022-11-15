/----- (00000000004B8EE8) ----------------------------------------------------
void __fastcall YS::trap_partram_add_wisdom(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 10) += *(_DWORD *)&(*args)[4];
}

