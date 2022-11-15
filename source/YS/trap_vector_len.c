/----- (00000000004B7298) ----------------------------------------------------
void __fastcall YS::trap_vector_len(BD_VALUE_16 *args)
{
  *(float *)&(*args)[0] = Axa::FVECTOR4::getLength((const Axa::FVECTOR4 *const)(*args)[0]);
}

