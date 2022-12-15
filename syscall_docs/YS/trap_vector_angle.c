---
---
---
name: trap_vector_angle
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
syscall 0, 84 ; trap_vector_angle (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::MATH::VectorAngle(const kn::FVector *v1_0, const kn::FVector *v2_0)
/----- (00000000004B7810) ----------------------------------------------------
void __fastcall YS::trap_vector_angle(BD_VALUE_16 *args)
{
  *(float *)&(*args)[0] = YS::MATH::VectorAngle(
                            (const kn::FVector *)(*args)[0],
                            (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
->
/----- (00000000004C12E0) ----------------------------------------------------
float __fastcall YS::MATH::VectorAngle(const kn::FVector *v1_0, const kn::FVector *v2_0)
{
  double v2; // fp1

  v2 = Axa::InnerProductXYZ(v1_0, v2_0);
  if ( v2 >= 1.0 )
    return 0.0;
  if ( v2 > -1.0 )
    return f_acosf(v2);
  return 3.1415927;
}


---
---
---
appears in:

---
---
---
example usage from NA

