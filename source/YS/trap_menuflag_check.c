/----- (00000000004B90DC) ----------------------------------------------------
void __fastcall YS::trap_menuflag_check(BD_VALUE_16 *args)
{
  *(_DWORD *)args = YS::MENUFLAG::Check(*(int *)args);
}

