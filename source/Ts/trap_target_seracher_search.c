/----- (0000000000624F38) ----------------------------------------------------
void __fastcall Ts::trap_target_seracher_search(BD_VALUE_25 *args)
{
  Ts::TARGET_SEARCHER::operator()(
    (Ts::TARGET_SEARCHER_0 *const)(*args)[0],
    (YS::TARGET_156 *)*(unsigned int *)&(*args)[4],
    (RCFVector)*(unsigned int *)&(*args)[8],
    (RCFVector)*(unsigned int *)&(*args)[12],
    (_cntlzw(*(_DWORD *)&(*args)[16]) & 0x20) == 0,
    *(_DWORD *)&(*args)[20] != 0,
    (_cntlzw(*(_DWORD *)&(*args)[24]) & 0x20) == 0);
}

