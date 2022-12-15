---
---
---
name: trap_obj_fly_to_jump
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
syscall 1, 95 ; trap_obj_fly_to_jump (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::OBJ::fly_to_jump(YS::OBJ_133 *const this)
/----- (0000000000506B10) ----------------------------------------------------
void __fastcall YS::trap_obj_fly_to_jump(BD_VALUE_21 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::OBJ::fly_to_jump((YS::OBJ_133 *const)*(unsigned int *)(v1 + 4));
}
// 506B30: variable 'back_chain' is possibly undefined
->
/----- (00000000004714B0) ----------------------------------------------------
void __fastcall YS::OBJ::fly_to_jump(YS::OBJ_133 *const this)
{
  double v2; // fp1
  double v3; // fp1
  double v4; // fp2

  YS::OBJ::change_action(this, JUMP);
  v2 = *(float *)&(*this)[2148];
  *(_DWORD *)&(*this)[220] = 0;
  *(_DWORD *)&(*this)[212] = 0;
  v3 = (float)((float)v2 / (float)0.40816328);
  v4 = *(float *)&(*this)[1348];
  *(float *)&(*this)[208] = v3;
  *(float *)&(*this)[216] = -(float)((float)((float)((float)((float)0.40816328 * (float)v3) * (float)v3) * 0.5)
                                   - (float)v4);
  kn::FVector::operator=(
    (kn::FVector *const)(unsigned int)((_DWORD)this + 32),
    (const kn::FVector *)(unsigned int)((_DWORD)this + 2144));
}


---
---
---
appears in:

---
---
---
example usage from NA

