/----- (00000000004B8354) ----------------------------------------------------
void __fastcall YS::trap_saveram_set_weapon(BD_VALUE_16 *args)
{
  YS::SAVERAM_BATTLE::set_weapon(
    (YS::SAVERAM_BATTLE *const)&unk_8F7240,
    *(int *)args,
    *(_DWORD *)&(*args)[4],
    *(_DWORD *)&(*args)[8]);
}

