/----- (0000000000623318) ----------------------------------------------------
void __fastcall Ts::trap_attack_hit_mark_pos(BD_VALUE_24 *args)
{
  kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, (const kn::FVector *)&YS::ATTACK::HitmarkPos);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// C78350: using guessed type float YS::ATTACK::HitmarkPos;
// 3EAD500: using guessed type int Ts::ResultVector;

//BASIC