/----- (00000000004B784C) ----------------------------------------------------
void __fastcall YS::trap_vector_draw(BD_VALUE_16 *args)
{
  __int64 v2; // r6
  u_int v3; // r4
  int v4; // r5
  int v5; // r7
  int v6; // r8
  kn::FVector v7; // [sp+70h] [-60h] BYREF
  Axa::FMATRIX44 v8; // [sp+80h] [-50h] BYREF

  Axa::FMATRIX44::unit(&v8);
  Axa::FMATRIX44::unit(&v8);
  v7.x = *(float *)&(*args)[4];
  v7.y = v7.x;
  v7.z = v7.x;
  v7.w = 0.0;
  kn::FMatrix::scaling((kn::FMatrix *const)&v8, &v7);
  kn::FVector::operator=((kn::FVector *const)&v8.v3, (const kn::FVector *)(*args)[0]);
  v2 = 4LL;
  v3 = 128;
  v4 = 16;
  *(_DWORD *)((unsigned int)&v8.v3 + 12) = 1065353216;
  do
  {
    v5 = 0;
    v6 = *(_DWORD *)&(*args)[v4];
    if ( v6 >= 0 )
    {
      v5 = *(_DWORD *)&(*args)[v4];
      if ( v6 > 255 )
        v5 = 255;
    }
    --v2;
    v4 -= 4;
    v3 = (v3 << 8) + v5;
  }
  while ( (int)v2 >= 2 );
  YS::MODEL::DrawSphere((const kn::FMatrix *)&v8, v3, 0);
}

//COMPLICATED Axa::FMATRIX44::unit kn::FMatrix::scaling YS::MODEL::DrawSphere