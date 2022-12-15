/----- (0000000000627788) ----------------------------------------------------
void __fastcall Ts::trap_bghit_is_hit(BD_VALUE_25 *args)
{
  *(_DWORD *)args = (_cntlzw(*(_DWORD *)(*(unsigned int *)args + 0x14LL) + 1) & 0x20) == 0;
}

//BASIC