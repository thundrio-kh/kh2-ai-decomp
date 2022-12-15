---
---
---
name: trap_vector_get_rot_xz
---
---
---
category: 
---
---
---
documentation level: stub
---
---
---
push unk1 ; (unknown) 
push unk2 ; (unknown) 
syscall 0, 21 ; trap_vector_get_rot_xz (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::MATH::FixRadian(double rad)
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
->
/----- (00000000004C0E78) ----------------------------------------------------
float __fastcall YS::MATH::FixRadian(double rad)
{
  double v2; // fp1
  int v3; // r4
  double v4; // fp2
  int v5; // r7
  double v6; // fp2
  int v7; // r4
  double v8; // fp1
  int v9; // r7
  float v12; // [sp+30h] [-10h]
  float v13; // [sp+34h] [-Ch]

  if ( rad <= 0.0 )
  {
    v6 = 3.1415927;
    v7 = 0;
    v8 = (float)((float)(3.1415927 - (float)rad) * 0.15915494);
    v12 = v8;
    v9 = 127 - (unsigned __int8)((unsigned __int64)LODWORD(v12) >> 23);
    if ( v9 > -31 )
      v7 = 0x7FFFFF >> (((unsigned __int64)LODWORD(v12) >> 23) - 127);
    v2 = (float)((float)6.2831855 * (float)((float)v8 - COERCE_FLOAT(LODWORD(v12) & ~(v7 | ~((v9 - 1) >> 31)))));
  }
  else
  {
    v2 = 3.1415927;
    v3 = 0;
    v4 = (float)((float)((float)rad + 3.1415927) * 0.15915494);
    v13 = v4;
    v5 = 127 - (unsigned __int8)((unsigned __int64)LODWORD(v13) >> 23);
    if ( v5 > -31 )
      v3 = 0x7FFFFF >> (((unsigned __int64)LODWORD(v13) >> 23) - 127);
    v6 = (float)((float)6.2831855 * (float)((float)v4 - COERCE_FLOAT(LODWORD(v13) & ~(v3 | ~((v5 - 1) >> 31)))));
  }
  return (float)v6 - (float)v2;
}


---
---
---
appears in:

---
---
---
example usage from NA

