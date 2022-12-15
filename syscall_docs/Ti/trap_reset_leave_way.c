---
---
---
name: trap_reset_leave_way
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
syscall 5, 16 ; trap_reset_leave_way (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ti::Path::reset_leave_way(Ti::Path_3 *const this, YS::OBJ_273 *obj, YS::OBJ_273 *target_obj)
/----- (000000000065AA90) ----------------------------------------------------
void __fastcall Ti::trap_reset_leave_way(BD_VALUE_26 *args)
{
  __int64 v2; // r31
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 v5; // r31
  YS::OBJ_273 *v6; // r30
  Ti::Path_3 *v7; // r3
  __int64 back_chain; // [sp+0h] [-90h]

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
  v5 = *(unsigned int *)(v2 + 4);
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
  v6 = (YS::OBJ_273 *)*(unsigned int *)(v4 + 4);
  if ( !(_DWORD)v5 || !*(_DWORD *)(v5 + 1288) || !(_DWORD)v6 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj && obj->Path && target_obj",
      "common",
      "C:\\hd25\\kingdom2\\taito\\trapnpc.cpp",
      251LL,
      "trap_reset_leave_way",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 251);
  }
  if ( (_DWORD)v5 )
  {
    v7 = (Ti::Path_3 *)*(unsigned int *)(v5 + 1288);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v6 )
        Ti::Path::reset_leave_way(v7, (YS::OBJ_273 *)v5, v6);
    }
  }
}
// 65AAB4: variable 'back_chain' is possibly undefined
->
/----- (0000000000656290) ----------------------------------------------------
void __fastcall Ti::Path::reset_leave_way(Ti::Path_3 *const this, YS::OBJ_273 *obj, YS::OBJ_273 *target_obj)
{
  float *v6; // r28
  const Axa::FVECTOR4 *v7; // r3
  Axa::FVECTOR4 *v8; // r3
  const kn::FVector *v9; // r3
  float *v10; // r3
  double v11; // fp2
  double v12; // fp3
  double v13; // fp4
  double v14; // fp31
  Axa::FVECTOR4 v15; // [sp+70h] [-80h] BYREF
  Ti::Path_3 var70; // [sp+80h] [-70h] BYREF

  if ( !(*this)[134] )
  {
    v6 = (float *)YS::OBJ::get_pos(obj);
    v7 = (const Axa::FVECTOR4 *)YS::OBJ::get_pos(target_obj);
    *(float *)&var70[48] = *v6;
    *(float *)&var70[52] = v6[1];
    *(float *)&var70[56] = v6[2];
    *(float *)&var70[60] = v6[3];
    v8 = Axa::FVECTOR4::operator-=((Axa::FVECTOR4 *const)&var70[48], v7);
    v15.x = v8->x;
    v15.y = v8->y;
    v15.z = v8->z;
    v15.w = v8->w;
    if ( Axa::FVECTOR4::normalize(&v15) >= 0.0099999998 )
    {
      v9 = (const kn::FVector *)YS::OBJ::get_pos(obj);
      Ti::Path::search_near_point(this, (int *)&var70[64], (float *)&var70[68], v9);
      Ti::Path::calc_curve_speed((Ti::Path_3 *const)var70, this, *(int *)&var70[64], *(float *)&var70[68]);
      if ( Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)var70) >= 0.0099999998 )
      {
        *(float *)&var70[32] = *(float *)var70;
        *(float *)&var70[36] = *(float *)&var70[4];
        *(float *)&var70[40] = *(float *)&var70[8];
        *(float *)&var70[44] = *(float *)&var70[12];
        v10 = (float *)Axa::FVECTOR4::operator*=((__int64)&var70[32]);
        v11 = v10[1];
        v12 = v10[2];
        v13 = v10[3];
        *(float *)&var70[16] = *v10;
        *(float *)&var70[20] = v11;
        *(float *)&var70[24] = v12;
        *(float *)&var70[28] = v13;
        v14 = Axa::InnerProductXYZ(&v15, (const Axa::FVECTOR4 *)var70);
        (*this)[132] = v14 >= Axa::InnerProductXYZ(&v15, (const Axa::FVECTOR4 *)&var70[16]);
      }
    }
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

