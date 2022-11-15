/----- (00000000004B7490) ----------------------------------------------------
void __fastcall YS::trap_vector_get_rot_xz(BD_VALUE_16 *args)
{
  float *v2; // r30
  double v3; // fp31
  double v4; // fp1

  v2 = (float *)(*args)[0];
  v3 = f_atan2f(*(float *)*(unsigned int *)&(*args)[4], *(float *)(*(unsigned int *)&(*args)[4] + 8LL));
  v4 = f_atan2f(*v2, v2[2]);
  *(float *)&(*args)[0] = YS::MATH::FixRadian((float)((float)v3 - (float)v4));
}

