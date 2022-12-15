---
---
---
name: trap_strike_raid_calc_xyzrot
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
syscall 6, 68 ; trap_strike_raid_calc_xyzrot (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Axa::FMATRIX44::unit(Axa::FMATRIX44 *const this)
float __fastcall Axa::FVECTOR4::normalize(Axa::FVECTOR4 *const this)
Axa::FVECTOR4 *__fastcall Axa::outerProductXYZ(Axa::FVECTOR4 *retstr, const Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0)
void __fastcall kn::FMatrix::toRot(kn::FMatrix *const this, kn::FVector *rot)
/----- (00000000006283F8) ----------------------------------------------------
void __fastcall Ts::trap_strike_raid_calc_xyzrot(BD_VALUE_25 *args)
{
  FLOAT *v2; // r4
  __int64 v3; // r30
  FLOAT *v4; // r3
  double v5; // fp2
  double v6; // fp3
  double v7; // fp4
  kn::FVector v8; // [sp+70h] [-F0h] BYREF
  kn::FVector v9; // [sp+80h] [-E0h] BYREF
  Axa::FVECTOR4 v10; // [sp+90h] [-D0h] BYREF
  Axa::FVECTOR4 v11; // [sp+A0h] [-C0h] BYREF
  Axa::FVECTOR4 v12; // [sp+B0h] [-B0h] BYREF
  float v13[4]; // [sp+C0h] [-A0h] BYREF
  Axa::FVECTOR4 v14; // [sp+D0h] [-90h] BYREF
  Axa::FMATRIX44 v15; // [sp+E0h] [-80h] BYREF

  Axa::FMATRIX44::unit(&v15);
  v2 = (FLOAT *)(*args)[0];
  v10.x = *v2;
  v10.y = v2[1];
  v10.z = v2[2];
  v10.w = v2[3];
  v3 = *(unsigned int *)&(*args)[4];
  Axa::FVECTOR4::normalize(&v10);
  Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)v3);
  v10.w = 0.0;
  *(_DWORD *)(v3 + 12) = 0;
  if ( *(float *)v3 == v10.x && *(float *)(v3 + 4) == v10.y && *(float *)(v3 + 8) == v10.z && 0.0 == v10.w )
  {
    *(_QWORD *)v3 = 3212836864LL;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
  }
  Axa::FMATRIX44::unit(&v15);
  Axa::outerProductXYZ(&v14, (const Axa::FVECTOR4 *)v3, &v10);
  v8.x = v14.x;
  v8.y = v14.y;
  v8.z = v14.z;
  v8.w = v14.w;
  kn::FVector::operator=((kn::FVector *const)&v15, &v8);
  Axa::FVECTOR4::normalize(&v15.v0);
  v15.v0.w = 0.0;
  v13[0] = v10.x;
  v13[1] = v10.y;
  v13[2] = v10.z;
  v13[3] = v10.w;
  v4 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v13);
  v5 = v4[1];
  v6 = v4[2];
  v7 = v4[3];
  v9.x = *v4;
  v9.y = v5;
  v9.z = v6;
  v9.w = v7;
  kn::FVector::operator=((kn::FVector *const)&v15.v2, &v9);
  v15.v2.w = 0.0;
  Axa::outerProductXYZ(&v12, &v10, &v15.v0);
  v8.x = v12.x;
  v8.y = v12.y;
  v8.z = v12.z;
  v8.w = v12.w;
  kn::FVector::operator=((kn::FVector *const)v3, &v8);
  Axa::outerProductXYZ(&v11, &v15.v2, &v15.v0);
  v8.x = v11.x;
  v8.y = v11.y;
  v8.z = v11.z;
  v8.w = v11.w;
  kn::FVector::operator=((kn::FVector *const)&v15.v1, &v8);
  Axa::FVECTOR4::normalize(&v15.v1);
  v15.v1.w = 0.0;
  Ts::ResultVector = 0;
  dword_3EAD63C = 0;
  dword_3EAD638 = 0;
  dword_3EAD634 = 0;
  kn::FMatrix::toRot((kn::FMatrix *const)&v15, (kn::FVector *)&Ts::ResultVector);
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 3EAD630: using guessed type int Ts::ResultVector;
// 3EAD634: using guessed type int dword_3EAD634;
// 3EAD638: using guessed type int dword_3EAD638;
// 3EAD63C: using guessed type int dword_3EAD63C;

