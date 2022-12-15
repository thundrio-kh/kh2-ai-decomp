/----- (00000000004F5854) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_pos(BD_VALUE_19 *args)
{
  kn::FVector::operator=((kn::FVector *const)(*args)[0], (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}

//BASIC