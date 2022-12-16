---
---
---
name: trap_obj_get_lightcycle_movement
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
push unk1 ; (unknown)  (memcpyToSp: 16, 16)
push unk2 ; (unknown)  (pushFromPSp: 16)
push unk3 ; (unknown)  (pushImmf: 100)
syscall 1, 269 ; trap_obj_get_lightcycle_movement (3 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::get_lightcycle_movement(YS::OBJ_195 *const this, YS::OBJ_195 *target, YS::OBJ_126 *a3, double range)
/----- (00000000004FCC84) ----------------------------------------------------
void __fastcall YS::trap_obj_get_lightcycle_movement(BD_VALUE_21 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r27
  __int64 v4; // r29
  YS::OBJ_195 *v5; // r28
  __int64 back_chain; // [sp+0h] [-B0h]
  kn::FVector v7; // [sp+70h] [-40h] BYREF

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
  v4 = *(unsigned int *)&(*args)[4];
  v5 = (YS::OBJ_195 *)*(unsigned int *)(v2 + 4);
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v4 & 3) != 0 )
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
  YS::OBJ::get_lightcycle_movement(
    (YS::OBJ_195 *const)&v7,
    v5,
    (YS::OBJ_126 *)*(unsigned int *)(v4 + 4),
    *(float *)&(*args)[8]);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v7);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 4FCCB4: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;
