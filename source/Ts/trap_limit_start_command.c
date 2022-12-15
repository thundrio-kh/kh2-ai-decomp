/----- (00000000006243B4) ----------------------------------------------------
void __fastcall Ts::trap_limit_start_command(BD_VALUE_24 *args)
{
  *(_DWORD *)args = YS::LIMIT::GetExecCommand();
}

