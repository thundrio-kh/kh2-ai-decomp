---
---
---
name: trap_genie_get_limit_command
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
syscall 10, 10 ; trap_genie_get_limit_command (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
__int64 __fastcall kn::Genie::getLimitCommand(kn::Genie *const this)
/----- (0000000000611818) ----------------------------------------------------
void __fastcall kn::trap_genie_get_limit_command(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::Genie *v4; // r3
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
  v4 = (kn::Genie *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  *(_DWORD *)args = kn::Genie::getLimitCommand(v4);
}
// 61183C: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Genie::getLimitCommand
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (00000000000E90C8) ----------------------------------------------------
__int64 __fastcall kn::Genie::getLimitCommand(kn::Genie *const this)
{
  int v2; // r7
  __int64 result; // r3
  int v4; // r4
  int i; // r6

  v2 = 0;
  result = 0LL;
  v4 = this->formCommand_;
  for ( i = 0; v4 != *(__int16 *)((char *)&kn::command + i); i += 6 )
  {
    if ( ++v2 >= 6 )
      return result;
  }
  return *((__int16 *)&kn::command + 3 * v2 + 1);
}
// 7F5728: using guessed type void *kn::command;


---
---
---
appears in:
obj\P_AL010\p_al.bdscript ((P) Genie)
---
---
---
example usage from obj\P_AL010\p_al.bdscript
L4091:
 pushFromFSp 0
 pushFromFSp 0
 syscall 10, 10 ; trap_genie_get_limit_command (1 in, 1 out)
 gosub 4, L4216
 drop 
 halt 
 jmp L4070
