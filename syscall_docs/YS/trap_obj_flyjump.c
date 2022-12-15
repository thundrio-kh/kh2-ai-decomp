---
---
---
name: trap_obj_flyjump
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
syscall 1, 168 ; trap_obj_flyjump (5 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::prepare_flyjump(YS::OBJ_189 *const this, RCFVector v)
void __fastcall YS::MOTION::start(YS::MOTION_289 *const this, YS::BINARC_62 *motion, double blend_time, double start_time)
/----- (00000000004FE598) ----------------------------------------------------
void __fastcall YS::trap_obj_flyjump(BD_VALUE_21 *args)
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
  YS::OBJ::prepare_flyjump((YS::OBJ_189 *const)v4, (RCFVector)*(unsigned int *)&(*args)[4]);
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
// 4FE5BC: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::prepare_flyjump YS::MOTION::start
->
/----- (00000000004CC700) ----------------------------------------------------
void __fastcall YS::OBJ::prepare_flyjump(YS::OBJ_189 *const this, RCFVector v)
{
  YS::OBJ::prepare_jump(this, v);
  (*this)[1300] = 3;
}


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

