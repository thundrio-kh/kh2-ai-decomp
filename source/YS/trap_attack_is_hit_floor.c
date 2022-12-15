/----- (00000000004F4770) ----------------------------------------------------
void __fastcall YS::trap_attack_is_hit_floor(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 4LL) & 0x10) != 0;
}

//BASIC