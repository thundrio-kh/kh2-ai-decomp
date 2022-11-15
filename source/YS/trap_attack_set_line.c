/----- (00000000004F4E90) ----------------------------------------------------
void __fastcall YS::trap_attack_set_line(BD_VALUE_19 *args)
{
  YS::ATTACK_MAGIC::set_line(
    (YS::ATTACK_MAGIC_3 *const)(*args)[0],
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    (const kn::FVector *)*(unsigned int *)&(*args)[8]);
}

