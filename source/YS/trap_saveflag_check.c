/----- (00000000004B8DD4) ----------------------------------------------------
void __fastcall YS::trap_saveflag_check(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::SAVEFLAG::Check(*(unsigned int *)args);
}

