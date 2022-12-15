---
---
---
name: trap_player_set_exec_rc
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
syscall 1, 263 ; trap_player_set_exec_rc (2 in, 0 out)
---
---
---
description: 
---
---
---
decompiled code:
void __fastcall YS::PLAYER::set_exec_rc(YS::PLAYER_44 *const this, __int64 command)
/----- (0000000000507EB8) ----------------------------------------------------
void __fastcall YS::trap_player_set_exec_rc(BD_VALUE_21 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
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
  v4 = *(unsigned int *)(v2 + 4);
  if ( (*(_DWORD *)(v4 + 1416) & 0x80) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "((OBJ *)obj)->is_player()",
      "common",
      "../yasui/libys/player.h",
      204LL,
      "TOPLAYER",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../yasui/libys/player.h", 204);
  }
  YS::PLAYER::set_exec_rc((YS::PLAYER_44 *const)v4, *(int *)&(*args)[4]);
}
// 507EDC: variable 'back_chain' is possibly undefined
->
/----- (000000000047CD8C) ----------------------------------------------------
void __fastcall YS::PLAYER::set_exec_rc(YS::PLAYER_44 *const this, __int64 command)
{
  int v2; // r30

  v2 = command;
  if ( (YS::COMMAND_ELEM::Get(command)->Flag & 0x200) != 0 )
    v2 = 0;
  *(_DWORD *)&(*this)[2888] = v2;
}


---
---
---
appears in:

---
---
---
example usage from NA

