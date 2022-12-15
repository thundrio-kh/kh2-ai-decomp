---
---
---
name: trap_obj_set_unit_arg
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
syscall 1, 218 ; trap_obj_set_unit_arg (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::set_unit_arg(YS::OBJ_125 *const this, int num, int value)
/----- (000000000050139C) ----------------------------------------------------
void __fastcall YS::trap_obj_set_unit_arg(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  __int64 v4; // r29
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)args;
  v3 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v2 )
    goto LABEL_5;
  if ( (v2 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  if ( !(unsigned int)YS::OBJ::is_exist((YS::OBJ_128 *const)*(unsigned int *)(v2 + 4)) )
  {
LABEL_5:
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "args[0].p != NULL && ToOBJ(args[0].p)->is_exist()",
      "common",
      "../yasui/trapobj.h",
      720LL,
      "trap_obj_set_unit_arg",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/trapobj.h", 720);
  }
  v4 = *(unsigned int *)args;
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
  YS::OBJ::set_unit_arg((YS::OBJ_125 *const)*(unsigned int *)(v4 + 4), *(_DWORD *)&(*args)[4], *(_DWORD *)&(*args)[8]);
}
// 5013C0: variable 'back_chain' is possibly undefined
->
/----- (0000000000462080) ----------------------------------------------------
void __fastcall YS::OBJ::set_unit_arg(YS::OBJ_125 *const this, int num, int value)
{
  int v3; // r29
  __int64 back_chain; // [sp+0h] [-90h]

  v3 = (int)this;
  if ( num <= 0 || num > 2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "num > 0 && num <= UNIT_ARG_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1298LL,
      "set_unit_arg",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1298);
  }
  *(_DWORD *)(unsigned int)(v3 + 4 * num + 2076) = value;
}
// 4620B0: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

