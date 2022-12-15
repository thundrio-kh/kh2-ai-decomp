---
---
---
name: trap_get_path_point_pos
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
syscall 5, 14 ; trap_get_path_point_pos (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ti::Path::get_point_pos(Ti::Path_3 *const this, _DWORD *point_index, int a3)
/----- (000000000065A730) ----------------------------------------------------
void __fastcall Ti::trap_get_path_point_pos(BD_VALUE_26 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  _DWORD *v5; // r4
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
  if ( !(_DWORD)v4 || !*(_DWORD *)(v4 + 1288) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "obj && obj->Path",
      "common",
      "C:\\hd25\\kingdom2\\taito\\trapnpc.cpp",
      230LL,
      "trap_get_path_point_pos",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\trapnpc.cpp", 230);
  }
  if ( (_DWORD)v4 )
  {
    v5 = (_DWORD *)*(unsigned int *)(v4 + 1288);
    if ( (_DWORD)v5 )
    {
      Ti::Path::get_point_pos((Ti::Path_3 *const)&v7, v5, *(_DWORD *)&(*args)[4]);
      kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v7);
      *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
    }
  }
}
// 65A754: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;
->
/----- (0000000000656188) ----------------------------------------------------
void __fastcall Ti::Path::get_point_pos(Ti::Path_3 *const this, _DWORD *point_index, int a3)
{
  int v6; // r6
  float *v7; // r3
  __int64 back_chain; // [sp+0h] [-90h]

  v6 = point_index[1];
  if ( a3 < v6 || a3 > v6 + point_index[2] )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "index>=first_point_index_ && index<=first_point_index_+point_count_",
      "common",
      "C:\\hd25\\kingdom2\\taito\\path.cpp",
      156LL,
      "get_point",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\taito\\path.cpp", 156);
  }
  v7 = (float *)(unsigned int)(point_index[32] + 32 * (a3 - a3 / point_index[3] * point_index[3]));
  *(float *)&(*this)[0] = *v7;
  *(float *)&(*this)[4] = v7[1];
  *(float *)&(*this)[8] = v7[2];
  *(float *)&(*this)[12] = v7[3];
}
// 6561B4: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

