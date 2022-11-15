/----- (00000000004F474C) ----------------------------------------------------
void __fastcall YS::trap_attack_is_hit_wall(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 4LL) & 8) != 0;
}

