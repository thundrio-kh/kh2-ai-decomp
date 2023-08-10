---
---
---
name: trap_friend_use_item
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
push kind ; (int)  (ID of item to use)
push target ; (YS::OBJ_28)  (An object)
push num ; (int)  (How many of the item to use? 0 is the only value used by game scripts)
syscall 10, 29 ; trap_friend_use_item (4 in, 0 out)
---
---
---
description: Have a friend use an item
---
---
---
decompiled code:
void __fastcall kn::Friend::setCommandItem(kn::Friend_0 *const this, __int64 kind, YS::OBJ_28 *target, int num)
/----- (0000000000612D70) ----------------------------------------------------
void __fastcall kn::trap_friend_use_item(BD_VALUE_22 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r27
  kn::Friend_0 *v4; // r28
  __int64 v5; // r30
  __int64 v6; // r29
  __int64 back_chain; // [sp+0h] [-A0h]

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
  v4 = (kn::Friend_0 *)*(unsigned int *)(v2 + 4);
  v5 = *(unsigned int *)&(*args)[8];
  v6 = *(int *)&(*args)[4];
  if ( !(_DWORD)v5 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "arg != NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      48LL,
      "ToOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 48);
  }
  if ( (v5 & 3) != 0 )
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
  kn::Friend::setCommandItem(v4, v6, (YS::OBJ_28 *)*(unsigned int *)(v5 + 4), *(_DWORD *)&(*args)[12]);
}
// 612D94: variable 'back_chain' is possibly undefined
->
/----- (00000000000E51E0) ----------------------------------------------------
void __fastcall kn::Friend::setCommandItem(kn::Friend_0 *const this, __int64 kind, YS::OBJ_28 *target, int num)
{
  int v8; // r5
  const YS::COMMAND_ELEM *v9; // r3

  if ( (_DWORD)target )
  {
    v8 = *(_DWORD *)&(*this)[2548];
    *(_DWORD *)&(*this)[2940] = 0;
    if ( v8 != (_DWORD)target )
      YS::TARGET::set_obj((YS::TARGET_108 *const)(unsigned int)((_DWORD)this + 2548), target, 0);
    v9 = YS::ITEM::GetCommandElem(kind);
    YS::PARTY::exec_item((YS::PARTY_63 *const)this, v9, (YS::TARGET_85 *)(unsigned int)((_DWORD)this + 2548), num);
  }
}


---
---
---
appears in:
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_HE000\p_he.bdscript ((P) Auron)
---
---
---
example usage from obj\P_EH000\p_eh.bdscript
L7518:
 popToSp 0
 pushFromPSpVal 0
 pushImm 2
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L4255
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 0
 syscall 10, 29 ; trap_friend_use_item (4 in, 0 out)
 ret 
