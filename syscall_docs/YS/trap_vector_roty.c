---
---
---
name: trap_vector_roty
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
syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MATH::VectorRotY(const kn::FVector *v, const Axa::FVECTOR4 *a2, double rad)
/----- (00000000004B7318) ----------------------------------------------------
void __fastcall YS::trap_vector_roty(BD_VALUE_16 *args)
{
  const Axa::FVECTOR4 *v2; // r4
  double v3; // fp1
  kn::FVector v4; // [sp+70h] [-30h] BYREF

  v2 = (const Axa::FVECTOR4 *)(*args)[0];
  v3 = *(float *)&(*args)[4];
  if ( !LS_71_LV_15 )
  {
    LS_71_LV_15 = 1;
    LS_71_result.z = 0.0;
    LS_71_result.y = 0.0;
    LS_71_result.x = 0.0;
    LS_71_result.w = 1.0;
  }
  YS::MATH::VectorRotY(&v4, v2, v3);
  kn::FVector::operator=(&LS_71_result, &v4);
  *(_DWORD *)args = (unsigned int)&LS_71_result;
}
// 2AB0860: using guessed type char LS_71_LV_15;
->
/----- (00000000004C1768) ----------------------------------------------------
void __fastcall YS::MATH::VectorRotY(const kn::FVector *v, const Axa::FVECTOR4 *a2, double rad)
{
  double v6; // fp1
  const kn::FMatrix *v7; // r3
  double v8; // fp2
  double v9; // fp3
  double v10; // fp4
  Axa::FVECTOR4 v11; // [sp+70h] [-70h] BYREF
  Axa::FMATRIX44 v12; // [sp+80h] [-60h] BYREF

  Axa::FMATRIX44::unit(&v12);
  Axa::FMATRIX44::unit(&v12);
  v6 = YS::MATH::FixRadian(rad);
  v7 = kn::FMatrix::rotateY((kn::FMatrix *const)&v12, v6);
  kn::FMatrix::operator=((kn::FMatrix *const)&v12, v7);
  Axa::FMATRIX44::operator*(&v11, &v12, a2);
  v8 = v11.y;
  v9 = v11.z;
  v10 = v11.w;
  v->x = v11.x;
  v->y = v8;
  v->z = v9;
  v->w = v10;
}


---
---
---
appears in:

---
---
---
example usage from NA

