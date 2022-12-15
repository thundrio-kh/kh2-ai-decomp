/----- (00000000004F415C) ----------------------------------------------------
void __fastcall YS::trap_damage_is_exec_reaction(BD_VALUE_19 *args)
{
  *(_DWORD *)args = (*(_DWORD *)(*(unsigned int *)args + 0x18LL) & 1) != 0;
}

//BASIC