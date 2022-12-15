---
---
---
name: trap_get_path_current_dir
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
syscall 5, 20 ; trap_get_path_current_dir (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall Ti::Path::get_current_dir(Ti::Path_3 *const this, __int64 a2)
/----- (000000000065A17C) ----------------------------------------------------
void __fastcall Ti::trap_get_path_current_dir(BD_VALUE_26 *args)
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
      Ti::Path::get_current_dir((Ti::Path_3 *const)&v7, v5);
      kn::FVector::operator=((kn::FVector *const)&Ti::ResultVector, &v7);
      *(_DWORD *)args = (unsigned int)&Ti::ResultVector;
    }
  }
}
// 65A1A0: variable 'back_chain' is possibly undefined
// 3EAF2C0: using guessed type int Ti::ResultVector;
->
/----- (0000000000656864) ----------------------------------------------------
void __fastcall Ti::Path::get_current_dir(Ti::Path_3 *const this, __int64 a2)
{
  float v2; // r5
  double v4; // fp1

  v2 = *(float *)(a2 + 24);
  v4 = (float)(__int64)v2;
  if ( (float)((float)(__int64)v2 - v2) && (LODWORD(v2) & 0x7F800000u) < 0x4B800000 )
  {
    if ( v2 < 0.0 )
      v4 = (float)((int)v2 - 1);
  }
  else
  {
    v4 = *(float *)(a2 + 24);
  }
  Ti::Path::calc_curve_speed(this, (_DWORD *)a2, (int)v4, (float)(*(float *)(a2 + 24) - (float)v4));
  Axa::FVECTOR4::normalize((Axa::FVECTOR4 *const)this);
}


---
---
---
appears in:

---
---
---
example usage from NA

