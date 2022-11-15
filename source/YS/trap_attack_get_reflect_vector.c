/----- (00000000004F47A4) ----------------------------------------------------
void __fastcall YS::trap_attack_get_reflect_vector(BD_VALUE_19 *args)
{
  __int64 v2; // r4
  kn::FVector v3; // [sp+70h] [-30h] BYREF

  v2 = *(unsigned int *)args;
  if ( !LS_163_LV_12_0 )
  {
    LS_163_result.x = 0.0;
    LS_163_result.z = 0.0;
    LS_163_result.y = 0.0;
    LS_163_result.w = 1.0;
    LS_163_LV_12_0 = 1;
  }
  YS::ATTACK_MAGIC::get_reflect_vector((YS::ATTACK_MAGIC_3 *const)&v3, v2);
  kn::FVector::operator=(&LS_163_result, &v3);
  *(_DWORD *)args = (unsigned int)&LS_163_result;
}
// 2B75C20: using guessed type char LS_163_LV_12_0;

