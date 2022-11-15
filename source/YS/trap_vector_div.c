/----- (00000000004B71B0) ----------------------------------------------------
void __fastcall YS::trap_vector_div(BD_VALUE_16 *args)
{
  FLOAT *v2; // r5
  kn::FVector v3; // [sp+70h] [-30h] BYREF
  FLOAT v4; // [sp+80h] [-20h] BYREF
  FLOAT v5; // [sp+84h] [-1Ch]
  FLOAT v6; // [sp+88h] [-18h]
  FLOAT v7; // [sp+8Ch] [-14h]

  v2 = (FLOAT *)(*args)[0];
  if ( !LS_68_LV_13 )
  {
    LS_68_LV_13 = 1;
    LS_68_result.z = 0.0;
    LS_68_result.y = 0.0;
    LS_68_result.x = 0.0;
    LS_68_result.w = 1.0;
  }
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  v7 = v2[3];
  Axa::FVECTOR4::operator*=((__int64)&v4);
  v3.x = v4;
  v3.y = v5;
  v3.z = v6;
  v3.w = v7;
  kn::FVector::operator=(&LS_68_result, &v3);
  *(_DWORD *)args = (unsigned int)&LS_68_result;
}
// 2AB0840: using guessed type char LS_68_LV_13;

