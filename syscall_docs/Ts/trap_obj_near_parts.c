---
---
---
name: trap_obj_near_parts
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
push unk1 ; (unknown)  (memcpyToSp: 16, 32,16, 80)
push unk2 ; (unknown)  (pushFromPSp: 32,80)
syscall 6, 23 ; trap_obj_near_parts (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
const YS::COLLISION_ELEM_0 *__fastcall YS::OBJ::each_collision(YS::OBJ_125 *const this, int type, const YS::COLLISION_ELEM_0 *elem)
void __fastcall YS::COLLISION::set(YS::COLLISION_33 *const this, YS::OBJ_95 *obj, const YS::COLLISION_ELEM_0 *elem)
float __fastcall kn::FVector::getLengthSquare(const kn::FVector *const this)
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
->
/----- (000000000045DF18) ----------------------------------------------------
const YS::COLLISION_ELEM_0 *__fastcall YS::OBJ::each_collision(YS::OBJ_125 *const this, int type, const YS::COLLISION_ELEM_0 *elem)
{
  YS::COLLISION_DATA_0 *v6; // r3
  bool v8; // cr34

  v6 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
  if ( !(_DWORD)v6 )
    return 0LL;
  do
  {
    elem = (const YS::COLLISION_ELEM_0 *)YS::COLLISION_DATA::next_elem(v6, type, elem);
    if ( !(_DWORD)elem )
      break;
    v8 = !YS::OBJ::is_enable_collision(this, elem->Group);
    v6 = (YS::COLLISION_DATA_0 *)*(unsigned int *)&(*this)[2264];
  }
  while ( v8 );
  return elem;
}


->
/----- (0000000000419840) ----------------------------------------------------
void __fastcall YS::COLLISION::set(YS::COLLISION_33 *const this, YS::OBJ_95 *obj, const YS::COLLISION_ELEM_0 *elem)
{
  __int64 v6; // r4
  int v7; // r6
  int v8; // r5
  int v9; // r4
  double v10; // fp1
  __int64 compiler_reserved; // [sp+18h] [-F8h]
  __int64 compiler_reserveda; // [sp+18h] [-F8h]
  Axa::FVECTOR4 v13; // [sp+70h] [-A0h] BYREF
  kn::FVector v14; // [sp+80h] [-90h] BYREF
  Axa::FVECTOR4 v15; // [sp+90h] [-80h] BYREF
  kn::FMatrix v16; // [sp+A0h] [-70h] BYREF

  Axa::FMATRIX44::unit(&v16);
  compiler_reserved = elem->Xofs;
  v6 = elem->Yofs;
  v7 = elem->Shape;
  v8 = elem->Zofs;
  v13.w = 1.0;
  v13.x = (float)compiler_reserved;
  *(_DWORD *)this = v7;
  *(_DWORD *)&(*this)[12] = (_DWORD)elem;
  v13.y = (float)v6;
  v9 = elem->Bone;
  v13.z = (float)v8;
  if ( (v9 & 0x4000) != 0 || (*(_DWORD *)&(*obj)[2040] & 0x400) != 0 )
  {
    compiler_reserveda = elem->Height;
    *(float *)&(*this)[4] = (float)elem->Radius;
    *(float *)&(*this)[8] = (float)compiler_reserveda;
    YS::OBJ::get_bone_matrix(obj, v9, &v16);
    Axa::FMATRIX44::operator*(&v15, &v16, &v13);
    v14.x = v15.x;
    v14.y = v15.y;
    v14.z = v15.z;
    v14.w = v15.w;
    kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 16), &v14);
    v10 = (float)(*(float *)&(*this)[20] - (float)elem->Hofs);
  }
  else
  {
    *(_DWORD *)&(*this)[8] = 0;
    *(_DWORD *)&(*this)[4] = 0;
    *(_DWORD *)&(*this)[24] = 0;
    v10 = 0.0;
    *(_DWORD *)&(*this)[16] = 0;
    *(_DWORD *)&(*this)[28] = 1065353216;
  }
  *(float *)&(*this)[20] = v10;
}


->
/----- (00000000000E8B50) ----------------------------------------------------
float __fastcall kn::FVector::getLengthSquare(const kn::FVector *const this)
{
  return (float)(this->z * this->z) + (float)((float)(this->x * this->x) + (float)(this->y * this->y));
}


---
---
---
appears in:
limit\donald\limi.bdscript
limit\donald_wi\limi.bdscript
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from limit\donald\limi.bdscript
L1426:
 popToSp 0
 pushFromFSpVal 48
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L1527
 pushFromFSpVal 48
 gosub 4, L1528
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSpVal 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 6, 23 ; trap_obj_near_parts (2 in, 1 out)
 popToSp 4
 pushFromPSpVal 0
 pushImm 664
 pushFromFSpVal 80
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 68
 pushFromFSp 4
 pushImm 0
 sub 
 msbi 
 dup 
 jz L1494
 pushFromFSpVal 68
 pushFromFSpVal 48
 gosub 4, L1528
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 2, 18 ; trap_attack_is_strike (2 in, 1 out)
 eqzv 
