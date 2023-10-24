---
---
---
name: trap_get_path_last_point_pos
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
syscall 5, 22 ; trap_get_path_last_point_pos (1 in, 1 out)
push pos ; (kn::FVector *)  (A position vector)
---
---
---
description: Get the position of the last point on a path
---
---
---
decompiled code:
Ti::Path::Point *__fastcall Ti::Path::last_point(Ti::Path_3 *const this)
/----- (000000000065B340) ----------------------------------------------------
void __fastcall Ti::trap_get_path_last_point_pos(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  Ti::Path_3 *v5; // r3
  Ti::Path::Point *v6; // r3
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( !(_DWORD)v4 || !*(_DWORD *)(v4 + 1288) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj && obj->Path",
      "common",
      "C:\\hd25\\kingdom2\\taito\\trapnpc.cpp",
      291LL,
      "trap_get_path_last_point_pos",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 291);
  }
  if ( (_DWORD)v4 )
  {
    v5 = (Ti::Path_3 *)*(unsigned int *)(v4 + 1288);
    if ( (_DWORD)v5 )
    {
      v6 = Ti::Path::last_point(v5);
      kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v6->pos_);
      *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
    }
  }
}
// 65B364: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;
->
/----- (00000000006558BC) ----------------------------------------------------
Ti::Path::Point *__fastcall Ti::Path::last_point(Ti::Path_3 *const this)
{
  int v1; // r4

  v1 = *(_DWORD *)&(*this)[4] + *(_DWORD *)&(*this)[8] - 1;
  return (Ti::Path::Point *)(unsigned int)(*(_DWORD *)&(*this)[128]
                                         + 32 * (v1 - v1 / *(_DWORD *)&(*this)[12] * *(_DWORD *)&(*this)[12]));
}


---
---
---
appears in:

---
---
---
example usage from NA

