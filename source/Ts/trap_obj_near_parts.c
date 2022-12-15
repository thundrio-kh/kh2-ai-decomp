/----- (0000000000625430) ----------------------------------------------------
void __fastcall Ts::trap_obj_near_parts(BD_VALUE_25 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r28
  YS::OBJ_128 *v4; // r29
  FLOAT *v5; // r30
  int v6; // r27
  const YS::COLLISION_ELEM_0 *v7; // r28
  double v8; // fp31
  Axa::FVECTOR4 *v9; // r3
  double v10; // fp1
  __int64 back_chain; // [sp+0h] [-100h]
  kn::FVector v12; // [sp+70h] [-90h] BYREF
  kn::FVector v13; // [sp+80h] [-80h] BYREF
  Axa::FVECTOR4 v14; // [sp+90h] [-70h] BYREF
  int v15; // [sp+ACh] [-54h]
  Axa::FVECTOR4 v16; // [sp+B0h] [-50h] BYREF

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
  v4 = (YS::OBJ_128 *)*(unsigned int *)(v2 + 4);
  v5 = (FLOAT *)*(unsigned int *)&(*args)[4];
  v12.z = 0.0;
  v12.y = 0.0;
  v12.x = 0.0;
  v12.w = 1.0;
  v15 = 0;
  v16.z = 0.0;
  v16.y = 0.0;
  v16.x = 0.0;
  v16.w = 1.0;
  if ( !(unsigned int)YS::OBJ::is_exist(v4) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj->is_exist()",
      "common",
      "C:\\hd25\\kingdom2\\sugi\\trapfield.cpp",
      104LL,
      "trap_obj_near_parts",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\sugi\\trapfield.cpp", 104);
  }
  v6 = -1;
  v7 = 0LL;
  v8 = 0.0;
  while ( 1 )
  {
    v7 = YS::OBJ::each_collision(v4, 2, v7);
    if ( !(_DWORD)v7 )
      break;
    YS::COLLISION::set((YS::COLLISION_33 *const)(&v14 + 1), v4, v7);
    v14.x = *v5;
    v14.y = v5[1];
    v14.z = v5[2];
    v14.w = v5[3];
    v9 = Axa::FVECTOR4::operator-=(&v14, &v16);
    v13.x = v9->x;
    v13.y = v9->y;
    v13.z = v9->z;
    v13.w = v9->w;
    kn::FVector::operator=(&v12, &v13);
    v10 = kn::FVector::getLengthSquare(&v12);
    v12.w = v10;
    if ( v6 >= 0 )
    {
      if ( v8 > v10 )
      {
        v8 = v10;
        v6 = v7->Parts;
      }
    }
    else
    {
      v8 = v10;
      v6 = v7->Parts;
    }
  }
  *(_DWORD *)args = v6;
}
// 625458: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::each_collision YS::COLLISION::set kn::FVector::getLengthSquare