//COMPLICATED Axa::FMATRIX44::unit Axa::FVECTOR4::normalize Axa::outerProductXYZ kn::FMatrix::toRot
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
/----- (000000000001B040) ----------------------------------------------------
float __fastcall Axa::FVECTOR4::normalize(Axa::FVECTOR4 *const this)
{
  double v2; // fp1
  double v3; // fp4
  double v4; // fp2

  if ( LODWORD(this->x) )
  {
    if ( !LODWORD(this->y) && !LODWORD(this->z) )
    {
      v2 = this->x;
      if ( this->x < 0.0 )
      {
        v2 = -v2;
        this->x = -1.0;
      }
      else
      {
        this->x = 1.0;
      }
      return v2;
    }
  }
  else
  {
    if ( !LODWORD(this->y) )
    {
      if ( !LODWORD(this->z) )
        return 0.0;
      v2 = this->z;
      if ( this->z < 0.0 )
      {
        v2 = -v2;
        this->z = -1.0;
      }
      else
      {
        this->z = 1.0;
      }
      return v2;
    }
    if ( !LODWORD(this->z) )
    {
      v2 = this->y;
      if ( this->y < 0.0 )
      {
        v2 = -v2;
        this->y = -1.0;
      }
      else
      {
        this->y = 1.0;
      }
      return v2;
    }
  }
  v2 = Axa::FVECTOR4::getLength(this);
  if ( v2 != 0.0 )
  {
    v3 = (float)(this->y * (float)((float)1.0 / (float)v2));
    v4 = (float)(this->z * (float)((float)1.0 / (float)v2));
    this->x = this->x * (float)((float)1.0 / (float)v2);
    this->y = v3;
    this->z = v4;
  }
  return v2;
}


->
/----- (0000000000020950) ----------------------------------------------------
Axa::FVECTOR4 *__fastcall Axa::outerProductXYZ(Axa::FVECTOR4 *retstr, const Axa::FVECTOR4 *v0_0, const Axa::FVECTOR4 *v1_0)
{
  __asm { lvx       v3, 0, r4 }
  _R7 = 16;
  __asm { lvx       v4, 0, r5 }
  _R6 = (unsigned int)&loc_20000 + 2352;
  __asm { vspltisw  v2, 0 }
  _R4 = 4;
  _R5 = 8;
  __asm
  {
    lvx       v5, 0, r6
    lvx       v6, r7, r6
    vperm     v7, v3, v3, v5
    vperm     v8, v4, v4, v6
    vperm     v4, v4, v4, v5
  }
  _R6 = 12;
  __asm
  {
    vperm     v3, v3, v3, v6
    vmaddfp   v5, v7, v2, v8
    vnmsubfp  v3, v3, v5, v4
    vspltw    v4, v3, 0
    vspltw    v5, v3, 1
    vspltw    v3, v3, 2
    stvewx    v4, 0, r3
    stvewx    v5, r4, r3
    stvewx    v3, r5, r3
    stvewx    v2, r6, r3
  }
  return retstr;
}


