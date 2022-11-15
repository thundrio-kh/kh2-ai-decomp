/----- (00000000004B6F14) ----------------------------------------------------
void __fastcall YS::trap_absf(BD_VALUE_16 *args)
{
  *(float *)&(*args)[0] = __fabs(*(float *)&(*args)[0]);
}

