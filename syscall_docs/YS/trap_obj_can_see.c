---
---
---
name: trap_obj_can_see
---
---
---
category: object
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_128) (An object) 
push target_obj ; (YS::OBJ_128) (A target object)
syscall 1, 347 ; trap_obj_can_see (2 in, 1 out)
pop can_see ; (bool) 
---
---
---
description: Checks if object can see target object
---
---
---
decompiled code:
void __fastcall YS::OBJ::get_target_pos(YS::OBJ_125 *const this, YS::OBJ_168 *a2)
void __fastcall YS::OBJ::get_target_pos(YS::OBJ_125 *const this, YS::OBJ_168 *a2)
bool __fastcall YS::BG::CanSee(const kn::FVector *eye, const kn::FVector *target, int type)
/----- (00000000004FB1D4) ----------------------------------------------------
void __fastcall YS::trap_obj_can_see(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 back_chain; // [sp+0h] [-B0h]
  kn::FVector v6; // [sp+70h] [-40h] BYREF
  kn::FVector v7; // [sp+80h] [-30h] BYREF

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
  YS::OBJ::get_target_pos((YS::OBJ_125 *const)&v6, (YS::OBJ_168 *)*(unsigned int *)(v2 + 4));
  v4 = *(unsigned int *)&(*args)[4];
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v4 & 3) != 0 )
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
  YS::OBJ::get_target_pos((YS::OBJ_125 *const)&v7, (YS::OBJ_168 *)*(unsigned int *)(v4 + 4));
  *(_DWORD *)args = YS::BG::CanSee(&v6, &v7, 4);
}
// 4FB1F8: variable 'back_chain' is possibly undefined

//COMPLICATED YS::OBJ::get_target_pos YS::OBJ::get_target_pos YS::BG::CanSee
->
/----- (0000000000461984) ----------------------------------------------------
void __fastcall YS::OBJ::get_target_pos(YS::OBJ_125 *const this, YS::OBJ_168 *a2)
{
  YS::TARGET_108 v4; // [sp+70h] [-30h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v4);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v4, a2, 0);
  YS::TARGET::get_pos((const YS::TARGET_108 *const)this, (const YS::TARGET_108 *)v4);
}


->
/----- (0000000000461984) ----------------------------------------------------
void __fastcall YS::OBJ::get_target_pos(YS::OBJ_125 *const this, YS::OBJ_168 *a2)
{
  YS::TARGET_108 v4; // [sp+70h] [-30h] BYREF

  YS::TARGET::clear((YS::TARGET_108 *const)v4);
  YS::TARGET::set_obj((YS::TARGET_108 *const)v4, a2, 0);
  YS::TARGET::get_pos((const YS::TARGET_108 *const)this, (const YS::TARGET_108 *)v4);
}


->
/----- (000000000040D794) ----------------------------------------------------
bool __fastcall YS::BG::CanSee(const kn::FVector *eye, const kn::FVector *target, int type)
{
  int v4[8]; // [sp+70h] [-20h] BYREF

  v4[2] = 0;
  v4[1] = 0;
  v4[0] = 0;
  v4[3] = 1065353216;
  return !YS::BGHIT::check_line((YS::BGHIT_0 *const)v4, eye, target, type);
}


---
---
---
appears in:
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
---
---
---
example usage from obj\B_CA010\b_ca.bdscript
L6358:
 pushFromFSp 64
 pushImmf 500
 subf 
 infzf 
 dup 
 jz L6375
 pushFromFSp 0
 pushFromPSp 80
 syscall 1, 347 ; trap_obj_can_see (2 in, 1 out)
 eqzv 
