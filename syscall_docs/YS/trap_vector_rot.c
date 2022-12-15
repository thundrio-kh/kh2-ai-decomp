---
---
---
name: trap_vector_rot
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
syscall 0, 83 ; trap_vector_rot (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MATH::VectorRot(const kn::FVector *v, const kn::FVector *axis, float *a3, double rad)
/----- (00000000004B77A0) ----------------------------------------------------
void __fastcall YS::trap_vector_rot(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF

  YS::MATH::VectorRot(
    &v2,
    (const kn::FVector *)(*args)[0],
    (float *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;
->
/----- (00000000004C18E0) ----------------------------------------------------
void __fastcall YS::MATH::VectorRot(const kn::FVector *v, const kn::FVector *axis, float *a3, double rad)
{
  double v8; // fp1
  double v9; // fp2
  double v10; // fp3
  double v11; // fp4
  Axa::FVECTOR4 v12; // [sp+70h] [-C0h] BYREF
  kn::FMatrix v13; // [sp+80h] [-B0h] BYREF
  Axa::FMATRIX44 v14; // [sp+C0h] [-70h] BYREF

  Axa::FMATRIX44::unit(&v14);
  v8 = YS::MATH::FixRadian(rad);
  YS::MATH::GetRotMatrix((const kn::FVector *)&v13, a3, v8);
  kn::FMatrix::operator=((kn::FMatrix *const)&v14, &v13);
  Axa::FMATRIX44::operator*(&v12, &v14, axis);
  v9 = v12.y;
  v10 = v12.z;
  v11 = v12.w;
  v->x = v12.x;
  v->y = v9;
  v->z = v10;
  v->w = v11;
}


---
---
---
appears in:

---
---
---
example usage from NA

