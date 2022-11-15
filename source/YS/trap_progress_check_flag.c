/----- (00000000004B7CC4) ----------------------------------------------------
void __fastcall YS::trap_progress_check_flag(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::PROGRESS::CheckFlag(*(int *)args);
}

