---
---
---
name: trap_obj_limit_hover
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
syscall 6, 26 ; trap_obj_limit_hover (4 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ts::ACTION_LIMIT_HOVER::Start(YS::OBJ_244 *obj, RCFVector _v, double brake, double brake_slow)
/----- (00000000006259C8) ----------------------------------------------------
void __fastcall Ts::trap_obj_limit_hover(BD_VALUE_25 *args)
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
  Ts::ACTION_LIMIT_HOVER::Start(
    (YS::OBJ_244 *)*(unsigned int *)(v2 + 4),
    (RCFVector)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    *(float *)&(*args)[12]);
}
// 6259EC: variable 'back_chain' is possibly undefined
->
/----- (000000000061CFE0) ----------------------------------------------------
void __fastcall Ts::ACTION_LIMIT_HOVER::Start(YS::OBJ_244 *obj, RCFVector _v, double brake, double brake_slow)
{
  double v5; // fp31
  FLOAT *v6; // r3
  double v7; // fp2
  double v8; // fp3
  double v9; // fp4
  kn::FVector v10; // [sp+70h] [-50h] BYREF
  Axa::FVECTOR4 v11; // [sp+80h] [-40h] BYREF
  float v12[6]; // [sp+90h] [-30h] BYREF

  v11.x = _v->x;
  v11.y = _v->y;
  v11.z = _v->z;
  v5 = _v->w;
  flt_3EACE10 = brake;
  v11.w = v5;
  flt_3EACE14 = brake_slow;
  Axa::FVECTOR4::normalize(&v11);
  v12[0] = v11.x;
  v12[1] = v11.y;
  v12[2] = v11.z;
  v12[3] = v11.w;
  v6 = (FLOAT *)Axa::FVECTOR4::operator*=((__int64)v12);
  v7 = v6[1];
  v8 = v6[2];
  v9 = v6[3];
  v10.x = *v6;
  v10.y = v7;
  v10.z = v8;
  v10.w = v9;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)obj + 32), &v10);
  YS::OBJ::change_action(obj, LIMIT_HOVER);
}
// 3EACE10: using guessed type float flt_3EACE10;
// 3EACE14: using guessed type float flt_3EACE14;


---
---
---
appears in:

---
---
---
example usage from NA

