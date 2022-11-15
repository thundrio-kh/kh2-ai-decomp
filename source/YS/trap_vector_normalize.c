/----- (00000000004B72D0) ----------------------------------------------------
void __fastcall YS::trap_vector_normalize(BD_VALUE_16 *args)
{
  Axa::FVECTOR4 *v2; // r30
  double v3; // fp1

  v2 = (Axa::FVECTOR4 *)(*args)[0];
  v3 = Axa::FVECTOR4::normalize(v2);
  v2->w = v3;
  *(float *)&(*args)[0] = v3;
}

