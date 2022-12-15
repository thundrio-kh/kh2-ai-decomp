---
---
---
name: trap_obj_get_moved
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
syscall 1, 62 ; trap_obj_get_moved (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000005046F8) ----------------------------------------------------
void __fastcall YS::trap_obj_get_moved(BD_VALUE_21 *args)
{
  __int64 v2; // r31
  unsigned __int64 v3; // r28
  __int64 back_chain; // [sp+0h] [-A0h]

  v2 = *(unsigned int *)args;
  if ( !LS_475_LV_56 )
  {
    LS_475_LV_56 = 1;
    LS_475_v.z = 0.0;
    LS_475_v.y = 0.0;
    LS_475_v.x = 0.0;
    LS_475_v.w = 1.0;
  }
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
  kn::FVector::operator=(&LS_475_v, (const kn::FVector *)(unsigned int)(*(_DWORD *)(v2 + 4) + 2144));
  *(_DWORD *)args = (unsigned int)&LS_475_v;
}
// 504768: variable 'back_chain' is possibly undefined
// 2B75EC8: using guessed type char LS_475_LV_56;

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

