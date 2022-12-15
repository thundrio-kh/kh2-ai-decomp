/----- (00000000004F56BC) ----------------------------------------------------
void __fastcall YS::trap_limit_reference(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)args + 0x3CLL);
}

//BASIC