---
---
---
name: trap_get_path_first_point_pos
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
syscall 5, 21 ; trap_get_path_first_point_pos (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
Ti::Path::Point *__fastcall Ti::Path::first_point(Ti::Path_3 *const this)
/----- (000000000065B190) ----------------------------------------------------
void __fastcall Ti::trap_get_path_first_point_pos(BD_VALUE_26 *args)
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
      280LL,
      "trap_get_path_first_point_pos",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 280);
  }
  if ( (_DWORD)v4 )
  {
    v5 = (Ti::Path_3 *)*(unsigned int *)(v4 + 1288);
    if ( (_DWORD)v5 )
    {
      v6 = Ti::Path::first_point(v5);
      kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v6->pos_);
      *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
    }
  }
}
// 65B1B4: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;
->
/----- (0000000000655894) ----------------------------------------------------
Ti::Path::Point *__fastcall Ti::Path::first_point(Ti::Path_3 *const this)
{
  return (Ti::Path::Point *)(unsigned int)(*(_DWORD *)&(*this)[128]
                                         + 32
                                         * (*(_DWORD *)&(*this)[4]
                                          - *(_DWORD *)&(*this)[4] / *(_DWORD *)&(*this)[12] * *(_DWORD *)&(*this)[12]));
}


---
---
---
appears in:

---
---
---
example usage from NA

