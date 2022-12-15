---
---
---
name: trap_vector_rotx
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
syscall 0, 68 ; trap_vector_rotx (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MATH::VectorRotX(const kn::FVector *v, const Axa::FVECTOR4 *a2, double rad)
/----- (00000000004B73BC) ----------------------------------------------------
void __fastcall YS::trap_vector_rotx(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF

  YS::MATH::VectorRotX(&v2, (const Axa::FVECTOR4 *)(*args)[0], *(float *)&(*args)[4]);
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;
->
/----- (00000000004C1824) ----------------------------------------------------
void __fastcall YS::MATH::VectorRotX(const kn::FVector *v, const Axa::FVECTOR4 *a2, double rad)
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
  v7 = kn::FMatrix::rotateX((kn::FMatrix *const)&v12, v6);
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

