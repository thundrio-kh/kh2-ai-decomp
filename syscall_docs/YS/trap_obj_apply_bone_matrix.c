---
---
---
name: trap_obj_apply_bone_matrix
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
syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
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
float __fastcall YS::OBJ::get_bone_matrix(YS::OBJ_125 *const this, int bone, kn::FMatrix *m)
/----- (0000000000505E28) ----------------------------------------------------
void __fastcall YS::trap_obj_apply_bone_matrix(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 back_chain; // [sp+0h] [-F0h]
  kn::FVector v5; // [sp+70h] [-80h] BYREF
  Axa::FVECTOR4 v6; // [sp+80h] [-70h] BYREF
  Axa::FMATRIX44 v7; // [sp+90h] [-60h] BYREF

  Axa::FMATRIX44::unit(&v7);
  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::OBJ::get_bone_matrix((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), *(_DWORD *)&(*args)[4], (kn::FMatrix *)&v7);
  Axa::FMATRIX44::operator*(&v6, &v7, (const Axa::FVECTOR4 *)*(unsigned int *)&(*args)[8]);
  v5.x = v6.x;
  v5.y = v6.y;
  v5.z = v6.z;
  v5.w = v6.w;
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 505E60: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;

//COMPLICATED Axa::FMATRIX44::unit YS::OBJ::get_bone_matrix
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
/----- (000000000045E240) ----------------------------------------------------
float __fastcall YS::OBJ::get_bone_matrix(YS::OBJ_125 *const this, int bone, kn::FMatrix *m)
{
  int v3; // r29
  double v6; // fp31
  unsigned __int64 v7; // r28
  __int64 v8; // r30
  BOOL v9; // r4
  unsigned int v10; // r3
  unsigned int v11; // r29
  const YS::COLLISION_ELEM_0 *v12; // r30
  YS::COLLISION_DATA_0 *v13; // r3
  BOOL v14; // r4
  double v15; // fp2
  double v16; // fp3
  double v17; // fp4
  double v18; // fp5
  double v19; // fp1
  YS::COLLISION_DATA_0 *v20; // r3
  const YS::COLLISION_ELEM_0 *v21; // r29
  BOOL v22; // r4
  int v24; // r3
  double v25; // fp31
  __int64 back_chain; // [sp+0h] [-1C0h]
  Axa::FVECTOR4 v28; // [sp+70h] [-150h] BYREF
  kn::FVector v29; // [sp+80h] [-140h] BYREF
  kn::FVector v30; // [sp+90h] [-130h] BYREF
  Axa::FVECTOR4 v31; // [sp+A0h] [-120h] BYREF
  Axa::FVECTOR4 v32; // [sp+B0h] [-110h] BYREF
  int v33; // [sp+CCh] [-F4h]
  kn::FVector v34; // [sp+D0h] [-F0h] BYREF
  int v35; // [sp+ECh] [-D4h]
  float v36; // [sp+F0h] [-D0h]
  float v37; // [sp+F4h] [-CCh]
  float v38; // [sp+F8h] [-C8h]
  float v39; // [sp+FCh] [-C4h]
  kn::FMatrix v40; // [sp+100h] [-C0h] BYREF
  Axa::FMATRIX44 v41; // [sp+140h] [-80h] BYREF

  v3 = bone;
  v6 = 0.0;
  v28.z = 0.0;
  v28.y = 0.0;
  v28.x = 0.0;
  v28.w = 1.0;
  v33 = 0;
  v34.z = 0.0;
  v34.y = 0.0;
  v34.x = 0.0;
  v34.w = 1.0;
  v7 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( bone < 0 || bone >= 0x10000 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "bone >= 0 && bone < 0x10000",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      758LL,
      "get_bone_matrix",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 758);
  }
  if ( (v3 & 0x4000) != 0 )
  {
    if ( v3 > 16386 )
    {
      if ( v3 <= 16390 )
      {
        if ( v3 <= 16388 )
        {
          v6 = YS::OBJ::get_bone_matrix_weapon(this, ((_BYTE)v3 - 3) & 1, m);
          v28.y = 0.0;
          v28.z = 0.0;
          v28.w = 1.0;
          v28.x = v6;
          Axa::FMATRIX44::operator*(&v31, m, &v28);
          v30.x = v31.x;
          v30.y = v31.y;
          v30.z = v31.z;
          v30.w = v31.w;
          kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)m + 48), &v30);
        }
        else
        {
          YS::OBJ::get_bone_matrix_weapon(this, ((_BYTE)v3 - 5) & 1, m);
        }
        return v6;
      }
      if ( v3 <= 16392 )
      {
        v19 = YS::OBJ::get_bone_matrix_weapon(this, ((_BYTE)v3 - 7) & 1, m);
        v28.y = 0.0;
        v28.z = 0.0;
        v28.w = 1.0;
        v6 = (float)((float)v19 * (float)0.5);
        v28.x = (float)v19 * (float)0.5;
        Axa::FMATRIX44::operator*(&v32, m, &v28);
        v30.x = v32.x;
        v30.y = v32.y;
        v30.z = v32.z;
        v30.w = v32.w;
        kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)m + 48), &v30);
        return v6;
      }
      if ( v3 <= 16393 )
      {
        kn::FMatrix::operator=(m, (const kn::FMatrix *)(unsigned int)((_DWORD)this + 64));
        v20 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
        v21 = 0LL;
        if ( (_DWORD)v20 )
        {
          do
          {
            v21 = (const YS::COLLISION_ELEM_0 *)YS::COLLISION_DATA::next_elem(v20, 9, v21);
            if ( !(_DWORD)v21 )
              break;
            v22 = YS::OBJ::is_enable_collision(this, v21->Group);
            v20 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
          }
          while ( !v22 );
          if ( (_DWORD)v21 )
          {
            YS::COLLISION::set((YS::COLLISION_33 *const)(&v32 + 1), this, v21);
            kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)m + 48), &v34);
          }
        }
        return v6;
      }
    }
    else
    {
      if ( v3 > 0x4000 )
      {
        if ( v3 <= 16385 )
        {
          kn::FMatrix::operator=(m, (const kn::FMatrix *)(unsigned int)((_DWORD)this + 64));
          v11 = (_DWORD)m + 48;
          v12 = 0LL;
          v13 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
          v35 = 0;
          v38 = 0.0;
          v37 = 0.0;
          v36 = 0.0;
          v39 = 1.0;
          if ( !(_DWORD)v13 )
            goto LABEL_27;
          do
          {
            v12 = (const YS::COLLISION_ELEM_0 *)YS::COLLISION_DATA::next_elem(v13, 1, v12);
            if ( !(_DWORD)v12 )
              break;
            v14 = YS::OBJ::is_enable_collision(this, v12->Group);
            v13 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
          }
          while ( !v14 );
          if ( (_DWORD)v12 )
          {
            YS::COLLISION::set((YS::COLLISION_33 *const)(&v34 + 1), this, v12);
            v15 = v36;
            v16 = v37;
            v17 = v38;
            v18 = v39;
          }
          else
          {
LABEL_27:
            v15 = *(float *)(unsigned int)((_DWORD)this + 1344);
            v16 = *(float *)((unsigned int)((_DWORD)this + 1344) + 4LL);
            v17 = *(float *)((unsigned int)((_DWORD)this + 1344) + 8LL);
            v18 = *(float *)((unsigned int)((_DWORD)this + 1344) + 0xCLL);
          }
          v29.x = v15;
          v29.y = v16;
          v29.z = v17;
          v29.w = v18;
          kn::FVector::operator=((kn::FVector *const)v11, &v29);
          *(_DWORD *)(v11 + 0xCLL) = 1065353216;
        }
        else
        {
          kn::FMatrix::operator=(m, (const kn::FMatrix *)(unsigned int)((_DWORD)this + 1712));
        }
        return v6;
      }
      if ( v3 > 0x3FFF )
      {
        kn::FMatrix::operator=(m, (const kn::FMatrix *)(unsigned int)((_DWORD)this + 64));
        v8 = (unsigned int)((_DWORD)m + 48);
        if ( !(_DWORD)this )
        {
          ErrorPrintf(
            "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
            "this != NULL",
            "common",
            "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
            1306LL,
            "get_pos",
            (const void *)v7);
          ErrorRaise();
          Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1306);
        }
        v9 = YS::OBJ::is_attach(this);
        v10 = (_DWORD)this + 1344;
        if ( v9 )
          v10 = (_DWORD)this + 112;
        kn::FVector::operator=((kn::FVector *const)v8, (const kn::FVector *)v10);
        *(_DWORD *)(v8 + 12) = 1065353216;
        return v6;
      }
    }
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      806LL,
      "get_bone_matrix",
      (const void *)v7);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 806);
    return v6;
  }
  if ( (v3 & 0x8000) != 0 )
  {
    v24 = ((__int64 (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[2224]
                                                               + 0x18LL))();
    if ( v24 < 0 )
      v24 = 0;
    v3 = v24;
  }
  v25 = kn::ModelObj::getPartMatrix((kn::ModelObj_9 *const)*(unsigned int *)&(*this)[1648], v3, m);
  Axa::FMATRIX44::operator*(&v41, (const Axa::FMATRIX44 *const)(unsigned int)((_DWORD)this + 1712), m);
  v40.v0.x = v41.v0.x;
  v40.v0.y = v41.v0.y;
  v40.v0.z = v41.v0.z;
  v40.v0.w = v41.v0.w;
  v40.v1.x = v41.v1.x;
  v40.v1.y = v41.v1.y;
  v40.v1.z = v41.v1.z;
  v40.v1.w = v41.v1.w;
  v40.v2.x = v41.v2.x;
  v40.v2.y = v41.v2.y;
  v40.v2.z = v41.v2.z;
  v40.v2.w = v41.v2.w;
  v40.v3.x = v41.v3.x;
  v40.v3.y = v41.v3.y;
  v40.v3.z = v41.v3.z;
  v40.v3.w = v41.v3.w;
  kn::FMatrix::operator=(m, &v40);
  return v25;
}
// 45E2B8: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

