---
---
---
name: trap_friend_get_target_size
---
---
---
category: friend
---
---
---
documentation level: untested
---
---
---
push friend ; (kn::Friend_0 *)  (A friend object)
syscall 7, 15 ; trap_friend_get_target_size (1 in, 1 out)
pop size ; (float) 
---
---
---
description: Get the collision size of a friends target
---
---
---
decompiled code:
float __fastcall kn::Friend::getTargetCollisionSize(kn::Friend_0 *const this)
/----- (0000000000623924) ----------------------------------------------------
void __fastcall Ts::trap_friend_get_target_size(BD_VALUE_24 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
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
  *(float *)&(*args)[0] = kn::Friend::getTargetCollisionSize((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
}
// 623948: variable 'back_chain' is possibly undefined
->
/----- (00000000000E4FA0) ----------------------------------------------------
float __fastcall kn::Friend::getTargetCollisionSize(kn::Friend_0 *const this)
{
  return *(float *)&(*this)[3072];
}


---
---
---
appears in:

---
---
---
example usage from NA

