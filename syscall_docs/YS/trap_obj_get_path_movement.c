---
---
---
name: trap_obj_get_path_movement
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
syscall 1, 178 ; trap_obj_get_path_movement (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::get_path_movement(YS::OBJ_133 *const this, __int64 a2)
/----- (0000000000500C74) ----------------------------------------------------
void __fastcall YS::trap_obj_get_path_movement(BD_VALUE_21 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r29
  __int64 back_chain; // [sp+0h] [-B0h]
  kn::FVector v5; // [sp+70h] [-40h] BYREF

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
  YS::OBJ::get_path_movement((YS::OBJ_133 *const)&v5, *(unsigned int *)(v2 + 4));
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v5);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 500CA4: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;
->
/----- (0000000000471BD4) ----------------------------------------------------
void __fastcall YS::OBJ::get_path_movement(YS::OBJ_133 *const this, __int64 a2)
{
  int v3; // r30
  const kn::FVector *v4; // r31
  const kn::FVector *v5; // r3
  kn::FVector v6; // [sp+70h] [-30h] BYREF

  v3 = a2;
  *(_DWORD *)&(*this)[8] = 0;
  *(_DWORD *)&(*this)[4] = 0;
  *(_DWORD *)this = 0;
  *(_DWORD *)&(*this)[12] = 1065353216;
  v4 = (const kn::FVector *)*(unsigned int *)(a2 + 1288);
  if ( (_DWORD)v4 )
  {
    v5 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)a2);
    Ti::Path::get_next_movement((Ti::Path_3 *const)&v6, v4, v5, (float *)(unsigned int)(v3 + 1360));
    kn::FVector::operator=((kn::FVector *const)this, &v6);
  }
  else
  {
    *(_DWORD *)&(*this)[12] = 0;
    *(_DWORD *)&(*this)[8] = 0;
    *(_DWORD *)&(*this)[4] = 0;
    *(_DWORD *)this = 0;
  }
}


---
---
---
appears in:

---
---
---
example usage from NA

