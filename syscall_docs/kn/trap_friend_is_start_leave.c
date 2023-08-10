---
---
---
name: trap_friend_is_start_leave
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
syscall 10, 42 ; trap_friend_is_start_leave (1 in, 1 out)
pop is_start_leave ; (bool) 
---
---
---
description: Checks if the friend has started the leave action
---
---
---
decompiled code:
bool __fastcall kn::Friend::isStartLeave(kn::Friend_0 *const this)
/----- (0000000000613ADC) ----------------------------------------------------
void __fastcall kn::trap_friend_is_start_leave(BD_VALUE_22 *args)
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
  *(_DWORD *)args = kn::Friend::isStartLeave((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
}
// 613B00: variable 'back_chain' is possibly undefined
->
/----- (00000000000E54E4) ----------------------------------------------------
bool __fastcall kn::Friend::isStartLeave(kn::Friend_0 *const this)
{
  return (_cntlzw(*(_DWORD *)&(*this)[2944] & 0x40000000) & 0x20) == 0;
}


---
---
---
appears in:
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
---
---
---
example usage from obj\P_EX360\p_ex.bdscript
L1237:
 dup 
 jz L1246
 pushFromPSpVal 60
 syscall 10, 42 ; trap_friend_is_start_leave (1 in, 1 out)
 eqz 
 eqzv 
