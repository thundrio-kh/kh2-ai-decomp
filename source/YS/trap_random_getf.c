/----- (00000000004B7DF8) ----------------------------------------------------
void __fastcall YS::trap_random_getf(BD_VALUE_16 *args)
{
  YS::Random *= 69069;
  *(float *)&(*args)[0] = (float)((float)(unsigned int)YS::Random * (float)2.3283064e-10) * *(float *)&(*args)[0];
}
// 2AB06B0: using guessed type int YS::Random;

