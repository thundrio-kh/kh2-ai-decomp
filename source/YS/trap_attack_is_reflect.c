/----- (00000000004F4728) ----------------------------------------------------
void __fastcall YS::trap_attack_is_reflect(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 4LL) & 0x200) != 0;
}

