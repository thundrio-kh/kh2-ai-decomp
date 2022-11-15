/----- (00000000004F5060) ----------------------------------------------------
void __fastcall YS::trap_attack_set_hitmark_pos(BD_VALUE_19 *args)
{
  YS::ATTACK::SetHitmarkPos((const kn::FVector *)(*args)[0], (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}

