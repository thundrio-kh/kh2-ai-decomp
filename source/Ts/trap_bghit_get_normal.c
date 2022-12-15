/----- (0000000000627720) ----------------------------------------------------
void __fastcall Ts::trap_bghit_get_normal(BD_VALUE_25 *args)
{
  kn::FVector v2[2]; // [sp+70h] [-30h] BYREF

  YS::BGHIT::get_normal((YS::BGHIT_0 *const)v2, *(unsigned int *)args);
  kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, v2);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 3EAD630: using guessed type int Ts::ResultVector;

