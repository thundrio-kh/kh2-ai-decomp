/----- (00000000004B8A54) ----------------------------------------------------
void __fastcall YS::trap_effect_dir(BD_VALUE_16 *args)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v7; // r5
  __int64 v8; // r4
  FVECTOR *v9; // r3
  kn::FVector v10; // [sp+70h] [-70h] BYREF
  Axa::FVECTOR4 v11; // [sp+80h] [-60h] BYREF
  Axa::FMATRIX44 v12; // [sp+90h] [-50h] BYREF

  Axa::FMATRIX44::unit(&v12);
  if ( !LS_141_LV_37 )
  {
    LS_141_v.x = 0.0;
    LS_141_v.y = 0.0;
    LS_141_v.z = 1.0;
    LS_141_v.w = 0.0;
    LS_141_LV_37 = 1;
  }
  if ( !LS_141_LV_38 )
  {
    LS_141_LV_38 = 1;
    LS_141_result.z = 0.0;
    LS_141_result.y = 0.0;
    LS_141_result.x = 0.0;
    LS_141_result.w = 1.0;
  }
  Axa::FMATRIX44::unit(&v12);
  v9 = ryj::EFFECT::angle((ryj::EFFECT_144 *const)(*args)[0], v8, v7, v6, v5, v4, v3, v2);
  kn::FMatrix::rotateXYZ((kn::FMatrix *const)&v12, (const kn::FVector *)v9);
  Axa::FMATRIX44::operator*(&v11, &v12, &LS_141_v);
  v10.x = v11.x;
  v10.y = v11.y;
  v10.z = v11.z;
  v10.w = v11.w;
  kn::FVector::operator=(&LS_141_result, &v10);
  *(_DWORD *)args = (unsigned int)&LS_141_result;
}
// 4B8B00: variable 'v8' is possibly undefined
// 4B8B00: variable 'v7' is possibly undefined
// 4B8B00: variable 'v6' is possibly undefined
// 4B8B00: variable 'v5' is possibly undefined
// 4B8B00: variable 'v4' is possibly undefined
// 4B8B00: variable 'v3' is possibly undefined
// 4B8B00: variable 'v2' is possibly undefined
// 2AB08A0: using guessed type char LS_141_LV_37;
// 2AB08A8: using guessed type char LS_141_LV_38;

