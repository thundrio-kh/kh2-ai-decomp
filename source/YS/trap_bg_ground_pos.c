/----- (00000000005034D0) ----------------------------------------------------
void __fastcall YS::trap_bg_ground_pos(BD_VALUE_21 *args)
{
  *(_DWORD *)args = YS::BG::GetGroundPos(
                      (const kn::FVector *)(*args)[0],
                      (kn::FVector *)*(unsigned int *)&(*args)[4],
                      *(float *)&(*args)[8],
                      0.0,
                      4);
}

