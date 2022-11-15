/----- (00000000004F69F0) ----------------------------------------------------
void __fastcall YS::trap_score_update(BD_VALUE_20 *args)
{
  *(_DWORD *)args = YS::SCORE::update((YS::SCORE *const)(*args)[0], *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}

