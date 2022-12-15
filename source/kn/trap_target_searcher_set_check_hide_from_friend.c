/----- (0000000000614800) ----------------------------------------------------
void __fastcall kn::trap_target_searcher_set_check_hide_from_friend(BD_VALUE_22 *args)
{
  Ts::TARGET_SEARCHER::set_check_hide_from_friend(
    (Ts::TARGET_SEARCHER_0 *const)(*args)[0],
    (_cntlzw(*(_DWORD *)&(*args)[4]) & 0x20) == 0);
}

