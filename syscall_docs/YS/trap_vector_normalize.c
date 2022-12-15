---
---
---
name: trap_vector_normalize
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
syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall Axa::FVECTOR4::normalize(Axa::FVECTOR4 *const this)
/----- (00000000004B72D0) ----------------------------------------------------
void __fastcall YS::trap_vector_normalize(BD_VALUE_16 *args)
{
  Axa::FVECTOR4 *v2; // r30
  double v3; // fp1

  v2 = (Axa::FVECTOR4 *)(*args)[0];
  v3 = Axa::FVECTOR4::normalize(v2);
  v2->w = v3;
  *(float *)&(*args)[0] = v3;
}
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

