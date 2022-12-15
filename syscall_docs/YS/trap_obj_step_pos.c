---
---
---
name: trap_obj_step_pos
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
syscall 1, 98 ; trap_obj_step_pos (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
float __fastcall YS::OBJ::get_step_height(YS::OBJ_133 *const this)
/----- (0000000000506E50) ----------------------------------------------------
void __fastcall YS::trap_obj_step_pos(BD_VALUE_21 *args)
{
  __int64 v2; // r31
  unsigned __int64 v3; // r28
  const kn::FVector *v4; // r3
  __int64 v5; // r31
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v4 = (const kn::FVector *)YS::OBJ::get_pos((YS::OBJ_125 *const)*(unsigned int *)(v2 + 4));
  kn::FVector::operator=((kn::FVector *const)&ResultVector, v4);
  v5 = *(unsigned int *)args;
  if ( !(_DWORD)v5 )
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
  if ( (v5 & 3) != 0 )
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
  flt_2B75D54 = YS::OBJ::get_step_height((YS::OBJ_133 *const)*(unsigned int *)(v5 + 4));
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 506E80: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;
// 2B75D54: using guessed type float flt_2B75D54;
->
/----- (0000000000470F40) ----------------------------------------------------
float __fastcall YS::OBJ::get_step_height(YS::OBJ_133 *const this)
{
  int v1; // r4
  double v2; // fp1

  v1 = *(_DWORD *)(*(unsigned int *)&(*this)[12] + 8LL);
  if ( (v1 & 0x20) != 0 && (v1 & 1) != 0 )
    v2 = *(float *)&(*this)[224];
  else
    v2 = YS::OBJ::get_shadow_height(this);
  return v2;
}


---
---
---
appears in:

---
---
---
example usage from NA

