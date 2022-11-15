/----- (00000000004B7534) ----------------------------------------------------
void __fastcall YS::trap_vector_atan_xz(BD_VALUE_16 *args)
{
  *(float *)&(*args)[0] = f_atan2f(*(float *)(*args)[0], *(float *)(*(unsigned int *)args + 8LL));
}

