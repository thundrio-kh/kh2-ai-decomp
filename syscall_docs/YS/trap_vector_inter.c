---
---
---
name: trap_vector_inter
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
syscall 0, 78 ; trap_vector_inter (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Axa::InterVector(Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0, const Axa::FVECTOR4 *v2_0, double r)
/----- (00000000004B76CC) ----------------------------------------------------
void __fastcall YS::trap_vector_inter(BD_VALUE_16 *args)
{
  Axa::InterVector(
    (Axa::FVECTOR4 *)&YS::ResultVector,
    (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[4],
    (const Axa::FVECTOR4 *)(*args)[0],
    *(float *)&(*args)[8]);
  *(_DWORD *)args = (unsigned int)&YS::ResultVector;
}
// 2AB06C0: using guessed type int YS::ResultVector;
->
/----- (000000000001BD70) ----------------------------------------------------
void __fastcall Axa::InterVector(Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0, const Axa::FVECTOR4 *v2_0, double r)
{
  float *v6; // r3
  double v7; // fp30
  double v8; // fp29
  double v9; // fp28
  double v10; // fp27
  FLOAT *v11; // r3
  double v12; // fp2
  double v13; // fp3
  double v14; // fp4
  Axa::FVECTOR4 *v15; // r3
  double v16; // fp2
  double v17; // fp3
  double v18; // fp4
  Axa::FVECTOR4 v19; // [sp+70h] [-80h] BYREF
  float v20[4]; // [sp+80h] [-70h] BYREF
  float v21[4]; // [sp+90h] [-60h] BYREF
  Axa::FVECTOR4 v22; // [sp+A0h] [-50h] BYREF

  v21[0] = v1_0->x;
  v21[1] = v1_0->y;
  v21[2] = v1_0->z;
  v21[3] = v1_0->w;
  v6 = (float *)Axa::FVECTOR4::operator*=((__int64)v21);
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v10 = v6[3];
  v20[0] = v2_0->x;
  v20[1] = v2_0->y;
  v20[2] = v2_0->z;
  v20[3] = v2_0->w;
  v11 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v20);
  v12 = v11[1];
  v13 = v11[2];
  v14 = v11[3];
  v19.x = *v11;
  v19.y = v12;
  v19.z = v13;
  v19.w = v14;
  v22.x = v7;
  v22.y = v8;
  v22.z = v9;
  v22.w = v10;
  v15 = Axa::FVECTOR4::operator+=(&v22, &v19);
  v16 = v15->y;
  v17 = v15->z;
  v18 = v15->w;
  v0_0->x = v15->x;
  v0_0->y = v16;
  v0_0->z = v17;
  v0_0->w = v18;
}


---
---
---
appears in:

---
---
---
example usage from NA

