/----- (00000000004B79F4) ----------------------------------------------------
void __fastcall YS::trap_vector_to_angle(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF

  YS::MATH::VectorToAngle(&v2, (const kn::FVector *)(*args)[0]);
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;

