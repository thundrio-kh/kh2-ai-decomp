/----- (00000000004B7940) ----------------------------------------------------
void __fastcall YS::trap_vector_inner_prodcut(BD_VALUE_16 *args)
{
  FLOAT *v2; // r4
  FLOAT *v3; // r4
  Axa::FVECTOR4 v4; // [sp+70h] [-40h] BYREF
  Axa::FVECTOR4 v5; // [sp+80h] [-30h] BYREF

  v2 = (FLOAT *)(*args)[0];
  v4.x = *v2;
  v4.y = v2[1];
  v4.z = v2[2];
  v4.w = v2[3];
  Axa::FVECTOR4::normalize(&v4);
  v3 = (FLOAT *)*(unsigned int *)&(*args)[4];
  v5.x = *v3;
  v5.y = v3[1];
  v5.z = v3[2];
  v5.w = v3[3];
  Axa::FVECTOR4::normalize(&v5);
  *(FLOAT *)&(*args)[0] = Axa::InnerProductXYZ(&v4, &v5);
}

