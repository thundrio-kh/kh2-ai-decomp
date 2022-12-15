/----- (00000000006283F8) ----------------------------------------------------
void __fastcall Ts::trap_strike_raid_calc_xyzrot(BD_VALUE_25 *args)
{
  FLOAT *v2; // r4
  __int64 v3; // r30
  FLOAT *v4; // r3
  double v5; // fp2
  double v6; // fp3
  double v7; // fp4
  kn::FVector v8; // [sp+70h] [-F0h] BYREF
  kn::FVector v9; // [sp+80h] [-E0h] BYREF
  Axa::FVECTOR4 v10; // [sp+90h] [-D0h] BYREF
  Axa::FVECTOR4 v11; // [sp+A0h] [-C0h] BYREF
  Axa::FVECTOR4 v12; // [sp+B0h] [-B0h] BYREF
  float v13[4]; // [sp+C0h] [-A0h] BYREF
  Axa::FVECTOR4 v14; // [sp+D0h] [-90h] BYREF
  Axa::FMATRIX44 v15; // [sp+E0h] [-80h] BYREF

  Axa::FMATRIX44::unit(&v15);
  v2 = (FLOAT *)(*args)[0];
  v10.x = *v2;
  v10.y = v2[1];
  v10.z = v2[2];
  v10.w = v2[3];
  v3 = *(unsigned int *)&(*args)[4];
  Axa::FVECTOR4::normalize(&v10);
  Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)v3);
  v10.w = 0.0;
  *(_DWORD *)(v3 + 12) = 0;
  if ( *(float *)v3 == v10.x && *(float *)(v3 + 4) == v10.y && *(float *)(v3 + 8) == v10.z && 0.0 == v10.w )
  {
    *(_QWORD *)v3 = 3212836864LL;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
  }
  Axa::FMATRIX44::unit(&v15);
  Axa::outerProductXYZ(&v14, (const Axa::FVECTOR4 *)v3, &v10);
  v8.x = v14.x;
  v8.y = v14.y;
  v8.z = v14.z;
  v8.w = v14.w;
  kn::FVector::operator=((kn::FVector *const)&v15, &v8);
  Axa::FVECTOR4::normalize(&v15.v0);
  v15.v0.w = 0.0;
  v13[0] = v10.x;
  v13[1] = v10.y;
  v13[2] = v10.z;
  v13[3] = v10.w;
  v4 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v13);
  v5 = v4[1];
  v6 = v4[2];
  v7 = v4[3];
  v9.x = *v4;
  v9.y = v5;
  v9.z = v6;
  v9.w = v7;
  kn::FVector::operator=((kn::FVector *const)&v15.v2, &v9);
  v15.v2.w = 0.0;
  Axa::outerProductXYZ(&v12, &v10, &v15.v0);
  v8.x = v12.x;
  v8.y = v12.y;
  v8.z = v12.z;
  v8.w = v12.w;
  kn::FVector::operator=((kn::FVector *const)v3, &v8);
  Axa::outerProductXYZ(&v11, &v15.v2, &v15.v0);
  v8.x = v11.x;
  v8.y = v11.y;
  v8.z = v11.z;
  v8.w = v11.w;
  kn::FVector::operator=((kn::FVector *const)&v15.v1, &v8);
  Axa::FVECTOR4::normalize(&v15.v1);
  v15.v1.w = 0.0;
  Ts::ResultVector = 0;
  dword_3EAD63C = 0;
  dword_3EAD638 = 0;
  dword_3EAD634 = 0;
  kn::FMatrix::toRot((kn::FMatrix *const)&v15, (kn::FVector *)&Ts::ResultVector);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 3EAD630: using guessed type int Ts::ResultVector;
// 3EAD634: using guessed type int dword_3EAD634;
// 3EAD638: using guessed type int dword_3EAD638;
// 3EAD63C: using guessed type int dword_3EAD63C;

//COMPLICATED Axa::FMATRIX44::unit Axa::FVECTOR4::normalize Axa::outerProductXYZ kn::FMatrix::toRot