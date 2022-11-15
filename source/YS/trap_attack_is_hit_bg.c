/----- (00000000004F4608) ----------------------------------------------------
void __fastcall YS::trap_attack_is_hit_bg(BD_VALUE_19 *args)
{
  int v1; // r5
  int v2; // r4

  v1 = 0;
  v2 = *(_DWORD *)(*(unsigned int *)args + 4LL);
  if ( (v2 & 8) != 0 || (v2 & 0x10) != 0 )
    v1 = 1;
  *(_DWORD *)args = v1;
}

