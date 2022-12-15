---
---
---
name: method_obj_jump
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
push unk5 ; (unknown) 
syscall 1, 55 ; method_obj_jump (5 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::prepare_jump(YS::OBJ_89 *const this, RCFVector _v)
void __fastcall YS::MOTION::start(YS::MOTION_289 *const this, YS::BINARC_62 *motion, double blend_time, double start_time)
/----- (00000000004FDE28) ----------------------------------------------------
void __fastcall YS::method_obj_jump(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  int v5; // r3
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
  v4 = *(unsigned int *)(v2 + 4);
  YS::OBJ::prepare_jump((YS::OBJ_89 *const)v4, (RCFVector)*(unsigned int *)&(*args)[4]);
  YS::MOTION::start(
    (YS::MOTION_289 *const)(unsigned int)(v4 + 320),
    *(_DWORD *)&(*args)[8],
    *(float *)&(*args)[12],
    0.0);
  if ( *(_DWORD *)&(*args)[16] )
  {
    v5 = *(_DWORD *)&(*args)[8];
    *(_DWORD *)(v4 + 256) = v5 + 1;
    *(_DWORD *)(v4 + 260) = v5 + 2;
  }
}
// 4FDE4C: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::prepare_jump YS::MOTION::start
->
/----- (00000000004039A8) ----------------------------------------------------
void __fastcall YS::OBJ::prepare_jump(YS::OBJ_89 *const this, RCFVector _v)
{
  double v3; // fp1
  FLOAT *v4; // r3
  double v5; // fp2
  double v6; // fp3
  double v7; // fp4
  __int64 back_chain; // [sp+0h] [-C0h]
  kn::FVector v9; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v10; // [sp+80h] [-40h] BYREF
  float v11[6]; // [sp+90h] [-30h] BYREF

  v10.x = _v->x;
  v3 = _v->y;
  v10.y = _v->y;
  v10.z = _v->z;
  v10.w = _v->w;
  YS::OBJ::prepare_jump_height(this, v3);
  if ( v10.w < -500.0 || v10.w > 500.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "speed >= -OBJ::MOVE_SPEED_MAX && speed <= OBJ::MOVE_SPEED_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\action_jump.cpp",
      70LL,
      "prepare_jump",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\action_jump.cpp", 70);
  }
  v10.y = 0.0;
  Axa::FVECTOR4::normalize(&v10);
  v11[0] = v10.x;
  v11[1] = v10.y;
  v11[2] = v10.z;
  v11[3] = v10.w;
  v4 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v11);
  v5 = v4[1];
  v6 = v4[2];
  v7 = v4[3];
  v9.x = *v4;
  v9.y = v5;
  v9.z = v6;
  v9.w = v7;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 192), &v9);
  *(_DWORD *)&(*this)[204] = 1065353216;
}
// 4039FC: variable 'back_chain' is possibly undefined


->
/----- (000000000045C430) ----------------------------------------------------
void __fastcall YS::MOTION::start(YS::MOTION_289 *const this, YS::BINARC_62 *motion, double blend_time, double start_time)
{
  YS::MOTION::clear_queue(this);
  YS::MOTION::start_motion(this, motion, blend_time, start_time);
}


/----- (000000000045C494) ----------------------------------------------------
void __fastcall YS::MOTION::start(YS::MOTION_289 *const this, int id, double blend_time, double start_time)
{
  YS::MOTION::clear_queue(this);
  YS::MOTION::start_id(this, id, blend_time, start_time);
}


---
---
---
appears in:

---
---
---
example usage from NA

