/----- (00000000004F5884) ----------------------------------------------------
void __fastcall YS::trap_vacuum_set_speed(BD_VALUE_19 *args)
{
  float *v1; // r4
  double v2; // fp2
  double v3; // fp3

  v1 = (float *)(*args)[0];
  v2 = *(float *)&(*args)[8];
  v3 = *(float *)&(*args)[12];
  v1[6] = *(float *)&(*args)[4];
  v1[7] = v2;
  v1[8] = v3;
}

