---
---
---
name: trap_end_rtn_action
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
syscall 5, 4 ; trap_end_rtn_action (1 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::NPC::end_rtn_action(YS::NPC_0 *const this)
/----- (0000000000659390) ----------------------------------------------------
void __fastcall Ti::trap_end_rtn_action(BD_VALUE_26 *args)
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
  YS::NPC::end_rtn_action((YS::NPC_0 *const)*(unsigned int *)(v1 + 4));
}
// 6593B0: variable 'back_chain' is possibly undefined
->
/----- (00000000004F0020) ----------------------------------------------------
void __fastcall YS::NPC::end_rtn_action(YS::NPC_0 *const this)
{
  int v2; // r7
  int v3; // r9
  int v4; // r5
  __int8 v5; // r5
  double v6; // fp1
  double v7; // fp2
  __int8 v8; // r5
  __int8 v9; // r6
  double v10; // fp2

  v2 = *(_DWORD *)&(*this)[2636];
  v3 = *(_DWORD *)((unsigned int)((_DWORD)this + 2624) + 4LL);
  *(_DWORD *)(unsigned int)((_DWORD)this + 2720) = *(_DWORD *)(unsigned int)((_DWORD)this + 2624);
  v4 = *(_DWORD *)((unsigned int)((_DWORD)this + 2624) + 8LL);
  *(_DWORD *)((unsigned int)((_DWORD)this + 2720) + 4LL) = v3;
  *(_DWORD *)((unsigned int)((_DWORD)this + 2720) + 8LL) = v4;
  *(_DWORD *)&(*this)[2732] = v2;
  kn::FVector::operator=(
    (kn::FVector *const)(unsigned int)((_DWORD)this + 2736),
    (const kn::FVector *)(unsigned int)((_DWORD)this + 2640));
  v5 = (*this)[2660];
  *(_DWORD *)&(*this)[2752] = *(_DWORD *)&(*this)[2656];
  v6 = *(float *)&(*this)[2664];
  (*this)[2756] = v5;
  v7 = *(float *)&(*this)[2668];
  *(float *)&(*this)[2760] = v6;
  v8 = (*this)[2672];
  *(float *)&(*this)[2764] = v7;
  v9 = (*this)[2673];
  (*this)[2768] = v8;
  (*this)[2769] = v9;
  kn::FVector::operator=(
    (kn::FVector *const)(unsigned int)((_DWORD)this + 2784),
    (const kn::FVector *)(unsigned int)((_DWORD)this + 2688));
  v10 = *(float *)&(*this)[2864];
  *(float *)&(*this)[2800] = *(float *)&(*this)[2704];
  *(float *)&(*this)[2816] = v10;
  (*this)[2672] = 0;
  *(_DWORD *)&(*this)[2624] = 0;
  *(_DWORD *)&(*this)[2628] = 0;
  *(_DWORD *)&(*this)[2636] = 0;
  *(_DWORD *)&(*this)[2656] = 0;
  (*this)[2673] = 0;
}


---
---
---
appears in:

---
---
---
example usage from NA

