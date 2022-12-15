---
---
---
name: trap_reset_active_path
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
syscall 5, 12 ; trap_reset_active_path (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ti::Path::reset_active_path(Ti::Path_3 *const this, YS::OBJ_273 *obj, YS::OBJ_273 *target_obj)
/----- (000000000065A3E8) ----------------------------------------------------
void __fastcall Ti::trap_reset_active_path(BD_VALUE_26 *args)
{
  __int64 v1; // r31
  unsigned __int64 v2; // r30
  __int64 v3; // r31
  Ti::Path_3 *v4; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  v3 = *(unsigned int *)(v1 + 4);
  if ( !(_DWORD)v3 || !*(_DWORD *)(v3 + 1288) || !*(_BYTE *)(*(unsigned int *)(v3 + 1288) + 0x87LL) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj && obj->Path && obj->Path->is_active()",
      "common",
      "C:\\hd25\\kingdom2\\taito\\trapnpc.cpp",
      211LL,
      "trap_reset_active_path",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 211);
  }
  if ( (_DWORD)v3 )
  {
    v4 = (Ti::Path_3 *)*(unsigned int *)(v3 + 1288);
    if ( (_DWORD)v4 )
    {
      if ( *(_BYTE *)(*(unsigned int *)(v3 + 1288) + 0x87LL) )
        Ti::Path::reset_active_path(v4, (YS::OBJ_273 *)v3, 0LL);
    }
  }
}
// 65A408: variable 'back_chain' is possibly undefined
->
/----- (0000000000656470) ----------------------------------------------------
void __fastcall Ti::Path::reset_active_path(Ti::Path_3 *const this, YS::OBJ_273 *obj, YS::OBJ_273 *target_obj)
{
  int v6; // r4
  unsigned __int64 v7; // r28
  int v8; // r4
  const Axa::FVECTOR4 *v9; // r27
  FLOAT *v10; // r3
  Axa::FVECTOR4 *v11; // r3
  FLOAT *v12; // r3
  double v13; // fp2
  double v14; // fp3
  double v15; // fp4
  Axa::FVECTOR4 *v16; // r3
  double v17; // fp2
  double v18; // fp3
  double v19; // fp4
  FLOAT *v20; // r3
  FLOAT *v21; // r3
  __int64 back_chain; // [sp+0h] [-110h]
  Axa::FVECTOR4 v23; // [sp+70h] [-A0h] BYREF
  kn::FVector v24; // [sp+80h] [-90h] BYREF
  float v25[4]; // [sp+90h] [-80h] BYREF
  Axa::FVECTOR4 v26; // [sp+A0h] [-70h] BYREF
  Axa::FVECTOR4 v27; // [sp+B0h] [-60h] BYREF
  kn::FVector v28; // [sp+C0h] [-50h] BYREF
  kn::FVector v29; // [sp+D0h] [-40h] BYREF

  v6 = (unsigned __int8)(*this)[135];
  v7 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(*this)[135] )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "active_",
      "common",
      "C:\\hd25\\kingdom2\\taito\\path.cpp",
      974LL,
      "reset_active_path",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\path.cpp", 974);
    v6 = (unsigned __int8)(*this)[135];
  }
  if ( v6 )
  {
    v8 = *(_DWORD *)&(*this)[136];
    if ( v8 != (_DWORD)target_obj )
    {
      if ( !(_DWORD)target_obj )
      {
        if ( !v8 )
          return;
        target_obj = (YS::OBJ_273 *)*(unsigned int *)&(*this)[136];
      }
      *(_DWORD *)&(*this)[136] = (_DWORD)target_obj;
      *(_DWORD *)&(*this)[4] = 0;
      *(_DWORD *)&(*this)[8] = 0;
      *(_DWORD *)&(*this)[28] = -1073741824;
      *(_DWORD *)&(*this)[24] = 0;
      v9 = (const Axa::FVECTOR4 *)YS::OBJ::get_pos(obj);
      v10 = (FLOAT *)YS::OBJ::get_pos(target_obj);
      v27.x = *v10;
      v27.y = v10[1];
      v27.z = v10[2];
      v27.w = v10[3];
      v11 = Axa::FVECTOR4::operator-=(&v27, v9);
      v23.x = v11->x;
      v23.y = v11->y;
      v23.z = v11->z;
      v23.w = v11->w;
      if ( Axa::FVECTOR4::getLength(&v23) > (double)(float)(*(float *)&(*this)[36] * (float)2.0) )
      {
        v25[0] = v23.x;
        v25[1] = v23.y;
        v25[2] = v23.z;
        v25[3] = v23.w;
        v12 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v25);
        v13 = v12[1];
        v14 = v12[2];
        v15 = v12[3];
        v26.x = *v12;
        v26.y = v13;
        v26.z = v14;
        v26.w = v15;
        v16 = Axa::FVECTOR4::operator+=(&v26, v9);
        v17 = v16->y;
        v18 = v16->z;
        v19 = v16->w;
        v24.x = v16->x;
        v24.y = v17;
        v24.z = v18;
        v24.w = v19;
        if ( !(_DWORD)obj )
        {
          ErrorPrintf(
            "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
            "obj",
            "common",
            "C:\\hd25\\kingdom2\\taito\\path.cpp",
            1016LL,
            "add_active_point",
            (const void *)v7);
          ErrorRaise();
          Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\path.cpp", 1016);
        }
        v20 = (FLOAT *)YS::OBJ::get_pos(obj);
        v29.x = *v20;
        v29.y = v20[1];
        v29.z = v20[2];
        v29.w = v20[3];
        Ti::Path::add_active_point(this, &v29);
        Ti::Path::add_active_point(this, &v24);
        if ( !(_DWORD)target_obj )
        {
          ErrorPrintf(
            "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
            "obj",
            "common",
            "C:\\hd25\\kingdom2\\taito\\path.cpp",
            1016LL,
            "add_active_point",
            (const void *)v7);
          ErrorRaise();
          Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\path.cpp", 1016);
        }
        v21 = (FLOAT *)YS::OBJ::get_pos(target_obj);
        v28.x = *v21;
        v28.y = v21[1];
        v28.z = v21[2];
        v28.w = v21[3];
        Ti::Path::add_active_point(this, &v28);
      }
    }
  }
}
// 6564A0: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

