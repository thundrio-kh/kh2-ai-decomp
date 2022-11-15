/----- (00000000004B89C4) ----------------------------------------------------
void __fastcall YS::trap_effect_pos(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, kn::FVector *a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r5
  ryj::EFFECT_144 *v10; // r3
  FVECTOR *v11; // r3

  v9 = (unsigned __int8)LS_140_LV_34;
  v10 = (ryj::EFFECT_144 *)(*args)[0];
  if ( !LS_140_LV_34 )
  {
    v9 = (__int64)&unk_2AB0000;
    a4 = 0LL;
    a6 = &LS_140_result;
    a5 = 1065353216LL;
    a7 = 1LL;
    LS_140_result.x = 0.0;
    LS_140_result.z = 0.0;
    LS_140_result.y = 0.0;
    LS_140_result.w = 1.0;
    LS_140_LV_34 = 1;
  }
  v11 = ryj::EFFECT::pos(v10, (__int64)&unk_2AB0000, v9, a4, a5, (__int64)a6, a7, a8);
  kn::FVector::operator=(&LS_140_result, (const kn::FVector *)v11);
  *(_DWORD *)args = (unsigned int)&LS_140_result;
}
// 2AB0880: using guessed type char LS_140_LV_34;

