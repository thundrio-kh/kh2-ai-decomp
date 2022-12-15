/----- (0000000000627668) ----------------------------------------------------
void __fastcall Ts::trap_bghit_check_line(BD_VALUE_25 *args)
{
  kn::FVector v2; // [sp+70h] [-40h] BYREF
  kn::FVector v3; // [sp+80h] [-30h] BYREF

  v2.z = 0.0;
  v2.y = 0.0;
  v2.x = 0.0;
  v2.w = 1.0;
  v3.z = 0.0;
  v3.y = 0.0;
  v3.x = 0.0;
  v3.w = 1.0;
  kn::FVector::operator=(&v2, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
  kn::FVector::operator=(&v3, (const kn::FVector *)*(unsigned int *)&(*args)[8]);
  v2.w = 1.0;
  v3.w = 1.0;
  *(_DWORD *)args = YS::BGHIT::check_line((YS::BGHIT_0 *const)(*args)[0], &v2, &v3, *(_DWORD *)&(*args)[12]);
}

