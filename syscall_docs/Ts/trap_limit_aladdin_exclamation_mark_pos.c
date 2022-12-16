---
---
---
name: trap_limit_aladdin_exclamation_mark_pos
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
push unk1 ; (unknown)  (pushFromPSp: 16)
syscall 7, 12 ; trap_limit_aladdin_exclamation_mark_pos (1 in, 1 out)
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
const YS::COLLISION_ELEM_0 *__fastcall YS::OBJ::each_collision(YS::OBJ_125 *const this, int type, const YS::COLLISION_ELEM_0 *elem)
void __fastcall YS::COLLISION::set(YS::COLLISION_33 *const this, YS::OBJ_95 *obj, const YS::COLLISION_ELEM_0 *elem)
unsigned __int64 __fastcall YS::OBJ::get_pos(YS::OBJ_125 *const this)
/----- (0000000000623650) ----------------------------------------------------
void __fastcall Ts::trap_limit_aladdin_exclamation_mark_pos(BD_VALUE_24 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  YS::OBJ_125 *v4; // r30
  const YS::COLLISION_ELEM_0 *v5; // r3
  const kn::FVector *v6; // r3
  __int64 back_chain; // [sp+0h] [-B0h]
  kn::FVector v8[2]; // [sp+70h] [-40h] BYREF

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
  v4 = (YS::OBJ_125 *)*(unsigned int *)(v2 + 4);
  v8[0].w = 0.0;
  v8[1].z = 0.0;
  v8[1].y = 0.0;
  v8[1].x = 0.0;
  v8[1].w = 1.0;
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj != NULL",
      "common",
      "C:\\hd25\\kingdom2\\sugi\\trapbattle.cpp",
      94LL,
      "trap_limit_aladdin_exclamation_mark_pos",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\sugi\\trapbattle.cpp", 94);
  }
  v5 = YS::OBJ::each_collision(v4, 0, 0LL);
  if ( !(_DWORD)v5 )
    v5 = YS::OBJ::each_collision(v4, 1, 0LL);
  if ( (_DWORD)v5 )
  {
    YS::COLLISION::set((YS::COLLISION_33 *const)v8, v4, v5);
    kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, &v8[1]);
    flt_3EAD504 = flt_3EAD504 - (float)(v8[0].z + (float)30.0);
  }
  else
  {
    v6 = (const kn::FVector *)YS::OBJ::get_pos(v4);
    kn::FVector::operator=((kn::FVector *const)&Ts::ResultVector, v6);
  }
  *(_DWORD *)args = (unsigned int)&Ts::ResultVector;
}
// 623674: variable 'back_chain' is possibly undefined
// 3EAD500: using guessed type int Ts::ResultVector;
// 3EAD504: using guessed type float flt_3EAD504;

//COMPLICATED YS::OBJ::each_collision YS::OBJ::each_collision YS::COLLISION::set YS::OBJ::get_pos
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


---
---
---
appears in:
limit\aladdin\limi.bdscript
---
---
---
example usage from limit\aladdin\limi.bdscript
L3957:
 popToSp 0
 popToSp 4
 pushFromFSp 0
 gosub 8, L1699
 memcpyToSp 16, 16
 pushFromPSp 16
 gosub 12, L4020
 jz L4019
 pushImm 72
 pushImm L4036
 pushFromFSp 4
 gosub 8, L3431
 popToSp 8
 pushFromFSp 8
 pushImm 32
 add 
 pushFromFSp 0
 gosub 8, L1699
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 7, 12 ; trap_limit_aladdin_exclamation_mark_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpy 16
 pushFromFSp 8
 fetchValue 48
 pushFromFSp 0
 gosub 8, L1675
 jmp L4019
