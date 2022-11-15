/----- (00000000004B77A0) ----------------------------------------------------
void __fastcall YS::trap_vector_rot(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF

  YS::MATH::VectorRot(
    &v2,
    (const kn::FVector *)(*args)[0],
    (float *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;

