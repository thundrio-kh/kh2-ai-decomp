/----- (00000000004B7670) ----------------------------------------------------
void __fastcall YS::trap_vector_homing(BD_VALUE_16 *args)
{
  kn::FVector *v1; // r30
  kn::FVector v2; // [sp+70h] [-20h] BYREF

  v1 = (kn::FVector *)(*args)[0];
  YS::MATH::Homing(&v2, v1, (const kn::FVector *)*(unsigned int *)&(*args)[4], *(float *)&(*args)[8]);
  kn::FVector::operator=(v1, &v2);
}

