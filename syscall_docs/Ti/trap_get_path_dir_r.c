---
---
---
name: trap_get_path_dir_r
---
---
---
category: path
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
push path ; (Ti::Path_3) (Path object)
push a5 ; (float) (unknown) 
syscall 5, 25 ; trap_get_path_dir_r (3 in, 1 out)
push dir_r ; (kn::FVector *)  (A direction vector)
---
---
---
description: Get the reverse direction of a path
---
---
---
decompiled code:
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
void __fastcall YS::OBJ::get_dir(YS::OBJ_125 *const this, YS::OBJ_126 *a2)
void __fastcall Ti::Path::get_dir(Ti::Path_3 *a1, const kn::FVector *a2, const kn::FVector *a3, double a4, double a5)
/----- (0000000000658C48) ----------------------------------------------------
void __fastcall Ti::trap_get_path_dir_r(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r29
  const kn::FVector *v5; // r30
  const kn::FVector *v6; // r25
  __int64 back_chain; // [sp+0h] [-D0h]
  kn::FVector v8; // [sp+70h] [-60h] BYREF
  float v9[6]; // [sp+80h] [-50h] BYREF

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
  v4 = *(unsigned int *)(v2 + 4);
  v5 = (const kn::FVector *)*(unsigned int *)(v4 + 0x508);
  if ( (_DWORD)v5 )
  {
    v6 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)v4);
    YS::OBJ::get_dir((YS::OBJ_125 *const)v9, (YS::OBJ_126 *)v4);
    Ti::Path::get_dir((Ti::Path_3 *const)&v8, v5, v6, v9, *(float *)&(*args)[4], *(float *)&(*args)[8]);
    kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v8);
    *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
  }
}
// 658C6C: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;

//COMPLICATED YS::OBJ::get_pos YS::OBJ::get_dir Ti::Path::get_dir
->
/----- (000000000045E178) ----------------------------------------------------
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
{
  unsigned __int64 result; // r3
  __int64 back_chain; // [sp+0h] [-80h]

  if ( !(_DWORD)this )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "this != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1306LL,
      "get_pos",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1306);
  }
  if ( YS::OBJ::is_attach(this) )
    result = (unsigned int)((_DWORD)this + 112);
  else
    result = (unsigned int)((_DWORD)this + 1344);
  return result;
}
// 45E194: variable 'back_chain' is possibly undefined


->
/----- (0000000000460ED8) ----------------------------------------------------
void __fastcall YS::OBJ::get_dir(YS::OBJ_125 *const this, YS::OBJ_126 *a2)
{
  int v2; // r31
  double v4; // fp31
  double v5; // fp1
  float v6[6]; // [sp+70h] [-30h] BYREF

  v2 = (int)a2;
  if ( YS::OBJ::is_attach(a2) )
  {
    v4 = f_atan2f(-*(float *)(unsigned int)(v2 + 96), -*(float *)((unsigned int)(v2 + 96) + 8LL));
    YS::MATH::RotToDir(v6, v4);
    *(float *)&(*this)[0] = v6[0];
    *(float *)&(*this)[4] = v6[1];
    v5 = v6[2];
    *(float *)&(*this)[12] = v4;
    *(float *)&(*this)[8] = v5;
  }
  else
  {
    *(float *)&(*this)[0] = *(float *)(unsigned int)(v2 + 1360);
    *(float *)&(*this)[4] = *(float *)((unsigned int)(v2 + 1360) + 4LL);
    *(float *)&(*this)[8] = *(float *)((unsigned int)(v2 + 1360) + 8LL);
    *(float *)&(*this)[12] = *(float *)((unsigned int)(v2 + 1360) + 0xCLL);
  }
}


->
/----- (00000000006558F4) ----------------------------------------------------
void __fastcall Ti::Path::get_dir(Ti::Path_3 *a1, const kn::FVector *a2, const kn::FVector *a3, double a4, double a5)
{
  __int64 v5; // ctr
  char v6; // cr32

  do
    --v5;
  while ( !v5 );
  do
    --v5;
  while ( v5 && v6 );
  Ti::Path::get_dir(a1, a2, a3, a4, a5);
}
// 6558F8: variable 'v5' is possibly undefined
// 6558FC: variable 'v6' is possibly undefined


