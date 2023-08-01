---
---
---
name: trap_obj_enable_occ
---
---
---
category: culling
---
---
---
documentation level: untested
---
---
---
push objocc ; (YS::OBJOCC_133 *)  (an occlusion culling object)
syscall 1, 256 ; trap_obj_enable_occ (1 in, 0 out)
---
---
---
description: enable occlusion culling for all bones in an culling object
---
---
---
decompiled code:
void __fastcall YS::OBJOCC::enable_all(YS::OBJOCC_133 *const this)
/----- (00000000004FB8FC) ----------------------------------------------------
void __fastcall YS::trap_obj_enable_occ(BD_VALUE_21 *args)
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
  YS::OBJOCC::enable_all((YS::OBJOCC_133 *const)(unsigned int)(*(_DWORD *)(v1 + 4) + 2048));
}
// 4FB91C: variable 'back_chain' is possibly undefined
->
/----- (0000000000472C40) ----------------------------------------------------
void __fastcall YS::OBJOCC::enable_all(YS::OBJOCC_133 *const this)
{
  __int64 v1; // ctr
  __int64 v2; // r3
  unsigned int v3; // r5

  if ( *(_DWORD *)this && *(int *)(*(unsigned int *)this + 4LL) > 0 )
  {
    v1 = *(unsigned int *)(*(unsigned int *)this + 4LL);
    v2 = *(unsigned int *)&(*this)[4];
    do
    {
      v3 = v2 + 128;
      v2 += 144LL;
      *(_DWORD *)(unsigned int)(*(_DWORD *)v3 + 8) &= 0xFFFFFFFD;
      --v1;
    }
    while ( v1 );
  }
}


---
---
---
appears in:
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
---
---
---
example usage from obj\B_LK120\b_lk.bdscript
TR14:
 pushFromPWp W576
 gosub 4, L4604
 pushFromPWp W576
 gosub 4, L4615
 pushFromPWp W576
 syscall 1, 256 ; trap_obj_enable_occ (1 in, 0 out)
 ret 
