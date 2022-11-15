/----- (00000000005037AC) ----------------------------------------------------
void __fastcall YS::trap_bg_get_random_pos_air(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  kn::FVector v7; // [sp+70h] [-30h] BYREF

  YS::BG::RandomPosAir(
    &v7,
    (const kn::FVector *)(*args)[0],
    *(float *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12],
    a6,
    2,
    *(float *)&(*args)[16]);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v7);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;

