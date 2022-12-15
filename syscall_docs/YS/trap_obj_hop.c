---
---
---
name: trap_obj_hop
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
push unk6 ; (unknown) 
push unk7 ; (unknown) 
syscall 1, 156 ; trap_obj_hop (7 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::prepare_hop(YS::OBJ_88 *const this, RCFVector _v, double time, double accel)
void __fastcall YS::MOTION::start(YS::MOTION_289 *const this, YS::BINARC_62 *motion, double blend_time, double start_time)
/----- (00000000004FE420) ----------------------------------------------------
void __fastcall YS::trap_obj_hop(BD_VALUE_21 *args)
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
  YS::OBJ::prepare_hop(
    (YS::OBJ_88 *const)v4,
    (RCFVector)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12]);
  YS::MOTION::start(
    (YS::MOTION_289 *const)(unsigned int)(v4 + 320),
    *(_DWORD *)&(*args)[16],
    *(float *)&(*args)[20],
    0.0);
  if ( *(_DWORD *)&(*args)[24] )
  {
    v5 = *(_DWORD *)&(*args)[16];
    *(_DWORD *)(v4 + 256) = v5 + 1;
    *(_DWORD *)(v4 + 260) = v5 + 2;
  }
}
// 4FE444: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::prepare_hop YS::MOTION::start
->
/----- (0000000000402190) ----------------------------------------------------
void __fastcall YS::OBJ::prepare_hop(YS::OBJ_88 *const this, RCFVector _v, double time, double accel)
{
  double v7; // fp31
  unsigned __int64 v8; // r30
  double v9; // fp31
  FLOAT *v10; // r3
  double v11; // fp2
  double v12; // fp3
  double v13; // fp4
  __int64 back_chain; // [sp+0h] [-E0h]
  kn::FVector v15; // [sp+70h] [-70h] BYREF
  Axa::FVECTOR4 v16; // [sp+80h] [-60h] BYREF
  float v17[6]; // [sp+90h] [-50h] BYREF

  v16.x = _v->x;
  v7 = _v->y;
  v16.y = _v->y;
  v16.z = _v->z;
  v16.w = _v->w;
  v8 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( time <= 0.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "time > 0.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\action_hop.cpp",
      53LL,
      "prepare_hop",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\action_hop.cpp", 53);
    v7 = v16.y;
  }
  if ( v7 <= 0.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "height > 0.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\action_hop.cpp",
      55LL,
      "prepare_hop",
      (const void *)v8);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\action_hop.cpp", 55);
  }
  if ( v16.w < 0.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "speed >= 0.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\action_hop.cpp",
      57LL,
      "prepare_hop",
      (const void *)v8);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\action_hop.cpp", 57);
  }
  v16.y = 0.0;
  Axa::FVECTOR4::normalize(&v16);
  *(float *)&(*this)[240] = accel;
  v9 = (float)((float)((float)v7 * (float)2.0) / (float)((float)time * (float)time));
  *(float *)&(*this)[244] = v9;
  YS::OBJ::set_prepare_jump(this, 2);
  v17[0] = v16.x;
  v17[1] = v16.y;
  v17[2] = v16.z;
  v17[3] = v16.w;
  v10 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v17);
  v11 = v10[1];
  v12 = v10[2];
  v13 = v10[3];
  v15.x = *v10;
  v15.y = v11;
  v15.z = v12;
  v15.w = v13;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 192), &v15);
  *(_DWORD *)&(*this)[204] = 1065353216;
  *(float *)&(*this)[196] = -(float)((float)v9 * (float)time);
}
// 4021F4: variable 'back_chain' is possibly undefined


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

