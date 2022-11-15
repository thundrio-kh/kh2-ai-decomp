/----- (0000000000503310) ----------------------------------------------------
void __fastcall YS::trap_bg_cross_pos(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::BG::GetCrossPos(
                      (const kn::FVector *)(*args)[0],
                      (const kn::FVector *)*(unsigned int *)&(*args)[4],
                      (kn::FVector *)*(unsigned int *)&(*args)[8],
                      *(_DWORD *)&(*args)[12]);
}

