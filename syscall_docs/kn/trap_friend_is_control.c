---
---
---
name: trap_friend_is_control
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
syscall 10, 36 ; trap_friend_is_control (1 in, 1 out)
pop has_control ; (bool) 
---
---
---
description: Returns if the friend has control
---
---
---
decompiled code:

/----- (000000000061341C) ----------------------------------------------------
void __fastcall kn::trap_friend_is_control(BD_VALUE_22 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  int v4; // r4
  int v5; // r30
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
  v4 = 0;
  v5 = *(_DWORD *)(*(unsigned int *)(v2 + 4) + 0x160LL);
  if ( (v5 & 4) != 0 || (v5 & 8) != 0 || (v5 & 0x10) != 0 )
    v4 = 1;
  *(_DWORD *)args = v4;
}
// 613440: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
---
---
---
example usage from obj\P_EX330\p_ex.bdscript
L8995:
 popToSp 0
 syscall 1, 244 ; trap_status_is_battle (0 in, 1 out)
 dup 
 jz L9007
 pushFromFSp 0
 syscall 10, 36 ; trap_friend_is_control (1 in, 1 out)
 eqzv 
