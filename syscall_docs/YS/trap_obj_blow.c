---
---
---
name: trap_obj_blow
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
syscall 1, 129 ; trap_obj_blow (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::BTLOBJ::blow(YS::BTLOBJ *const this, const kn::FVector *v)
/----- (00000000004F77E0) ----------------------------------------------------
void __fastcall YS::trap_obj_blow(BD_VALUE_21 *args)
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
  YS::BTLOBJ::blow((YS::BTLOBJ *const)v4, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 4F7804: variable 'back_chain' is possibly undefined
->
/----- (00000000004128D0) ----------------------------------------------------
void __fastcall YS::BTLOBJ::blow(YS::BTLOBJ *const this, const kn::FVector *v)
{
  unsigned int *v3; // r5
  int v5; // r7
  FLOAT *v6; // r3
  double v7; // fp2
  double v8; // fp3
  double v9; // fp4
  YS::ACTION_180 *v10; // r3
  kn::FVector v11; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v12; // [sp+80h] [-40h] BYREF
  float v13[4]; // [sp+90h] [-30h] BYREF

  v3 = (unsigned int *)(unsigned int)((_DWORD)this + 268);
  v12.z = 0.0;
  v12.y = 0.0;
  v12.x = 0.0;
  v5 = *v3;
  v12.w = 1.0;
  *v3 = v5 & 0xFFFDFFFF;
  kn::FVector::operator=((kn::FVector *const)&v12, v);
  v12.y = 0.0;
  Axa::FVECTOR4::normalize(&v12);
  v13[0] = v12.x;
  v13[1] = v12.y;
  v13[2] = v12.z;
  v13[3] = v12.w;
  v6 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v13);
  v7 = v6[1];
  v8 = v6[2];
  v9 = v6[3];
  v11.x = *v6;
  v11.y = v7;
  v11.z = v8;
  v11.w = v9;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 32), &v11);
  v10 = (YS::ACTION_180 *)*(unsigned int *)&this->baseclass_0[12];
  *(float *)&this->baseclass_0[36] = -v->y;
  YS::ACTION::blow(v10, (YS::OBJ_180 *)this);
}


---
---
---
appears in:

---
---
---
example usage from NA

