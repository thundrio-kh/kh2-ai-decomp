---
---
---
name: trap_vector_angle
---
---
---
category: math
---
---
---
documentation level: complete
---
---
---
push vec1 ; (kn::FVector *)  (A vector)
push vec2 ; (kn::FVector *)  (A vector)
syscall 0, 84 ; trap_vector_angle (2 in, 1 out)
pop angle ; (float) 
---
---
---
description: Computes the angle between two vectors
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
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\G_EX250_0\g_ex.bdscript ()
obj\G_EX250_0_G\g_ex.bdscript ()
obj\G_EX250_0_R\g_ex.bdscript ()
obj\G_EX900_COMBAT\g_ex.bdscript ()
obj\G_EX900_COMBAT_HARD\g_ex.bdscript ()
obj\G_EX900_FINAL\g_ex.bdscript ()
obj\G_EX900_FLIGHT\g_ex.bdscript ()
obj\G_EX900_FLIGHT_HARD\g_ex.bdscript ()
---
---
---
example usage from obj\F_EH060\f_eh.bdscript
L3755:
 popToSp 0
 syscall 1, 306 ; trap_camera_at (0 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 305 ; trap_camera_eye (0 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromFSp 0
 gosub 16, L3430
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 305 ; trap_camera_eye (0 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 32
 pushFromPSp 16
 syscall 0, 84 ; trap_vector_angle (2 in, 1 out)
 pushImmf 1.047198
 subf 
 infzf 
 ret 
