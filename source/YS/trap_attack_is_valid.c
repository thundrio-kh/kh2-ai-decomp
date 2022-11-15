/----- (00000000004F50B4) ----------------------------------------------------
void __fastcall YS::trap_attack_is_valid(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 4LL) & 0x1000) != 0;
}

