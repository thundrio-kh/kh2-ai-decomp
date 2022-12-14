/----- (00000000004B6F24) ----------------------------------------------------
void __fastcall YS::trap_vector_add(BD_VALUE_16 *args)
{
  FLOAT *v2; // r6
  const Axa::FVECTOR4 *v3; // r4
  Axa::FVECTOR4 *v4; // r3
  kn::FVector v5; // [sp+70h] [-30h] BYREF
  Axa::FVECTOR4 v6; // [sp+80h] [-20h] BYREF

  v2 = (FLOAT *)(*args)[0];
  v3 = (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[4];
  if ( !LS_65_LV_5_0 )
  {
    LS_65_LV_5_0 = 1;
    LS_65_result.z = 0.0;
    LS_65_result.y = 0.0;
    LS_65_result.x = 0.0;
    LS_65_result.w = 1.0;
  }
  v6.x = *v2;
  v6.y = v2[1];
  v6.z = v2[2];
  v6.w = v2[3];
  v4 = Axa::FVECTOR4::operator+=(&v6, v3);
  v5.x = v4->x;
  v5.y = v4->y;
  v5.z = v4->z;
  v5.w = v4->w;
  kn::FVector::operator=(&LS_65_result, &v5);
  *(_DWORD *)args = (unsigned int)&LS_65_result;
}
// 2AB07E8: using guessed type char LS_65_LV_5_0;

//BASIC