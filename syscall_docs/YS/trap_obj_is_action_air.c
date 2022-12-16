---
---
---
name: trap_obj_is_action_air
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
push unk1 ; (unknown)  (pushFromFSp: 0)
syscall 1, 224 ; trap_obj_is_action_air (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:

/----- (00000000004FEB80) ----------------------------------------------------
void __fastcall YS::trap_obj_is_action_air(BD_VALUE_21 *args)
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
  v5 = *(_DWORD *)(*(unsigned int *)(*(unsigned int *)(v2 + 4) + 0xCLL) + 8LL);
  if ( (v5 & 1) != 0 || (v5 & 2) != 0 )
    v4 = 1;
  *(_DWORD *)args = v4;
}
// 4FEBA4: variable 'back_chain' is possibly undefined

//BASIC
---
---
---
appears in:
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
---
---
---
example usage from obj\M_EX690\m_ex.bdscript
L390:
 pushFromFSp 0
 syscall 1, 224 ; trap_obj_is_action_air (1 in, 1 out)
 jz L399
 halt 
 jmp L390
