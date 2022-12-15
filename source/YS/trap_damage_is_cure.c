/----- (00000000004F41B4) ----------------------------------------------------
void __fastcall YS::trap_damage_is_cure(BD_VALUE_19 *args)
{
  int v1; // r4
  int v2; // r5

  v1 = 0;
  v2 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)args + 0x20LL) + 4LL);
  if ( v2 == 5 || v2 == 6 )
    v1 = 1;
  *(_DWORD *)args = v1;
}

//BASIC