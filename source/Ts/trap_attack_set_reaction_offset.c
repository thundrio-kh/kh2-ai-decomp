/----- (0000000000623368) ----------------------------------------------------
void __fastcall Ts::trap_attack_set_reaction_offset(BD_VALUE_24 *args)
{
  kn::FVector::operator=(
    (kn::FVector *const)(unsigned int)(*(_DWORD *)args + 304),
    (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}

//BASIC