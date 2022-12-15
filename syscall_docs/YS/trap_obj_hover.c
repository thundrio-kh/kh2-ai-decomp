---
---
---
name: trap_obj_hover
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
syscall 1, 73 ; trap_obj_hover (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::hover(YS::OBJ_193 *const this, RCFVector _v, double accel)
/----- (00000000004FE700) ----------------------------------------------------
void __fastcall YS::trap_obj_hover(BD_VALUE_21 *args)
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
  YS::OBJ::hover(
    (YS::OBJ_193 *const)*(unsigned int *)(v2 + 4),
    (RCFVector)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 4FE724: variable 'back_chain' is possibly undefined
->
/----- (00000000004CF224) ----------------------------------------------------
void __fastcall YS::OBJ::hover(YS::OBJ_193 *const this, RCFVector _v, double accel)
{
  FLOAT *v5; // r3
  double v6; // fp2
  double v7; // fp3
  double v8; // fp4
  kn::FVector v9; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v10; // [sp+80h] [-40h] BYREF
  float v11[4]; // [sp+90h] [-30h] BYREF

  v10.x = _v->x;
  v10.y = _v->y;
  v10.z = _v->z;
  v10.w = _v->w;
  Axa::FVECTOR4::normalize(&v10);
  v11[0] = v10.x;
  v11[1] = v10.y;
  v11[2] = v10.z;
  v11[3] = v10.w;
  v5 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v11);
  v6 = v5[1];
  v7 = v5[2];
  v8 = v5[3];
  v9.x = *v5;
  v9.y = v6;
  v9.z = v7;
  v9.w = v8;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 32), &v9);
  *(float *)&(*this)[240] = accel;
  YS::OBJ::change_action(this, HOVER);
}


---
---
---
appears in:

---
---
---
example usage from NA

