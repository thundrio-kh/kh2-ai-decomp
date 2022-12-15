---
---
---
name: trap_enemy_exec_damage_blow
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
syscall 2, 1 ; trap_enemy_exec_damage_blow (6 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::exec_damage_blow(YS::BTLOBJ *const this, YS::DAMAGE_4 *damage, int motion_front, int motion_back, double up, double speed)
/----- (00000000004F30D8) ----------------------------------------------------
void __fastcall YS::trap_enemy_exec_damage_blow(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  if ( (*(_DWORD *)(v4 + 1416) & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  YS::BTLOBJ::exec_damage_blow(
    (YS::BTLOBJ *const)v4,
    (YS::DAMAGE_4 *)*(unsigned int *)&(*args)[4],
    *(_DWORD *)&(*args)[8],
    *(_DWORD *)&(*args)[12],
    *(float *)&(*args)[16],
    *(float *)&(*args)[20]);
}
// 4F30FC: variable 'back_chain' is possibly undefined
->
/----- (00000000004129F0) ----------------------------------------------------
void __fastcall YS::BTLOBJ::exec_damage_blow(YS::BTLOBJ *const this, YS::DAMAGE_4 *damage, int motion_front, int motion_back, double up, double speed)
{
  FLOAT *v12; // r3
  double v13; // fp2
  double v14; // fp3
  double v15; // fp4
  kn::FVector v16; // [sp+70h] [-90h] BYREF
  kn::FVector v17; // [sp+80h] [-80h] BYREF
  kn::FVector v18; // [sp+90h] [-70h] BYREF
  float v19[4]; // [sp+A0h] [-60h] BYREF
  Axa::FVECTOR4 v20; // [sp+B0h] [-50h] BYREF

  v16.z = 0.0;
  v16.y = 0.0;
  v16.x = 0.0;
  v17.z = 0.0;
  v16.w = 1.0;
  v17.y = 0.0;
  v17.x = 0.0;
  v17.w = 1.0;
  YS::OBJ::get_dir((YS::OBJ_125 *const)&v20, (YS::OBJ_126 *)this);
  if ( Axa::InnerProductXYZ(&v20, (const Axa::FVECTOR4 *)damage) >= 0.0 )
  {
    motion_front = motion_back;
    kn::FVector::operator=(&v17, (const kn::FVector *)damage);
  }
  else
  {
    v19[0] = *(float *)&(*damage)[0];
    v19[1] = *(float *)&(*damage)[4];
    v19[2] = *(float *)&(*damage)[8];
    v19[3] = *(float *)&(*damage)[12];
    v12 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v19);
    v13 = v12[1];
    v14 = v12[2];
    v15 = v12[3];
    v18.x = *v12;
    v18.y = v13;
    v18.z = v14;
    v18.w = v15;
    kn::FVector::operator=(&v17, &v18);
  }
  YS::OBJ::set_dir((YS::OBJ_125 *const)this, &v17);
  kn::FVector::operator=(&v16, (const kn::FVector *)damage);
  v16.y = up;
  v16.w = speed;
  YS::MOTION::start((YS::MOTION_289 *const)(unsigned int)((_DWORD)this + 320), motion_front, 0.0, 0.0);
  YS::BTLOBJ::blow(this, &v16);
  if ( (unsigned int)YS::DAMAGE::is_finish(damage) )
    *(_DWORD *)(unsigned int)((_DWORD)this + 268) |= 0x20000u;
  *(_DWORD *)(unsigned int)((_DWORD)damage + 24) |= 1u;
  if ( (*(_DWORD *)&this->baseclass_0[1416] & 0x80) != 0 )
    YS::PRIZEBOX::DropNmPresent((YS::BTLOBJ_76 *)this, 1);
}


---
---
---
appears in:

---
---
---
example usage from NA