->
/----- (00000000004D0E30) ----------------------------------------------------
void __fastcall YS::OBJ::get_lightcycle_movement(YS::OBJ_195 *const this, YS::OBJ_195 *target, YS::OBJ_126 *a3, double range)
{
  FLOAT *v7; // r30
  float *v8; // r3
  double v9; // fp2
  double v10; // fp3
  double v11; // fp4
  FLOAT *v12; // r3
  double v13; // fp2
  double v14; // fp3
  double v15; // fp4
  Axa::FVECTOR4 *v16; // r3
  float *v17; // r3
  double v18; // fp25
  double v19; // fp26
  double v20; // fp27
  double v21; // fp28
  FLOAT *v22; // r3
  double v23; // fp2
  double v24; // fp3
  double v25; // fp4
  Axa::FVECTOR4 *v26; // r3
  double v27; // fp4
  Axa::FVECTOR4 *v28; // r3
  FLOAT *v29; // r3
  double v30; // fp2
  double v31; // fp3
  double v32; // fp4
  Axa::FVECTOR4 *v33; // r3
  double v34; // fp4
  Axa::FVECTOR4 *v35; // r3
  Axa::FVECTOR4 *v36; // r3
  Axa::FVECTOR4 v39; // [sp+70h] [-200h] BYREF
  kn::FVector v40; // [sp+80h] [-1F0h] BYREF
  kn::FVector v41; // [sp+90h] [-1E0h] BYREF
  Axa::FVECTOR4 v42; // [sp+A0h] [-1D0h] BYREF
  Axa::FVECTOR4 v43; // [sp+B0h] [-1C0h] BYREF
  Axa::FVECTOR4 v44; // [sp+C0h] [-1B0h] BYREF
  Axa::FVECTOR4 v45; // [sp+D0h] [-1A0h] BYREF
  kn::FVector v46; // [sp+E0h] [-190h] BYREF
  kn::FVector v47; // [sp+F0h] [-180h] BYREF
  kn::FVector v48; // [sp+100h] [-170h] BYREF
  kn::FVector v49; // [sp+110h] [-160h] BYREF
  Axa::FVECTOR4 v50; // [sp+120h] [-150h] BYREF
  Axa::FVECTOR4 v51; // [sp+130h] [-140h] BYREF
  Axa::FVECTOR4 v52; // [sp+140h] [-130h] BYREF
  Axa::FVECTOR4 v53; // [sp+150h] [-120h] BYREF
  float v54[4]; // [sp+160h] [-110h] BYREF
  Axa::FVECTOR4 v55; // [sp+170h] [-100h] BYREF
  Axa::FVECTOR4 v56; // [sp+180h] [-F0h] BYREF
  Axa::FVECTOR4 v57; // [sp+190h] [-E0h] BYREF
  float v58[4]; // [sp+1A0h] [-D0h] BYREF
  Axa::FVECTOR4 v59; // [sp+1B0h] [-C0h] BYREF
  Axa::FVECTOR4 v60; // [sp+1C0h] [-B0h] BYREF
  float v61[4]; // [sp+1D0h] [-A0h] BYREF
  float v62[4]; // [sp+1E0h] [-90h] BYREF
  Axa::FVECTOR4 v63; // [sp+1F0h] [-80h] BYREF

  YS::OBJ::get_dir((YS::OBJ_125 *const)&v42, target);
  v7 = (FLOAT *)YS::OBJ::get_pos(target);
  v61[0] = v42.x;
  v61[1] = v42.y;
  v61[2] = v42.z;
  v61[3] = v42.w;
  v8 = (float *)Axa::FVECTOR4::operator*=((__int64)v61);
  v9 = v8[1];
  v10 = v8[2];
  v11 = v8[3];
  v62[0] = *v8;
  v62[1] = v9;
  v62[2] = v10;
  v62[3] = v11;
  v12 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v62);
  v13 = v12[1];
  v14 = v12[2];
  v15 = v12[3];
  v39.x = *v12;
  v39.y = v13;
  v39.z = v14;
  v39.w = v15;
  v63.x = *v7;
  v63.y = v7[1];
  v63.z = v7[2];
  v63.w = v7[3];
  v16 = Axa::FVECTOR4::operator+=(&v63, &v39);
  v43.x = v16->x;
  v43.y = v16->y;
  v43.z = v16->z;
  v43.w = v16->w;
  YS::OBJ::get_dir((YS::OBJ_125 *const)&v44, a3);
  v17 = (float *)YS::OBJ::get_pos(a3);
  v18 = *v17;
  v19 = v17[1];
  v20 = v17[2];
  v21 = v17[3];
  v45.z = 0.0;
  v45.y = 0.0;
  v45.x = 0.0;
  v45.w = 1.0;
  v46.z = 0.0;
  v46.y = 0.0;
  v46.x = 0.0;
  v46.w = 1.0;
  v47.z = 0.0;
  v47.y = 0.0;
  v47.x = 0.0;
  v47.w = 1.0;
  *(_DWORD *)&(*this)[12] = 0;
  *(_DWORD *)&(*this)[8] = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_DWORD *)this = 0;
  YS::MATH::VectorRotY(&v40, &v44, 1.5707964);
  kn::FVector::operator=((kn::FVector *const)&v45, &v40);
  v58[0] = v44.x;
  v58[1] = v44.y;
  v58[2] = v44.z;
  v58[3] = v44.w;
  v22 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v58);
  v23 = v22[1];
  v24 = v22[2];
  v25 = v22[3];
  v39.x = *v22;
  v39.y = v23;
  v39.z = v24;
  v39.w = v25;
  v59.x = v18;
  v59.y = v19;
  v59.z = v20;
  v59.w = v21;
  v26 = Axa::FVECTOR4::operator-=(&v59, &v39);
  v41.x = v26->x;
  v41.y = v26->y;
  v41.z = v26->z;
  v27 = v26->w;
  v60.x = v41.x;
  v41.w = v27;
  v60.y = v41.y;
  v60.z = v41.z;
  v60.w = v27;
  v28 = Axa::FVECTOR4::operator-=(&v60, &v43);
  v40.x = v28->x;
  v40.y = v28->y;
  v40.z = v28->z;
  v40.w = v28->w;
  kn::FVector::operator=(&v46, &v40);
  Axa::outerProductXYZ(&v57, &v45, &v46);
  v41.x = v57.x;
  v41.y = v57.y;
  v41.z = v57.z;
  v41.w = v57.w;
  kn::FVector::operator=(&v47, &v41);
  if ( v47.y >= 0.0 )
  {
    v54[0] = v44.x;
    v54[1] = v44.y;
    v54[2] = v44.z;
    v54[3] = v44.w;
    v29 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v54);
    v30 = v29[1];
    v31 = v29[2];
    v32 = v29[3];
    v50.x = *v29;
    v50.y = v30;
    v50.z = v31;
    v50.w = v32;
    v55.x = v18;
    v55.y = v19;
    v55.z = v20;
    v55.w = v21;
    v33 = Axa::FVECTOR4::operator+=(&v55, &v50);
    v49.x = v33->x;
    v49.y = v33->y;
    v49.z = v33->z;
    v34 = v33->w;
    v56.x = v49.x;
    v49.w = v34;
    v56.y = v49.y;
    v56.z = v49.z;
    v56.w = v34;
    v35 = Axa::FVECTOR4::operator-=(&v56, &v43);
    v48.x = v35->x;
    v48.y = v35->y;
    v48.z = v35->z;
    v48.w = v35->w;
    kn::FVector::operator=(&v46, &v48);
    Axa::outerProductXYZ(&v53, &v45, &v46);
    v49.x = v53.x;
    v49.y = v53.y;
    v49.z = v53.z;
    v49.w = v53.w;
    kn::FVector::operator=(&v47, &v49);
    if ( v47.y > 0.0 )
      *(_DWORD *)&(*this)[8] = -1082130432;
  }
  else
  {
    *(_DWORD *)&(*this)[8] = 1065353216;
  }
  v52.x = v18;
  v52.y = v19;
  v52.z = v20;
  v52.w = v21;
  v36 = Axa::FVECTOR4::operator-=(&v52, &v43);
  v41.x = v36->x;
  v41.y = v36->y;
  v41.z = v36->z;
  v41.w = v36->w;
  kn::FVector::operator=((kn::FVector *const)&v45, &v41);
  *(float *)&(*this)[12] = Axa::FVECTOR4::normalize(&v45);
  Axa::outerProductXYZ(&v51, &v45, &v42);
  v41.x = v51.x;
  v41.y = v51.y;
  v41.z = v51.z;
  v41.w = v51.w;
  kn::FVector::operator=(&v47, &v41);
  _FP1 = v47.y - 0.0;
  __asm { fsel      f1, f1, f2, f31 }
  *(float *)&(*this)[0] = _FP1;
}
// 7FED50: using guessed type void *__ptr32 YS::Pref;
// A0AD74: using guessed type float dk::Vsync::s_frameTime;


---
---
---
appears in:
obj\M_EX600_LC\m_ex.bdscript ((M) Magnum Loader (white))
obj\M_EX600_LC_ATK\m_ex.bdscript ((M) Magnum Loader (blue))
obj\M_EX600_LC_CHG\m_ex.bdscript ((M) Magnum Loader (yellow))
obj\M_EX600_LC_GRD\m_ex.bdscript ((M) Magnum Loader (green))
---
---
---
example usage from obj\M_EX600_LC\m_ex.bdscript
L62:
 pushFromFSp 0
 gosub 4, L88
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImmf 100
 syscall 1, 269 ; trap_obj_get_lightcycle_movement (3 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSpVal 16, 112
 halt 
 jmp L62
