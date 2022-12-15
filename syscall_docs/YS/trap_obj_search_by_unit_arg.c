---
---
---
name: trap_obj_search_by_unit_arg
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
syscall 1, 292 ; trap_obj_search_by_unit_arg (3 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall YS::OBJ::get_unit_arg(YS::OBJ_125 *const this, int num)
/----- (0000000000502014) ----------------------------------------------------
void __fastcall YS::trap_obj_search_by_unit_arg(BD_VALUE_21 *args)
{
  YS::OBJ_132 *v2; // r30
  YS::OBJ_125 *v3; // r3

  v2 = 0LL;
  do
  {
    v3 = YS::OBJ::Each(v2);
    v2 = v3;
  }
  while ( (_DWORD)v3 && (unsigned int)YS::OBJ::get_unit_arg(v3, *(_DWORD *)&(*args)[4]) != *(_DWORD *)&(*args)[8] );
  *(_DWORD *)(*(unsigned int *)args + 4LL) = (_DWORD)v2;
}
->
/----- (0000000000461FC0) ----------------------------------------------------
__int64 __fastcall YS::OBJ::get_unit_arg(YS::OBJ_125 *const this, int num)
{
  int v2; // r30
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = (int)this;
  if ( num <= 0 || num > 2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "num > 0 && num <= UNIT_ARG_MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp",
      1290LL,
      "get_unit_arg",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\obj.cpp", 1290);
  }
  return *(int *)(unsigned int)(v2 + 4 * num + 2076);
}
// 461FE8: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

