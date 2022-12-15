---
---
---
name: trap_friend_get_current_action
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
syscall 7, 16 ; trap_friend_get_current_action (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (0000000000623A40) ----------------------------------------------------
void __fastcall Ts::trap_friend_get_current_action(BD_VALUE_24 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  int v4; // r4
  __int64 v5; // r30
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
  v4 = -1;
  v5 = *(unsigned int *)(*(unsigned int *)(v2 + 4) + 0xCLL);
  if ( (_DWORD)v5 )
    v4 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)args = v4;
}
// 623A64: variable 'back_chain' is possibly undefined

//COMPLICATED
---
---
---
appears in:

---
---
---
example usage from NA

