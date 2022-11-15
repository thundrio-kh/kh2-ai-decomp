/----- (00000000004B7720) ----------------------------------------------------
void __fastcall YS::trap_vector_outer_product(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF
  Axa::FVECTOR4 v3; // [sp+80h] [-20h] BYREF

  Axa::outerProductXYZ(&v3, (const Axa::FVECTOR4 *)(*args)[0], (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[4]);
  v2.x = v3.x;
  v2.y = v3.y;
  v2.z = v3.z;
  v2.w = v3.w;
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;

