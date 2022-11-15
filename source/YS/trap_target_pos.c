/----- (0000000000508B7C) ----------------------------------------------------
void __fastcall YS::trap_target_pos(BD_VALUE_21 *args)
{
  YS::TARGET_108 v2; // [sp+70h] [-30h] BYREF

  YS::TARGET::get_pos((const YS::TARGET_108 *const)v2, (const YS::TARGET_108 *)(*args)[0]);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, (const kn::FVector *)v2);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;

