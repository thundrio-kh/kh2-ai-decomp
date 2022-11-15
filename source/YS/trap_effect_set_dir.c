/----- (00000000004B8684) ----------------------------------------------------
void __fastcall YS::trap_effect_set_dir(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  kn::FVector *v9; // r30
  kn::FVector v10; // [sp+70h] [-20h] BYREF

  v9 = (kn::FVector *)ryj::EFFECT::angle((ryj::EFFECT_144 *const)(*args)[0], a2, a3, a4, a5, a6, a7, a8);
  YS::MATH::VectorToAngle(&v10, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
  kn::FVector::operator=(v9, &v10);
}

