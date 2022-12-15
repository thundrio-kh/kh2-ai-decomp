/----- (00000000004B8EC8) ----------------------------------------------------
void __fastcall YS::trap_partram_add_attack(BD_VALUE_16 *args)
{
  *(_BYTE *)(unsigned int)(*(_DWORD *)args + 9) += *(_DWORD *)&(*args)[4];
}

//BASIC
