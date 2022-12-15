---
---
---
name: trap_vector_draw
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
push unk4 ; (unknown) 
push unk5 ; (unknown) 
syscall 0, 90 ; trap_vector_draw (5 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Axa::FMATRIX44::unit(Axa::FMATRIX44 *const this)
kn::FMatrix *__fastcall kn::FMatrix::scaling(kn::FMatrix *const this, const kn::FVector *v)
void __fastcall YS::MODEL::DrawSphere(const kn::FMatrix *m, u_int color, int delay)
/----- (00000000004B784C) ----------------------------------------------------
void __fastcall YS::trap_vector_draw(BD_VALUE_16 *args)
{
  __int64 v2; // r6
  u_int v3; // r4
  int v4; // r5
  int v5; // r7
  int v6; // r8
  kn::FVector v7; // [sp+70h] [-60h] BYREF
  Axa::FMATRIX44 v8; // [sp+80h] [-50h] BYREF

  Axa::FMATRIX44::unit(&v8);
  Axa::FMATRIX44::unit(&v8);
  v7.x = *(float *)&(*args)[4];
  v7.y = v7.x;
  v7.z = v7.x;
  v7.w = 0.0;
  kn::FMatrix::scaling((kn::FMatrix *const)&v8, &v7);
  kn::FVector::operator=((kn::FVector *const)&v8.v3, (const kn::FVector *)(*args)[0]);
  v2 = 4LL;
  v3 = 128;
  v4 = 16;
  *(_DWORD *)((unsigned int)&v8.v3 + 12) = 1065353216;
  do
  {
    v5 = 0;
    v6 = *(_DWORD *)&(*args)[v4];
    if ( v6 >= 0 )
    {
      v5 = *(_DWORD *)&(*args)[v4];
      if ( v6 > 255 )
        v5 = 255;
    }
    --v2;
    v4 -= 4;
    v3 = (v3 << 8) + v5;
  }
  while ( (int)v2 >= 2 );
  YS::MODEL::DrawSphere((const kn::FMatrix *)&v8, v3, 0);
}

//COMPLICATED Axa::FMATRIX44::unit kn::FMatrix::scaling YS::MODEL::DrawSphere
->
/----- (00000000000202B0) ----------------------------------------------------
void __fastcall Axa::FMATRIX44::unit(Axa::FMATRIX44 *const this)
{
  _R5 = 16;
  _R4 = Axa::FMATRIX44::unit;
  _R7 = 32;
  _R9 = 48;
  _R6 = 16;
  _R8 = 32;
  __asm
  {
    lvx       v2, 0, r4
    lvx       v3, r5, r4
  }
  _R10 = 48;
  __asm
  {
    lvx       v4, r7, r4
    lvx       v5, r9, r4
    stvx      v2, 0, this
    stvx      v3, r6, this
    stvx      v4, r8, this
    stvx      v5, r10, this
  }
}
// 20270: using guessed type __int64 Axa::FMATRIX44::unit[2];


->
/----- (00000000000DB568) ----------------------------------------------------
kn::FMatrix *__fastcall kn::FMatrix::scaling(kn::FMatrix *const this, const kn::FVector *v)
{
  Axa::FVECTOR4::operator*=((__int64)this);
  Axa::FVECTOR4::operator*=((unsigned int)((_DWORD)this + 16));
  Axa::FVECTOR4::operator*=((unsigned int)((_DWORD)this + 32));
  return this;
}


->
/----- (00000000003F3C10) ----------------------------------------------------
void __fastcall YS::MODEL::DrawSphere(const kn::FMatrix *m, u_int color, int delay)
{
  YS::MODEL::Draw((YS::MODEL *)YS::Sphere, m, color, delay);
}


---
---
---
appears in:

---
---
---
example usage from NA

