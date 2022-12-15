---
---
---
name: trap_obj_is_air
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
syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::is_jump(YS::OBJ_128 *const this)
/----- (00000000005044D0) ----------------------------------------------------
void __fastcall YS::trap_obj_is_air(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 v5; // r29
  int v6; // r30
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
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp",
      384LL,
      "trap_obj_is_air",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapfield.cpp", 384);
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
  v5 = *(unsigned int *)(v4 + 4);
  v6 = 0;
  if ( (unsigned int)YS::OBJ::is_jump((YS::OBJ_128 *const)v5)
    || (*(_DWORD *)(*(unsigned int *)(v5 + 12) + 8LL) & 2) != 0
    || (*(_DWORD *)(v5 + 352) & 0x40) != 0 )
  {
    v6 = 1;
  }
  *(_DWORD *)args = v6;
}
// 5044F4: variable 'back_chain' is possibly undefined
->
/----- (00000000004653D0) ----------------------------------------------------
__int64 __fastcall YS::OBJ::is_jump(YS::OBJ_128 *const this)
{
  const char *v2; // r3
  __int64 result; // r3
  int v4; // r4

  if ( !(unsigned int)YS::OBJ::is_valid(this) )
  {
    ErrorPrintf("*ERROR! ");
    v2 = YS::OBJ::get_entry_name(this);
    ErrorPrintf("'%s' is not exist, but access", v2);
    ErrorPrintf(" *\n");
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\objcheck.cpp", 216);
  }
  result = 0LL;
  if ( (*(_DWORD *)(*(unsigned int *)&(*this)[12] + 8LL) & 1) != 0
    || (v4 = *(_DWORD *)&(*this)[352], (v4 & 0x20) != 0)
    || (v4 & 0x1000000) != 0
    || (*(_DWORD *)&(*this)[264] & 0x800000) != 0 )
  {
    result = 1LL;
  }
  return result;
}


---
---
---
appears in:

---
---
---
example usage from NA

