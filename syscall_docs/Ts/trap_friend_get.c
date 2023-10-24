---
---
---
name: trap_friend_get
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
push n ; (int)  (Slot index)
syscall 6, 14 ; trap_friend_get (1 in, 1 out)
pop friend ; (kn::Friend_0 *) 
---
---
---
description: get a friend object for the friend in slot n
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
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX270_SIDECAR\b_ex.bdscript ((F) Xemnas’s dragon sidecar)
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
obj\F_EH060\f_eh.bdscript ((F) Floating building 2 (EH))
obj\F_EH070\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (right) (EH))
obj\F_EH080\f_eh.bdscript ((F) Xemnas’s dragon core cylinder (left) (EH))
obj\F_NM130\f_nm.bdscript ((F) ??? (NM))
---
---
---
example usage from obj\B_EX260\b_ex.bdscript
L618:
 popToSp 0
 pushFromPSp 4
 pushFromFSp 0
 syscall 6, 14 ; trap_friend_get (1 in, 1 out)
 gosub 8, L631
 pushFromPSp 4
 ret 
