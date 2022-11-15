/----- (0000000000503738) ----------------------------------------------------
void __fastcall YS::trap_bg_get_random_pos(BD_VALUE_21 *args, __int64 a2, __int64 a3, int a4)
{
  kn::FVector v5; // [sp+70h] [-30h] BYREF

  YS::BG::RandomPos(&v5, (const kn::FVector *)(*args)[0], *(float *)&(*args)[4], a4, 1, *(float *)&(*args)[8]);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;

