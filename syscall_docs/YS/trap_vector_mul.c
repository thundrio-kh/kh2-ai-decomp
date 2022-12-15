---
---
---
name: trap_vector_mul
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
syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004B70D4) ----------------------------------------------------
void __fastcall YS::trap_vector_mul(BD_VALUE_16 *args)
{
  float *v2; // r5
  FLOAT *v3; // r3
  double v4; // fp2
  double v5; // fp3
  double v6; // fp4
  kn::FVector v7; // [sp+70h] [-30h] BYREF
  float v8[4]; // [sp+80h] [-20h] BYREF

  v2 = (float *)(*args)[0];
  if ( !LS_67_LV_10_0 )
  {
    LS_67_LV_10_0 = 1;
    LS_67_result.z = 0.0;
    LS_67_result.y = 0.0;
    LS_67_result.x = 0.0;
    LS_67_result.w = 1.0;
  }
  v8[0] = *v2;
  v8[1] = v2[1];
  v8[2] = v2[2];
  v8[3] = v2[3];
  v3 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v8);
  v4 = v3[1];
  v5 = v3[2];
  v6 = v3[3];
  v7.x = *v3;
  v7.y = v4;
  v7.z = v5;
  v7.w = v6;
  kn::FVector::operator=(&LS_67_result, &v7);
  *(_DWORD *)args = (unsigned int)&LS_67_result;
}
// 2AB0820: using guessed type char LS_67_LV_10_0;

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

