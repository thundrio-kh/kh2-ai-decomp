/----- (0000000000502E4C) ----------------------------------------------------
void __fastcall YS::trap_act_table_add(BD_VALUE_21 *args)
{
  YS::ACT::TABLE::add(
    (YS::ACT::TABLE *const)(*args)[0],
    (const char *)*(unsigned int *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(_DWORD *)&(*args)[12],
    (int *)(unsigned int)((_DWORD)args + 16));
}

