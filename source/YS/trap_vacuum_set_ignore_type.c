/----- (00000000004F5834) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_ignore_type(BD_VALUE_19 *args)
{
  *(_DWORD *)(*(unsigned int *)args + 0x10LL) |= 1 << *(_DWORD *)&(*args)[4];
}

//BASIC