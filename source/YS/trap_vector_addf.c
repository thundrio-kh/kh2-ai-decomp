/----- (00000000004B7574) ----------------------------------------------------
void __fastcall YS::trap_vector_addf(BD_VALUE_16 *args)
{
  FLOAT *v1; // r4
  Axa::FVECTOR4 *v2; // r30
  float *v3; // r3
  double v4; // fp2
  double v5; // fp3
  double v6; // fp4
  FLOAT *v7; // r3
  double v8; // fp2
  double v9; // fp3
  double v10; // fp4
  Axa::FVECTOR4 v11; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v12; // [sp+80h] [-40h] BYREF
  float v13[4]; // [sp+90h] [-30h] BYREF
  float v14[4]; // [sp+A0h] [-20h] BYREF

  v1 = (FLOAT *)*(unsigned int *)&(*args)[4];
  v2 = (Axa::FVECTOR4 *)(*args)[0];
  v12.x = *v1;
  v12.y = v1[1];
  v12.z = v1[2];
  v12.w = v1[3];
  Axa::FVECTOR4::normalize(&v12);
  v13[0] = v12.x;
  v13[1] = v12.y;
  v13[2] = v12.z;
  v13[3] = v12.w;
  v3 = (float *)Axa::FVECTOR4::operator*=((__int64)v13);
  v4 = v3[1];
  v5 = v3[2];
  v6 = v3[3];
  v14[0] = *v3;
  v14[1] = v4;
  v14[2] = v5;
  v14[3] = v6;
  v7 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v14);
  v8 = v7[1];
  v9 = v7[2];
  v10 = v7[3];
  v11.x = *v7;
  v11.y = v8;
  v11.z = v9;
  v11.w = v10;
  Axa::FVECTOR4::operator+=(v2, &v11);
}
// A0AD74: using guessed type float dk::Vsync::s_frameTime;