/----- (0000000000655900) ----------------------------------------------------
void __fastcall Ti::Path::get_dir(Ti::Path_3 *const this, const kn::FVector *pos, const kn::FVector *dir, float *a4, double near_dist, double ratio)
{
  double v11; // fp2
  double v12; // fp3
  Axa::FVECTOR4 *v13; // r3
  Axa::FVECTOR4 *v14; // r3
  double v15; // fp28
  double v16; // fp1
  float *v17; // r3
  double v18; // fp31
  double v19; // fp30
  double v20; // fp28
  double v21; // fp27
  FLOAT *v22; // r3
  double v23; // fp2
  double v24; // fp3
  double v25; // fp4
  Axa::FVECTOR4 *v26; // r3
  double v27; // fp2
  double v28; // fp3
  double v29; // fp4
  Axa::FVECTOR4 v30; // [sp+70h] [-F0h] BYREF
  kn::FVector v31; // [sp+80h] [-E0h] BYREF
  kn::FVector v32; // [sp+90h] [-D0h] BYREF
  Axa::FVECTOR4 v33; // [sp+A0h] [-C0h] BYREF
  Axa::FVECTOR4 v34; // [sp+B0h] [-B0h] BYREF
  Axa::FVECTOR4 v35; // [sp+C0h] [-A0h] BYREF
  float v36[4]; // [sp+D0h] [-90h] BYREF
  float v37[4]; // [sp+E0h] [-80h] BYREF
  Axa::FVECTOR4 v38; // [sp+F0h] [-70h] BYREF
  Axa::FVECTOR4 v39; // [sp+100h] [-60h] BYREF
  Axa::FVECTOR4 v40; // [sp+110h] [-50h] BYREF

  v31.z = 0.0;
  v31.y = 0.0;
  v31.x = 0.0;
  v31.w = 1.0;
  v32.x = dir->x;
  v32.y = dir->y;
  v32.z = dir->z;
  v32.w = dir->w;
  _FP2 = 50.0 - near_dist;
  __asm { fsel      f31, f2, f1, f31 }
  if ( (unsigned int)Ti::Path::get_next_pos((Ti::Path_3 *const)pos, &v31, &v32, _FP31) )
  {
    v40.x = v31.x;
    v40.y = v31.y;
    v40.z = v31.z;
    v40.w = v31.w;
    v13 = Axa::FVECTOR4::operator-=(&v40, dir);
    v33.x = v13->x;
    v33.y = v13->y;
    v33.z = v13->z;
    v33.w = v13->w;
    v39.x = v31.x;
    v39.y = v31.y;
    v39.z = v31.z;
    v39.w = v31.w;
    v14 = Axa::FVECTOR4::operator-=(&v39, &v32);
    v34.x = v14->x;
    v34.y = v14->y;
    v34.z = v14->z;
    v34.w = v14->w;
    v15 = Axa::FVECTOR4::normalize(&v33);
    Axa::FVECTOR4::normalize(&v34);
    if ( v15 <= (float)((float)_FP31 * (float)10.0) )
    {
      v37[0] = v33.x;
      v37[1] = v33.y;
      v37[2] = v33.z;
      v37[3] = v33.w;
      v17 = (float *)Axa::FVECTOR4::operator*=((__int64)v37);
      v18 = *v17;
      v19 = v17[1];
      v20 = v17[2];
      v21 = v17[3];
      v36[0] = v34.x;
      v36[1] = v34.y;
      v36[2] = v34.z;
      v36[3] = v34.w;
      v22 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v36);
      v23 = v22[1];
      v24 = v22[2];
      v25 = v22[3];
      v30.x = *v22;
      v30.y = v23;
      v30.z = v24;
      v30.w = v25;
      v38.x = v18;
      v38.y = v19;
      v38.z = v20;
      v38.w = v21;
      v26 = Axa::FVECTOR4::operator+=(&v38, &v30);
      v27 = v26->y;
      v28 = v26->z;
      v29 = v26->w;
      v35.x = v26->x;
      v35.y = v27;
      v35.z = v28;
      v35.w = v29;
      Axa::FVECTOR4::normalize(&v35);
      *(float *)&(*this)[0] = v35.x;
      *(float *)&(*this)[4] = v35.y;
      v16 = v35.z;
    }
    else
    {
      *(float *)&(*this)[0] = v33.x;
      *(float *)&(*this)[4] = v33.y;
      v16 = v33.z;
    }
    *(_DWORD *)&(*this)[12] = 1065353216;
    *(float *)&(*this)[8] = v16;
  }
  else
  {
    v11 = a4[1];
    v12 = a4[2];
    *(float *)&(*this)[0] = *a4;
    *(float *)&(*this)[4] = v11;
    *(float *)&(*this)[8] = v12;
    *(_DWORD *)&(*this)[12] = 0;
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

