---
---
---
name: trap_obj_get_action
---
---
---
category: action
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_189)  (An object)
syscall 1, 96 ; trap_obj_get_action (1 in, 1 out)
pop label ; (string) 
---
---
---
description: Gets the current action for an object
---
---
---
decompiled code:

/----- (0000000000506C1C) ----------------------------------------------------
void __fastcall YS::trap_obj_get_action(BD_VALUE_21 *args)
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
  *(_DWORD *)args = *(_DWORD *)(*(unsigned int *)(*(unsigned int *)(v2 + 4) + 0xCLL) + 4LL);
}
// 506C40: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:

---
---
---
example usage from NA

