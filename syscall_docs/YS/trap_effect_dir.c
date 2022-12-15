---
---
---
name: trap_effect_dir
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
syscall 0, 54 ; trap_effect_dir (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
kn::FMatrix *__fastcall kn::FMatrix::rotateXYZ(kn::FMatrix *const this, const kn::FVector *radians)
/----- (00000000004B8A54) ----------------------------------------------------
void __fastcall YS::trap_effect_dir(BD_VALUE_16 *args)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r7
  __int64 v6; // r6
  __int64 v7; // r5
  __int64 v8; // r4
  FVECTOR *v9; // r3
  kn::FVector v10; // [sp+70h] [-70h] BYREF
  Axa::FVECTOR4 v11; // [sp+80h] [-60h] BYREF
  Axa::FMATRIX44 v12; // [sp+90h] [-50h] BYREF

  Axa::FMATRIX44::unit(&v12);
  if ( !LS_141_LV_37 )
  {
    LS_141_v.x = 0.0;
    LS_141_v.y = 0.0;
    LS_141_v.z = 1.0;
    LS_141_v.w = 0.0;
    LS_141_LV_37 = 1;
  }
  if ( !LS_141_LV_38 )
  {
    LS_141_LV_38 = 1;
    LS_141_result.z = 0.0;
    LS_141_result.y = 0.0;
    LS_141_result.x = 0.0;
    LS_141_result.w = 1.0;
  }
  Axa::FMATRIX44::unit(&v12);
  v9 = ryj::EFFECT::angle((ryj::EFFECT_144 *const)(*args)[0], v8, v7, v6, v5, v4, v3, v2);
  kn::FMatrix::rotateXYZ((kn::FMatrix *const)&v12, (const kn::FVector *)v9);
  Axa::FMATRIX44::operator*(&v11, &v12, &LS_141_v);
  v10.x = v11.x;
  v10.y = v11.y;
  v10.z = v11.z;
  v10.w = v11.w;
  kn::FVector::operator=(&LS_141_result, &v10);
  *(_DWORD *)args = (unsigned int)&LS_141_result;
}
// 4B8B00: variable 'v8' is possibly undefined
// 4B8B00: variable 'v7' is possibly undefined
// 4B8B00: variable 'v6' is possibly undefined
// 4B8B00: variable 'v5' is possibly undefined
// 4B8B00: variable 'v4' is possibly undefined
// 4B8B00: variable 'v3' is possibly undefined
// 4B8B00: variable 'v2' is possibly undefined
// 2AB08A0: using guessed type char LS_141_LV_37;
// 2AB08A8: using guessed type char LS_141_LV_38;
->
/----- (00000000000DBD58) ----------------------------------------------------
kn::FMatrix *__fastcall kn::FMatrix::rotateXYZ(kn::FMatrix *const this, const kn::FVector *radians)
{
  int v2; // r30
  double v4; // fp1
  double v14; // fp2
  double v15; // fp3
  double v16; // fp4
  double v17; // fp5
  double v18; // fp6
  double v19; // fp7
  double v20; // fp8
  double v21; // fp9
  double v22; // fp10
  double v23; // fp11
  double v24; // fp12
  double v25; // fp13
  double v26; // fp0
  double v27; // fp30
  double v28; // fp29
  double v29; // fp1
  double v39; // fp2
  double v40; // fp3
  double v41; // fp4
  double v42; // fp5
  double v43; // fp6
  double v44; // fp7
  double v45; // fp8
  double v46; // fp9
  double v47; // fp10
  double v48; // fp11
  double v49; // fp12
  double v50; // fp13
  double v51; // fp0
  double v52; // fp30
  double v53; // fp29
  double v54; // fp1
  double v64; // fp2
  double v65; // fp3
  double v66; // fp4
  double v67; // fp5
  double v68; // fp6
  double v69; // fp7
  double v70; // fp8
  double v71; // fp9
  double v72; // fp10
  double v73; // fp11
  double v74; // fp12
  double v75; // fp13
  double v76; // fp0
  double v77; // fp31
  double v78; // fp30
  __int16 v80; // [sp+70h] [-330h] BYREF
  Axa::FMATRIX44 v81; // [sp+B0h] [-2F0h] BYREF
  Axa::FMATRIX44 v82; // [sp+F0h] [-2B0h] BYREF
  __int16 v83[32]; // [sp+130h] [-270h] BYREF
  __int16 v84; // [sp+170h] [-230h] BYREF
  Axa::FMATRIX44 v85; // [sp+1B0h] [-1F0h] BYREF
  Axa::FMATRIX44 v86; // [sp+1F0h] [-1B0h] BYREF
  __int16 v87[32]; // [sp+230h] [-170h] BYREF
  __int16 v88; // [sp+270h] [-130h] BYREF
  Axa::FMATRIX44 v89; // [sp+2B0h] [-F0h] BYREF
  Axa::FMATRIX44 v90; // [sp+2F0h] [-B0h] BYREF
  __int16 v91[36]; // [sp+330h] [-70h] BYREF

  v2 = (int)radians;
  v4 = radians->x;
  if ( v4 != 0.0 )
  {
    if ( v4 <= 0.0 )
    {
      for ( ; v4 < -3.1415927; v4 = (float)((float)v4 + (float)6.2831855) )
        ;
    }
    else
    {
      for ( ; v4 > 3.1415927; v4 = (float)((float)v4 - (float)6.2831855) )
        ;
    }
    Axa::FMATRIX44::getRotMatrixX((__int64)v83);
    _R3 = 304;
    _R4 = 320;
    _R5 = 176;
    _R6 = 336;
    _R7 = 192;
    __asm { lvx       v2, r3, r1 }
    _R8 = 352;
    __asm { lvx       v3, r4, r1 }
    _R9 = 208;
    __asm { stvx      v2, r5, r1 }
    _R10 = 224;
    __asm
    {
      lvx       v2, r6, r1
      stvx      v3, r7, r1
      lvx       v3, r8, r1
      stvx      v2, r9, r1
      stvx      v3, r10, r1
    }
    Axa::FMATRIX44::operator*(&v82, &v81, this);
    v14 = v82.v0.y;
    v15 = v82.v0.z;
    v16 = v82.v0.w;
    v17 = v82.v1.x;
    v18 = v82.v1.y;
    v19 = v82.v1.z;
    v20 = v82.v1.w;
    v21 = v82.v2.x;
    v22 = v82.v2.y;
    v23 = v82.v2.z;
    v24 = v82.v2.w;
    v25 = v82.v3.x;
    v26 = v82.v3.y;
    v27 = v82.v3.z;
    v28 = v82.v3.w;
    if ( (_DWORD)this != (unsigned int)&v80 )
    {
      this->v0.x = v82.v0.x;
      this->v0.y = v14;
      this->v0.z = v15;
      this->v0.w = v16;
      *(float *)(unsigned int)((_DWORD)this + 16) = v17;
      *(float *)((unsigned int)((_DWORD)this + 16) + 4LL) = v18;
      *(float *)((unsigned int)((_DWORD)this + 16) + 8LL) = v19;
      *(float *)((unsigned int)((_DWORD)this + 16) + 0xCLL) = v20;
      *(float *)(unsigned int)((_DWORD)this + 32) = v21;
      *(float *)((unsigned int)((_DWORD)this + 32) + 4LL) = v22;
      *(float *)((unsigned int)((_DWORD)this + 32) + 8LL) = v23;
      *(float *)((unsigned int)((_DWORD)this + 32) + 0xCLL) = v24;
      *(float *)(unsigned int)((_DWORD)this + 48) = v25;
      *(float *)((unsigned int)((_DWORD)this + 48) + 4LL) = v26;
      *(float *)((unsigned int)((_DWORD)this + 48) + 8LL) = v27;
      *(float *)((unsigned int)((_DWORD)this + 48) + 0xCLL) = v28;
    }
  }
  v29 = *(float *)(unsigned int)(v2 + 4);
  if ( v29 != 0.0 )
  {
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
    Axa::FMATRIX44::getRotMatrixY((__int64)v87);
    _R3 = 560;
    _R4 = 576;
    _R5 = 432;
    _R6 = 592;
    _R7 = 448;
    __asm { lvx       v2, r3, r1 }
    _R8 = 608;
    __asm { lvx       v3, r4, r1 }
    _R9 = 464;
    __asm { stvx      v2, r5, r1 }
    _R10 = 480;
    __asm
    {
      lvx       v2, r6, r1
      stvx      v3, r7, r1
      lvx       v3, r8, r1
      stvx      v2, r9, r1
      stvx      v3, r10, r1
    }
    Axa::FMATRIX44::operator*(&v86, &v85, this);
    v39 = v86.v0.y;
    v40 = v86.v0.z;
    v41 = v86.v0.w;
    v42 = v86.v1.x;
    v43 = v86.v1.y;
    v44 = v86.v1.z;
    v45 = v86.v1.w;
    v46 = v86.v2.x;
    v47 = v86.v2.y;
    v48 = v86.v2.z;
    v49 = v86.v2.w;
    v50 = v86.v3.x;
    v51 = v86.v3.y;
    v52 = v86.v3.z;
    v53 = v86.v3.w;
    if ( (_DWORD)this != (unsigned int)&v84 )
    {
      this->v0.x = v86.v0.x;
      this->v0.y = v39;
      this->v0.z = v40;
      this->v0.w = v41;
      *(float *)(unsigned int)((_DWORD)this + 16) = v42;
      *(float *)((unsigned int)((_DWORD)this + 16) + 4LL) = v43;
      *(float *)((unsigned int)((_DWORD)this + 16) + 8LL) = v44;
      *(float *)((unsigned int)((_DWORD)this + 16) + 0xCLL) = v45;
      *(float *)(unsigned int)((_DWORD)this + 32) = v46;
      *(float *)((unsigned int)((_DWORD)this + 32) + 4LL) = v47;
      *(float *)((unsigned int)((_DWORD)this + 32) + 8LL) = v48;
      *(float *)((unsigned int)((_DWORD)this + 32) + 0xCLL) = v49;
      *(float *)(unsigned int)((_DWORD)this + 48) = v50;
      *(float *)((unsigned int)((_DWORD)this + 48) + 4LL) = v51;
      *(float *)((unsigned int)((_DWORD)this + 48) + 8LL) = v52;
      *(float *)((unsigned int)((_DWORD)this + 48) + 0xCLL) = v53;
    }
  }
  v54 = *(float *)(unsigned int)(v2 + 8);
  if ( v54 != 0.0 )
  {
    if ( v54 <= 0.0 )
    {
      for ( ; v54 < -3.1415927; v54 = (float)((float)v54 + (float)6.2831855) )
        ;
    }
    else
    {
      for ( ; v54 > 3.1415927; v54 = (float)((float)v54 - (float)6.2831855) )
        ;
    }
    Axa::FMATRIX44::getRotMatrixZ((__int64)v91);
    _R3 = 816;
    _R4 = 832;
    _R5 = 688;
    _R6 = 848;
    _R7 = 704;
    __asm { lvx       v2, r3, r1 }
    _R8 = 864;
    __asm { lvx       v3, r4, r1 }
    _R9 = 720;
    __asm { stvx      v2, r5, r1 }
    _R10 = 736;
    __asm
    {
      lvx       v2, r6, r1
      stvx      v3, r7, r1
      lvx       v3, r8, r1
      stvx      v2, r9, r1
      stvx      v3, r10, r1
    }
    Axa::FMATRIX44::operator*(&v90, &v89, this);
    v64 = v90.v0.y;
    v65 = v90.v0.z;
    v66 = v90.v0.w;
    v67 = v90.v1.x;
    v68 = v90.v1.y;
    v69 = v90.v1.z;
    v70 = v90.v1.w;
    v71 = v90.v2.x;
    v72 = v90.v2.y;
    v73 = v90.v2.z;
    v74 = v90.v2.w;
    v75 = v90.v3.x;
    v76 = v90.v3.y;
    v77 = v90.v3.z;
    v78 = v90.v3.w;
    if ( (_DWORD)this != (unsigned int)&v88 )
    {
      this->v0.x = v90.v0.x;
      this->v0.y = v64;
      this->v0.z = v65;
      this->v0.w = v66;
      *(float *)(unsigned int)((_DWORD)this + 16) = v67;
      *(float *)((unsigned int)((_DWORD)this + 16) + 4LL) = v68;
      *(float *)((unsigned int)((_DWORD)this + 16) + 8LL) = v69;
      *(float *)((unsigned int)((_DWORD)this + 16) + 0xCLL) = v70;
      *(float *)(unsigned int)((_DWORD)this + 32) = v71;
      *(float *)((unsigned int)((_DWORD)this + 32) + 4LL) = v72;
      *(float *)((unsigned int)((_DWORD)this + 32) + 8LL) = v73;
      *(float *)((unsigned int)((_DWORD)this + 32) + 0xCLL) = v74;
      *(float *)(unsigned int)((_DWORD)this + 48) = v75;
      *(float *)((unsigned int)((_DWORD)this + 48) + 4LL) = v76;
      *(float *)((unsigned int)((_DWORD)this + 48) + 8LL) = v77;
      *(float *)((unsigned int)((_DWORD)this + 48) + 0xCLL) = v78;
    }
  }
  return this;
}


---
---
---
appears in:

---
---
---
example usage from NA

