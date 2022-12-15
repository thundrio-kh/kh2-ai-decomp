---
---
---
name: trap_obj_fly
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
syscall 1, 58 ; trap_obj_fly (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::fly(YS::OBJ_187 *const this, RCFVector _v, double accel)
/----- (0000000000504270) ----------------------------------------------------
void __fastcall YS::trap_obj_fly(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  YS::OBJ::fly(
    (YS::OBJ_187 *const)*(unsigned int *)(v2 + 4),
    (RCFVector)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 504294: variable 'back_chain' is possibly undefined
->
/----- (00000000004CB228) ----------------------------------------------------
void __fastcall YS::OBJ::fly(YS::OBJ_187 *const this, RCFVector _v, double accel)
{
  FLOAT *v5; // r3
  double v6; // fp2
  double v7; // fp3
  double v8; // fp4
  __int64 back_chain; // [sp+0h] [-C0h]
  kn::FVector v10; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v11; // [sp+80h] [-40h] BYREF
  float v12[4]; // [sp+90h] [-30h] BYREF

  v11.x = _v->x;
  v11.y = _v->y;
  v11.z = _v->z;
  v11.w = _v->w;
  if ( accel < 0.0 || accel > 1.0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "accel >= 0.0f && accel <= 1.0f",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\action_fly.cpp",
      21LL,
      "fly",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\action_fly.cpp", 21);
  }
  Axa::FVECTOR4::normalize(&v11);
  v12[0] = v11.x;
  v12[1] = v11.y;
  v12[2] = v11.z;
  v12[3] = v11.w;
  v5 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v12);
  v6 = v5[1];
  v7 = v5[2];
  v8 = v5[3];
  v10.x = *v5;
  v10.y = v6;
  v10.z = v7;
  v10.w = v8;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 32), &v10);
  *(float *)&(*this)[240] = accel;
  YS::OBJ::change_action(this, FLY);
}
// 4CB280: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

