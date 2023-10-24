---
---
---
name: trap_get_path_current_pos
---
---
---
category: path
---
---
---
documentation level: untested
---
---
---
push path ; (Ti::Path_3) (Path object)
syscall 5, 19 ; trap_get_path_current_pos (1 in, 1 out)
push pos ; (kn::FVector *)  (A position vector)
---
---
---
description: Get the current position of the path
---
---
---
decompiled code:
void __fastcall Ti::Path::get_current_pos(Ti::Path_3 *const this, __int64 a2)
/----- (000000000065A02C) ----------------------------------------------------
void __fastcall Ti::trap_get_path_current_pos(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  __int64 v5; // r4
  __int64 back_chain; // [sp+0h] [-A0h]
  kn::FVector v7; // [sp+70h] [-30h] BYREF

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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (_DWORD)v4 )
  {
    v5 = *(unsigned int *)(v4 + 1288);
    if ( (_DWORD)v5 )
    {
      Ti::Path::get_current_pos((Ti::Path_3 *const)&v7, v5);
      kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v7);
      *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
    }
  }
}
// 65A050: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;
->
/----- (0000000000656818) ----------------------------------------------------
void __fastcall Ti::Path::get_current_pos(Ti::Path_3 *const this, __int64 a2)
{
  __int64 v2; // r5

  v2 = (int)*(float *)(a2 + 24);
  Ti::Path::calc_curve_pos(this, (_DWORD *)a2, v2, (float)(*(float *)(a2 + 24) - (float)(int)v2));
}


---
---
---
appears in:

---
---
---
example usage from NA

