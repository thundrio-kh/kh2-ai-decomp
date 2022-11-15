/----- (00000000004B7318) ----------------------------------------------------
void __fastcall YS::trap_vector_roty(BD_VALUE_16 *args)
{
  const Axa::FVECTOR4 *v2; // r4
  double v3; // fp1
  kn::FVector v4; // [sp+70h] [-30h] BYREF

  v2 = (const Axa::FVECTOR4 *)(*args)[0];
  v3 = *(float *)&(*args)[4];
  if ( !LS_71_LV_15 )
  {
    LS_71_LV_15 = 1;
    LS_71_result.z = 0.0;
    LS_71_result.y = 0.0;
    LS_71_result.x = 0.0;
    LS_71_result.w = 1.0;
  }
  YS::MATH::VectorRotY(&v4, v2, v3);
  kn::FVector::operator=(&LS_71_result, &v4);
  *(_DWORD *)args = (unsigned int)&LS_71_result;
}
// 2AB0860: using guessed type char LS_71_LV_15;

