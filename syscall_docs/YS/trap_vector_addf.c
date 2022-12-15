---
---
---
name: trap_vector_addf
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
push unk3 ; (unknown) 
syscall 0, 45 ; trap_vector_addf (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall Axa::FVECTOR4::normalize(Axa::FVECTOR4 *const this)
/----- (00000000004B7574) ----------------------------------------------------
void __fastcall YS::trap_vector_addf(BD_VALUE_16 *args)
{
  FLOAT *v1; // r4
  Axa::FVECTOR4 *v2; // r30
  float *v3; // r3
  double v4; // fp2
  double v5; // fp3
  double v6; // fp4
  FLOAT *v7; // r3
  double v8; // fp2
  double v9; // fp3
  double v10; // fp4
  Axa::FVECTOR4 v11; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v12; // [sp+80h] [-40h] BYREF
  float v13[4]; // [sp+90h] [-30h] BYREF
  float v14[4]; // [sp+A0h] [-20h] BYREF

  v1 = (FLOAT *)*(unsigned int *)&(*args)[4];
  v2 = (Axa::FVECTOR4 *)(*args)[0];
  v12.x = *v1;
  v12.y = v1[1];
  v12.z = v1[2];
  v12.w = v1[3];
  Axa::FVECTOR4::normalize(&v12);
  v13[0] = v12.x;
  v13[1] = v12.y;
  v13[2] = v12.z;
  v13[3] = v12.w;
  v3 = (float *)Axa::FVECTOR4::operator*=((__int64)v13);
  v4 = v3[1];
  v5 = v3[2];
  v6 = v3[3];
  v14[0] = *v3;
  v14[1] = v4;
  v14[2] = v5;
  v14[3] = v6;
  v7 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v14);
  v8 = v7[1];
  v9 = v7[2];
  v10 = v7[3];
  v11.x = *v7;
  v11.y = v8;
  v11.z = v9;
  v11.w = v10;
  Axa::FVECTOR4::operator+=(v2, &v11);
}
// A0AD74: using guessed type float dk::Vsync::s_frameTime;
->
/----- (000000000001B040) ----------------------------------------------------
float __fastcall Axa::FVECTOR4::normalize(Axa::FVECTOR4 *const this)
{
  double v2; // fp1
  double v3; // fp4
  double v4; // fp2

  if ( LODWORD(this->x) )
  {
    if ( !LODWORD(this->y) && !LODWORD(this->z) )
    {
      v2 = this->x;
      if ( this->x < 0.0 )
      {
        v2 = -v2;
        this->x = -1.0;
      }
      else
      {
        this->x = 1.0;
      }
      return v2;
    }
  }
  else
  {
    if ( !LODWORD(this->y) )
    {
      if ( !LODWORD(this->z) )
        return 0.0;
      v2 = this->z;
      if ( this->z < 0.0 )
      {
        v2 = -v2;
        this->z = -1.0;
      }
      else
      {
        this->z = 1.0;
      }
      return v2;
    }
    if ( !LODWORD(this->z) )
    {
      v2 = this->y;
      if ( this->y < 0.0 )
      {
        v2 = -v2;
        this->y = -1.0;
      }
      else
      {
        this->y = 1.0;
      }
      return v2;
    }
  }
  v2 = Axa::FVECTOR4::getLength(this);
  if ( v2 != 0.0 )
  {
    v3 = (float)(this->y * (float)((float)1.0 / (float)v2));
    v4 = (float)(this->z * (float)((float)1.0 / (float)v2));
    this->x = this->x * (float)((float)1.0 / (float)v2);
    this->y = v3;
    this->z = v4;
  }
  return v2;
}


---
---
---
appears in:

---
---
---
example usage from NA

