---
---
---
name: trap_obj_set_xyzrot
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
syscall 8, 2 ; trap_obj_set_xyzrot (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::set_xyzrot(YS::OBJ_125 *const this, const kn::FVector *rot)
/----- (0000000000617174) ----------------------------------------------------
void __fastcall ryj::trap_obj_set_xyzrot(BD_VALUE_23 *args)
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
  YS::OBJ::set_xyzrot((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 617198: variable 'back_chain' is possibly undefined
->
/----- (0000000000461160) ----------------------------------------------------
void __fastcall YS::OBJ::set_xyzrot(YS::OBJ_125 *const this, const kn::FVector *rot)
{
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1360), rot);
  *(float *)&(*this)[1372] = rot->y;
  *(_DWORD *)(unsigned int)((_DWORD)this + 2040) |= 8u;
}


---
---
---
appears in:

---
---
---
example usage from NA

