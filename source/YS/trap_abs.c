/----- (00000000004B6EE8) ----------------------------------------------------
void __fastcall YS::trap_abs(BD_VALUE_16 *args)
{
  *(_DWORD *)args += (*(int *)args >> 31) & (-*(_DWORD *)args - *(_DWORD *)args);
}

