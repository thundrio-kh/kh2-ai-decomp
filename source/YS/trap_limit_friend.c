/----- (00000000004F53E4) ----------------------------------------------------
void __fastcall YS::trap_limit_friend(BD_VALUE_19 *args)
{
  *(_DWORD *)args = *(_DWORD *)(unsigned int)(*(_DWORD *)args + 4 * *(_DWORD *)&(*args)[4] + 16);
}

//BASIC