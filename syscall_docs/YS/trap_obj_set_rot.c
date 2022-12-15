---
---
---
name: trap_obj_set_rot
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
syscall 1, 1 ; trap_obj_set_rot (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::set_rot(YS::OBJ_125 *const this, double rot)
/----- (00000000004FA49C) ----------------------------------------------------
void __fastcall YS::trap_obj_set_rot(BD_VALUE_21 *args)
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
  YS::OBJ::set_rot((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4), *(float *)&(*args)[4]);
}
// 4FA4C0: variable 'back_chain' is possibly undefined
->
/----- (000000000045ECAC) ----------------------------------------------------
void __fastcall YS::OBJ::set_rot(YS::OBJ_125 *const this, double rot)
{
  kn::FVector v4; // [sp+70h] [-30h] BYREF

  if ( YS::OBJ::is_xyzrot(this) )
  {
    ErrorPrintf("*ERROR! ");
    ErrorPrintf("%s is xyz-rot, but called set_rot", (const char *)(unsigned int)(*(_DWORD *)&(*this)[8] + 8));
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 656);
  }
  YS::MATH::RotToDir(&v4.x, rot);
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1360), &v4);
  *(float *)&(*this)[1644] = *(float *)&(*this)[1372];
  *(_DWORD *)(unsigned int)((_DWORD)this + 2040) &= 0xFFFFFFF7;
}


---
---
---
appears in:

---
---
---
example usage from NA

