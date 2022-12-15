---
---
---
name: trap_obj_check_step
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
syscall 1, 119 ; trap_obj_check_step (4 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::check_step(YS::OBJ_133 *const this, const kn::FVector *_dir, double len, double jump_height, double fall_height)
/----- (0000000000508A44) ----------------------------------------------------
void __fastcall YS::trap_obj_check_step(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  const kn::FVector *v3; // r28
  unsigned __int64 v4; // r30
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  v3 = (const kn::FVector *)*(unsigned int *)&(*args)[4];
  v4 = (unsigned int)*(_QWORD *)(back_chain + 16);
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
      (const void *)v4);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  *(_DWORD *)args = YS::OBJ::check_step(
                      (YS::OBJ_133 *const)*(unsigned int *)(v2 + 4),
                      v3,
                      v3->w,
                      *(float *)&(*args)[8],
                      *(float *)&(*args)[12]);
}
// 508A70: variable 'back_chain' is possibly undefined
->
/----- (0000000000471550) ----------------------------------------------------
__int64 __fastcall YS::OBJ::check_step(YS::OBJ_133 *const this, const kn::FVector *_dir, double len, double jump_height, double fall_height)
{
  float *v9; // r3
  double v10; // fp27
  double v11; // fp31
  double v12; // fp26
  double v13; // fp25
  double v14; // fp1
  FLOAT *v15; // r3
  double v16; // fp2
  double v17; // fp3
  double v18; // fp4
  Axa::FVECTOR4 *v19; // r3
  Axa::FVECTOR4 v21; // [sp+70h] [-F0h] BYREF
  kn::FVector v22; // [sp+80h] [-E0h] BYREF
  Axa::FVECTOR4 v23; // [sp+90h] [-D0h] BYREF
  kn::FVector v24; // [sp+A0h] [-C0h] BYREF
  kn::FVector v25; // [sp+B0h] [-B0h] BYREF
  float v26[4]; // [sp+C0h] [-A0h] BYREF
  Axa::FVECTOR4 v27; // [sp+D0h] [-90h] BYREF
  dk::Line v28; // [sp+E0h] [-80h] BYREF
  u_short v29; // [sp+100h] [-60h] BYREF

  v28.m_begin.z = 0.0;
  v28.m_begin.y = 0.0;
  v28.m_begin.x = 0.0;
  v28.m_begin.w = 1.0;
  v28.m_end.z = 0.0;
  v28.m_end.y = 0.0;
  v28.m_end.x = 0.0;
  v28.m_end.w = 1.0;
  v22.z = 0.0;
  v22.y = 0.0;
  v22.x = 0.0;
  v22.w = 1.0;
  v9 = (float *)YS::OBJ::get_pos(this);
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  v23.x = _dir->x;
  v23.z = _dir->z;
  v14 = _dir->w;
  v23.y = 0.0;
  v23.w = v14;
  Axa::FVECTOR4::normalize(&v23);
  v24.x = v10;
  v24.z = v12;
  v24.w = v13;
  v26[0] = v23.x;
  v26[1] = v23.y;
  v26[2] = v23.z;
  v26[3] = v23.w;
  v24.y = (float)v11 - (float)jump_height;
  v15 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v26);
  v16 = v15[1];
  v17 = v15[2];
  v18 = v15[3];
  v21.x = *v15;
  v21.y = v16;
  v21.z = v17;
  v21.w = v18;
  v27.x = v24.x;
  v27.y = v24.y;
  v27.z = v24.z;
  v27.w = v24.w;
  v19 = Axa::FVECTOR4::operator+=(&v27, &v21);
  v25.x = v19->x;
  v25.y = v19->y;
  v25.z = v19->z;
  v25.w = v19->w;
  kn::FVector::operator=(&v28.m_begin, &v24);
  kn::FVector::operator=(&v28.m_end, &v25);
  if ( (unsigned int)dk::Octree::intersectLineMap(&v28, &v22, &v29, (*(_DWORD *)&(*this)[1536] >> 25) & 0xF) )
    return 3LL;
  kn::FVector::operator=(&v24, &v25);
  v24.y = (float)((float)fall_height + (float)jump_height) + v24.y;
  kn::FVector::operator=(&v28.m_begin, &v25);
  kn::FVector::operator=(&v28.m_end, &v24);
  if ( !(unsigned int)dk::Octree::intersectLineMap(&v28, &v22, &v29, (*(_DWORD *)&(*this)[1536] >> 25) & 0xF) )
    return 3LL;
  if ( v22.y < (double)(float)-(float)((float)(*(float *)&(*this)[1532] * (float)0.40000001) - (float)v11) )
    return 1LL;
  if ( v22.y <= (double)(float)((float)(*(float *)&(*this)[1532] * (float)0.40000001) + (float)v11) )
    return 0LL;
  return 2LL;
}


---
---
---
appears in:

---
---
---
example usage from NA