->
/----- (00000000000DC2A8) ----------------------------------------------------
void __fastcall kn::FMatrix::toRot(kn::FMatrix *const this, kn::FVector *rot)
{
  int v2; // r31
  double v4; // fp31
  double v7; // fp1
  double v8; // fp3
  double v9; // fp31
  double v10; // fp28
  double v11; // fp1
  double v12; // fp30
  double v13; // fp1
  double v14; // fp1
  double v15; // fp2
  double v16; // fp27
  double v17; // fp1
  bool v18; // mr_fpscr48
  double v19; // fp2
  double v20; // fp3
  unsigned __int64 v21; // r31
  double v22; // fp3
  double v23; // fp4
  unsigned __int64 v24; // r30
  double v25; // fp4
  double v26; // fp5
  double v27; // fp2
  double v28; // fp3
  double v29; // fp4
  double v30; // fp31
  double v31; // fp1
  Axa::FVECTOR4 v32; // [sp+70h] [-60h] BYREF
  Axa::FVECTOR4 v33; // [sp+80h] [-50h] BYREF

  v2 = (int)this;
  v32.z = 0.0;
  v32.y = 0.0;
  v32.x = 0.0;
  v32.w = 1.0;
  v33.z = 0.0;
  v33.y = 0.0;
  v33.x = 0.0;
  v33.w = 1.0;
  v4 = *(float *)(unsigned int)((_DWORD)this + 8);
  if ( v4 >= -1.0 )
  {
    if ( v4 > 1.0 )
      v4 = 1.0;
  }
  else
  {
    v4 = -1.0;
  }
  _FP5 = (float)((float)(this->v0.x * this->v0.x)
               + (float)(*(float *)(unsigned int)((_DWORD)this + 4) * *(float *)(unsigned int)((_DWORD)this + 4)))
       - 0.0;
  __asm { fsel      f3, f5, f4, f3 }
  if ( __fsqrts(_FP3) <= 0.0000019073486 )
  {
    if ( v4 <= 0.0 )
    {
      v14 = f_atan2f(*(float *)(unsigned int)((_DWORD)this + 16), *(float *)(unsigned int)((_DWORD)this + 20));
      v15 = -v4;
      v16 = v14;
      if ( -v4 <= 1.0 )
      {
        v17 = -1.5707964;
        if ( v15 >= -1.0 )
          v17 = f_asinf(v15);
      }
      else
      {
        v17 = 1.5707964;
      }
      v10 = v17;
      v12 = v16;
    }
    else
    {
      v12 = f_atan2f(-*(float *)(unsigned int)((_DWORD)this + 16), *(float *)(unsigned int)((_DWORD)this + 20));
      v13 = -v4;
      if ( -v4 <= 1.0 )
      {
        v10 = -1.5707964;
        if ( v13 >= -1.0 )
          v10 = f_asinf(v13);
      }
      else
      {
        v10 = 1.5707964;
      }
    }
    v18 = v4 < 0.0;
    v9 = (float)((float)v12 * (float)0.5);
    v11 = v9;
    if ( v18 )
      v9 = -v9;
  }
  else
  {
    v7 = f_atan2f(*(float *)(unsigned int)((_DWORD)this + 4), this->v0.x);
    v8 = -v4;
    v9 = v7;
    if ( v8 <= 1.0 )
    {
      v10 = -1.5707964;
      if ( v8 >= -1.0 )
        v10 = f_asinf(v8);
    }
    else
    {
      v10 = 1.5707964;
    }
    v11 = f_atan2f(*(float *)(unsigned int)(v2 + 24), *(float *)(unsigned int)(v2 + 40));
  }
  v19 = rot->x;
  v20 = (float)((float)v11 - rot->x);
  if ( v20 <= 0.0 )
  {
    for ( ; v20 < -3.1415927; v20 = (float)((float)v20 + (float)6.2831855) )
      ;
  }
  else
  {
    for ( ; v20 > 3.1415927; v20 = (float)((float)v20 - (float)6.2831855) )
      ;
  }
  v32.x = v20;
  v21 = (unsigned int)((_DWORD)rot + 4);
  v22 = *(float *)v21;
  v23 = (float)((float)v10 - *(float *)v21);
  if ( v23 <= 0.0 )
  {
    for ( ; v23 < -3.1415927; v23 = (float)((float)v23 + (float)6.2831855) )
      ;
  }
  else
  {
    for ( ; v23 > 3.1415927; v23 = (float)((float)v23 - (float)6.2831855) )
      ;
  }
  v32.y = v23;
  v24 = (unsigned int)((_DWORD)rot + 8);
  v25 = *(float *)v24;
  v26 = (float)((float)v9 - *(float *)v24);
  if ( v26 <= 0.0 )
  {
    for ( ; v26 < -3.1415927; v26 = (float)((float)v26 + (float)6.2831855) )
      ;
  }
  else
  {
    for ( ; v26 > 3.1415927; v26 = (float)((float)v26 - (float)6.2831855) )
      ;
  }
  v32.z = v26;
  v27 = (float)((float)((float)v11 + (float)3.1415927) - (float)v19);
  if ( v27 <= 0.0 )
  {
    for ( ; v27 < -3.1415927; v27 = (float)((float)v27 + (float)6.2831855) )
      ;
  }
  else
  {
    for ( ; v27 > 3.1415927; v27 = (float)((float)v27 - (float)6.2831855) )
      ;
  }
  v33.x = v27;
  v28 = (float)((float)((float)3.1415927 - (float)v10) - (float)v22);
  if ( v28 <= 0.0 )
  {
    for ( ; v28 < -3.1415927; v28 = (float)((float)v28 + (float)6.2831855) )
      ;
  }
  else
  {
    for ( ; v28 > 3.1415927; v28 = (float)((float)v28 - (float)6.2831855) )
      ;
  }
  v33.y = v28;
  v29 = (float)((float)((float)v9 + (float)3.1415927) - (float)v25);
  if ( v29 <= 0.0 )
  {
    for ( ; v29 < -3.1415927; v29 = (float)((float)v29 + (float)6.2831855) )
      ;
  }
  else
  {
    for ( ; v29 > 3.1415927; v29 = (float)((float)v29 - (float)6.2831855) )
      ;
  }
  v33.z = v29;
  v30 = Axa::InnerProductXYZ(&v32, &v32);
  if ( v30 > Axa::InnerProductXYZ(&v33, &v33) )
  {
    rot->x = v33.x + rot->x;
    *(float *)v21 = v33.y + *(float *)v21;
    v31 = v33.z;
  }
  else
  {
    rot->x = v32.x + rot->x;
    *(float *)v21 = v32.y + *(float *)v21;
    v31 = v32.z;
  }
  *(float *)v24 = (float)v31 + *(float *)v24;
}


---
---
---
appears in:

---
---
---
example usage from NA

