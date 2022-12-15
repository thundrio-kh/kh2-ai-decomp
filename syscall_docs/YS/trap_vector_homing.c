---
---
---
name: trap_vector_homing
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
syscall 0, 46 ; trap_vector_homing (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::MATH::Homing(const kn::FVector *dir, const kn::FVector *target, const kn::FVector *a3, double limit)
/----- (00000000004B7670) ----------------------------------------------------
void __fastcall YS::trap_vector_homing(BD_VALUE_16 *args)
{
  kn::FVector *v1; // r30
  kn::FVector v2; // [sp+70h] [-20h] BYREF

  v1 = (kn::FVector *)(*args)[0];
  YS::MATH::Homing(&v2, v1, (const kn::FVector *)*(unsigned int *)&(*args)[4], *(float *)&(*args)[8]);
  kn::FVector::operator=(v1, &v2);
}
->
/----- (00000000004C14F8) ----------------------------------------------------
void __fastcall YS::MATH::Homing(const kn::FVector *dir, const kn::FVector *target, const kn::FVector *a3, double limit)
{
  double v8; // fp2
  double v9; // fp1
  double v10; // fp2
  double v11; // fp31
  double v12; // fp2
  kn::FVector v13; // [sp+70h] [-130h] BYREF
  Axa::FVECTOR4 v14; // [sp+80h] [-120h] BYREF
  Axa::FVECTOR4 v15; // [sp+90h] [-110h] BYREF
  Axa::FVECTOR4 v16; // [sp+A0h] [-100h] BYREF
  kn::FVector v17; // [sp+B0h] [-F0h] BYREF
  Axa::FVECTOR4 v18; // [sp+C0h] [-E0h] BYREF
  Axa::FVECTOR4 v19; // [sp+D0h] [-D0h] BYREF
  Axa::FVECTOR4 v20; // [sp+E0h] [-C0h] BYREF
  kn::FMatrix v21; // [sp+F0h] [-B0h] BYREF
  Axa::FMATRIX44 v22; // [sp+130h] [-70h] BYREF

  v14.z = 0.0;
  v14.y = 0.0;
  v14.x = 0.0;
  v14.w = 1.0;
  v15.z = 0.0;
  v15.y = 0.0;
  v15.x = 0.0;
  v15.w = 1.0;
  v16.z = 0.0;
  v16.y = 0.0;
  v16.x = 0.0;
  v16.w = 1.0;
  dir->z = 0.0;
  dir->y = 0.0;
  dir->x = 0.0;
  dir->w = 1.0;
  Axa::FMATRIX44::unit(&v22);
  kn::FVector::operator=((kn::FVector *const)&v15, target);
  Axa::FVECTOR4::normalize(&v15);
  kn::FVector::operator=((kn::FVector *const)&v16, a3);
  Axa::FVECTOR4::normalize(&v16);
  v8 = Axa::InnerProductXYZ(&v15, &v16);
  if ( v8 < 1.0 )
  {
    v9 = 3.1415927;
    if ( v8 > -1.0 )
      v9 = f_acosf(v8);
  }
  else
  {
    v9 = 0.0;
  }
  v10 = limit;
  v11 = v9;
  v12 = (float)(dk::Vsync::s_frameTime * (float)v10);
  if ( v9 <= v12 )
  {
    if ( v9 < -v12 )
      v11 = -v12;
  }
  else
  {
    v11 = v12;
  }
  Axa::outerProductXYZ(&v20, &v15, &v16);
  v13.x = v20.x;
  v13.y = v20.y;
  v13.z = v20.z;
  v13.w = v20.w;
  kn::FVector::operator=((kn::FVector *const)&v14, &v13);
  Axa::FVECTOR4::normalize(&v14);
  YS::MATH::GetRotMatrix((const kn::FVector *)&v21, &v14.x, v11);
  kn::FMatrix::operator=((kn::FMatrix *const)&v22, &v21);
  v18.x = v15.x;
  v18.y = v15.y;
  v18.z = v15.z;
  v18.w = 0.0;
  Axa::FMATRIX44::operator*(&v19, &v22, &v18);
  v17.x = v19.x;
  v17.y = v19.y;
  v17.z = v19.z;
  v17.w = v19.w;
  kn::FVector::operator=((kn::FVector *const)dir, &v17);
}
// A0AD74: using guessed type float dk::Vsync::s_frameTime;


---
---
---
appears in:

---
---
---
example usage from NA

