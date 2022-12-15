---
---
---
name: trap_friend_get
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
syscall 6, 14 ; trap_friend_get (1 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
YS::FRIEND_13 *__fastcall YS::FRIEND::Get(int n)
/----- (0000000000626154) ----------------------------------------------------
void __fastcall Ts::trap_friend_get(BD_VALUE_25 *args)
{
  *(_DWORD *)args = (unsigned int)YS::FRIEND::Get(*(_DWORD *)args);
}
->
/----- (0000000000431498) ----------------------------------------------------
YS::FRIEND_13 *__fastcall YS::FRIEND::Get(int n)
{
  __int64 back_chain; // [sp+0h] [-80h]

  if ( n < 0 || n >= 2 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "n >= 0 && n < FRIEND::MAX",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\friend.cpp",
      199LL,
      "Get",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\friend.cpp", 199);
  }
  return (YS::FRIEND_13 *)(unsigned int)YS::Friend[n];
}
// 4314B8: variable 'back_chain' is possibly undefined
// 2A96DC8: using guessed type int YS::Friend[];


---
---
---
appears in:

---
---
---
example usage from NA

