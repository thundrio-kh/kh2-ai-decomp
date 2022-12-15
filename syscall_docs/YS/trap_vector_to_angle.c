---
---
---
name: trap_vector_to_angle
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
syscall 0, 102 ; trap_vector_to_angle (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MATH::VectorToAngle(const kn::FVector *dir, const kn::FVector *a2)
/----- (00000000004B79F4) ----------------------------------------------------
void __fastcall YS::trap_vector_to_angle(BD_VALUE_16 *args)
{
  kn::FVector v2; // [sp+70h] [-30h] BYREF

  YS::MATH::VectorToAngle(&v2, (const kn::FVector *)(*args)[0]);
  kn::FVector::operator=((kn::FVector *const)&YS::ResultVector, &v2);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;
->
/----- (00000000004C1168) ----------------------------------------------------
void __fastcall YS::MATH::VectorToAngle(const kn::FVector *dir, const kn::FVector *a2)
{
  double v4; // fp1
  kn::FVector v5; // [sp+70h] [-40h] BYREF

  v5.z = 0.0;
  v5.y = 0.0;
  v5.x = 0.0;
  v5.w = 1.0;
  dir->z = 0.0;
  dir->y = 0.0;
  dir->x = 0.0;
  dir->w = 1.0;
  kn::FVector::operator=(&v5, a2);
  v5.y = 0.0;
  v4 = Axa::FVECTOR4::getLength(&v5);
  dir->x = f_atan2f(-a2->y, v4);
  dir->y = f_atan2f(a2->x, a2->z);
  *(_QWORD *)&dir->z = 1065353216LL;
}


---
---
---
appears in:

---
---
---
example usage from NA

