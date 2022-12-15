---
---
---
name: trap_obj_move_request
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
syscall 1, 89 ; trap_obj_move_request (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::move_request(YS::OBJ_133 *const this, const kn::FVector *dir, double speed)
/----- (00000000005065E0) ----------------------------------------------------
void __fastcall YS::trap_obj_move_request(BD_VALUE_21 *args)
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
  YS::OBJ::move_request(
    (YS::OBJ_133 *const)*(unsigned int *)(v2 + 4),
    (const kn::FVector *)*(unsigned int *)&(*args)[4],
    *(float *)&(*args)[8]);
}
// 506604: variable 'back_chain' is possibly undefined
->
/----- (000000000047144C) ----------------------------------------------------
void __fastcall YS::OBJ::move_request(YS::OBJ_133 *const this, const kn::FVector *dir, double speed)
{
  kn::FVector *v5; // r30

  v5 = (kn::FVector *)(unsigned int)((_DWORD)this + 2176);
  kn::FVector::operator=(v5, dir);
  Axa::FVECTOR4::normalize(v5);
  *(float *)&(*this)[2188] = speed;
}


---
---
---
appears in:

---
---
---
example usage from NA

