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
push unk1 ; (unknown)  (pushFromPSp: 16) (pushFromFSp: 0) (pushFromPSpVal: 0)
push unk2 ; (unknown)  (pushImmf: 24) (pushFromPSp: 144,16,32,48,64)
push unk3 ; (unknown)  (pushImmf: 0.98,10,12,15,16,20,30) (pushFromFSp: 12)
push unk4 ; (unknown)  (pushImm: 3) (pushImmf: 0,0.01,0.9,0.95,0.99)
push unk5 ; (unknown)  (pushFromFSp: 0,88) (pushImm: 201,202,203,3)
push unk6 ; (unknown)  (fetchValue: 36) (pushImmf: 0,8)
push unk7 ; (unknown)  (pushImm: 0,1)
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
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_LK100\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_00\b_lk.bdscript ((B) Shenzi)
obj\B_LK100_10\b_lk.bdscript ((B) Banzai)
obj\B_LK100_20\b_lk.bdscript ((B) Ed)
obj\B_MU100\b_mu.bdscript ((B) Shan-Yu)
obj\F_TT110\f_tt.bdscript ((F) Dog’s sack (TT))
obj\F_WI400\f_wi.bdscript ((F) Box (Pete throws) (WI))
obj\M_EX200\m_ex.bdscript ((M) Wight Knight)
obj\M_EX200_NM\m_ex.bdscript ((M) Wight Knight (NM))
obj\N_CM000_BTL\n_cm.bdscript ((N) Marluxia (BTL) (CM))
obj\N_CM020_BTL\n_cm.bdscript ((N) Lexaeus (BTL) (CM))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\P_HE000\p_he.bdscript ((P) Auron)
obj\P_MU000\p_mu.bdscript ((P) Mulan)
---
---
---
example usage from obj\B_BB110\b_bb.bdscript
L5368:
 popToSp 0
 pushFromFSp 0
 gosub 12, L3601
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 fetchValue 0
 pushImmf 700
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 fetchValue 8
 pushImmf 26
 gosub 20, L934
 pushFromFSp 0
 pushFromPSp 16
 pushImmf 24
 pushImmf 0.98
 pushImm 3
 pushFromFSp 0
 fetchValue 36
 pushImm 1
 syscall 1, 156 ; trap_obj_hop (7 in, 0 out)
