---
---
---
name: trap_obj_set_movement
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
syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::set_movement(YS::OBJ_133 *const this, const kn::FVector *dir, double speed, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
/----- (0000000000507B50) ----------------------------------------------------
void __fastcall YS::trap_obj_set_movement(BD_VALUE_21 *args, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // r29
  unsigned __int64 v10; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v9 = *(unsigned int *)args;
  v10 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v9 )
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
  if ( (v9 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v10);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::OBJ::set_movement(
    (YS::OBJ_133 *const)*(unsigned int *)(v9 + 4),
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8],
    a4,
    a5,
    a6,
    a7,
    a8);
}
// 507B74: variable 'back_chain' is possibly undefined
// 507C48: variable 'a4' is possibly undefined
// 507C48: variable 'a5' is possibly undefined
// 507C48: variable 'a6' is possibly undefined
// 507C48: variable 'a7' is possibly undefined
// 507C48: variable 'a8' is possibly undefined
->
/----- (0000000000470F90) ----------------------------------------------------
void __fastcall YS::OBJ::set_movement(YS::OBJ_133 *const this, const kn::FVector *dir, double speed, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r7
  __int64 v15; // r6

  if ( speed < 0.0 && speed >= 500.0 )
  {
    printf((unsigned int)"[%s:%d]", (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\objmove.cpp", 170LL, a4, a5, a6, a7, a8);
    printf((unsigned int)"%s = %f\n", (__int64)"speed", *(__int64 *)&speed, v15, v14, v13, v12, v11);
    ErrorPrintf("*ERROR! ");
    ErrorPrintf("illegal movement");
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objmove.cpp", 171);
  }
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 16), dir);
  Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)(unsigned int)((_DWORD)this + 16));
  *(float *)&(*this)[28] = speed;
}
// 47101C: variable 'v15' is possibly undefined
// 47101C: variable 'v14' is possibly undefined
// 47101C: variable 'v13' is possibly undefined
// 47101C: variable 'v12' is possibly undefined
// 47101C: variable 'v11' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

