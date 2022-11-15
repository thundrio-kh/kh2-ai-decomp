/----- (00000000004B73BC) ----------------------------------------------------
void __fastcall YS::trap_vector_rotx(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF

  YS::MATH::VectorRotX(&v2, (const Axa::FVECTOR4 *)(*args)[0], *(float *)&(*args)[4]);
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;

