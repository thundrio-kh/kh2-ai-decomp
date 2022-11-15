/----- (00000000004B7F64) ----------------------------------------------------
void __fastcall YS::trap_worldflag_check(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::WORLDFLAG::Check(*(int *)args);
}

