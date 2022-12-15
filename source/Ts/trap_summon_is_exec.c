/----- (000000000062462C) ----------------------------------------------------
void __fastcall Ts::trap_summon_is_exec(BD_VALUE_24 *args)
{
  *(_DWORD *)args = (_cntlzw(YS::SUMMON::GetMode()) & 0x20) == 0;
}

