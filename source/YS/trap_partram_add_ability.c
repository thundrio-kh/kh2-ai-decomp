/----- (00000000004B8FB0) ----------------------------------------------------
void __fastcall YS::trap_partram_add_ability(BD_VALUE_16 *args)
{
  YS::PARTRAM::add_ability(
    (YS::PARTRAM *const)(*args)[0],
    *(int *)&(*args)[4],
    (_cntlzw(*(_DWORD *)&(*args)[8]) & 0x20) == 0);
}

