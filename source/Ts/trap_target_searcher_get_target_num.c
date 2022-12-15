/----- (0000000000625C3C) ----------------------------------------------------
void __fastcall Ts::trap_target_searcher_get_target_num(BD_VALUE_25 *args)
{
  Ts::TARGET_SEARCHER_0 *v2; // r29
  YS::TARGET_156 v3; // [sp+70h] [-30h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v3);
  v2 = (Ts::TARGET_SEARCHER_0 *)(*args)[0];
  Ts::TARGET_SEARCHER::operator()(
    v2,
    (YS::TARGET_156 *)v3,
    (RCFVector)*(unsigned int *)&(*args)[4],
    (RCFVector)*(unsigned int *)&(*args)[8],
    1,
    (_cntlzw(*(_DWORD *)&(*args)[12]) & 0x20) == 0,
    0);
  *(_DWORD *)args = v2->_anon_0._anon_0.TargetCount;
}

//COMPLICATED YS::TARGET::clear Ts::TARGET_SEARCHER::operator