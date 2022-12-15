---
---
---
name: trap_effect_set_dir
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
syscall 0, 41 ; trap_effect_set_dir (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MATH::VectorToAngle(const kn::FVector *dir, const kn::FVector *a2)
/----- (00000000004B8684) ----------------------------------------------------
void __fastcall YS::trap_effect_set_dir(BD_VALUE_16 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  kn::FVector *v9; // r30
  kn::FVector v10; // [sp+70h] [-20h] BYREF

  v9 = (kn::FVector *)ryj::EFFECT::angle((ryj::EFFECT_144 *const)(*args)[0], a2, a3, a4, a5, a6, a7, a8);
  YS::MATH::VectorToAngle(&v10, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
  kn::FVector::operator=(v9, &v10);
}
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

