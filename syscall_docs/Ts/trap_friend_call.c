---
---
---
name: trap_friend_call
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
push unk2 ; (unknown) 
syscall 7, 26 ; trap_friend_call (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
__int64 __fastcall kn::Friend::callFromScript(kn::Friend_0 *const this, __int64 no)
/----- (0000000000624290) ----------------------------------------------------
void __fastcall Ts::trap_friend_call(BD_VALUE_24 *args)
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
  *(_DWORD *)args = kn::Friend::callFromScript((kn::Friend_0 *const)*(unsigned int *)(v2 + 4), *(int *)&(*args)[4]);
}
// 6242B4: variable 'back_chain' is possibly undefined
->
/----- (00000000000E5400) ----------------------------------------------------
__int64 __fastcall kn::Friend::callFromScript(kn::Friend_0 *const this, __int64 no)
{
  unsigned int *v4; // r5
  __int64 back_chain; // [sp+0h] [-90h]

  v4 = (unsigned int *)*(unsigned int *)&(*this)[3340];
  if ( !(_DWORD)v4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "callFromScript_",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\friend.cpp",
      2763LL,
      "callFromScript",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\friend.cpp", 2763);
    v4 = (unsigned int *)*(unsigned int *)&(*this)[3340];
  }
  return ((__int64 (__fastcall *)(kn::Friend_0 *const, __int64))*v4)(this, no);
}
// E5424: variable 'back_chain' is possibly undefined


---
---
---
appears in:

---
---
---
example usage from NA

