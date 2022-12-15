/----- (00000000006235A4) ----------------------------------------------------
void __fastcall Ts::trap_flare_get_pos(BD_VALUE_24 *args)
{
  FLOAT *v2; // r5
  kn::FVector v3; // [sp+70h] [-20h] BYREF

  v2 = (FLOAT *)(*args)[0];
  v3.x = *v2;
  v3.y = v2[1];
  v3.z = v2[2];
  v3.w = v2[3];
  kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, &v3);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 3EAD500: using guessed type int Ts::ResultVector;

//BASIC