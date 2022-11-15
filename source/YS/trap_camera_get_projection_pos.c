/----- (000000000050A270) ----------------------------------------------------
void __fastcall YS::trap_camera_get_projection_pos(BD_VALUE_21 *args)
{
  kn::Projection *v2; // r28
  const Axa::FMATRIX44 *v3; // r29
  unsigned int v4; // r3
  SCREENVECTOR v5; // [sp+70h] [-C0h] BYREF
  kn::FMatrix v6; // [sp+80h] [-B0h] BYREF
  Axa::FMATRIX44 v7; // [sp+C0h] [-70h] BYREF

  v2 = kn::getProjection(1);
  v3 = 0LL;
  v4 = (unsigned int)kn::getCamera(1);
  if ( v4 )
    v3 = (const Axa::FMATRIX44 *)(v4 + 16);
  Axa::FMATRIX44::operator*(&v7, v2, v3);
  v6.v0.x = v7.v0.x;
  v6.v0.y = v7.v0.y;
  v6.v0.z = v7.v0.z;
  v6.v0.w = v7.v0.w;
  v6.v1.x = v7.v1.x;
  v6.v1.y = v7.v1.y;
  v6.v1.z = v7.v1.z;
  v6.v1.w = v7.v1.w;
  v6.v2.x = v7.v2.x;
  v6.v2.y = v7.v2.y;
  v6.v2.z = v7.v2.z;
  v6.v2.w = v7.v2.w;
  v6.v3.x = v7.v3.x;
  v6.v3.y = v7.v3.y;
  v6.v3.z = v7.v3.z;
  v6.v3.w = v7.v3.w;
  v5.z = 0.0;
  v5.y = 0.0;
  v5.x = 0.0;
  v5.w = 1.0;
  kn::RotTransPers(&v5, &v6, (const kn::FVector *)(*args)[0], 0);
  ResultVector = (float)(v5.x - (float)1792.0) - (float)256.0;
  flt_2B75D54 = (float)(v5.y - (float)1840.0) - (float)208.0;
  dword_2B75D5C = 0;
  flt_2B75D58 = v5.z;
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 2B75D50: using guessed type float ResultVector;
// 2B75D54: using guessed type float flt_2B75D54;
// 2B75D58: using guessed type float flt_2B75D58;
// 2B75D5C: using guessed type int dword_2B75D5C;

