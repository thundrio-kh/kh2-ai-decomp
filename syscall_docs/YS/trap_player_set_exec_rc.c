---
---
---
name: trap_player_set_exec_rc
---
---
---
category: player
---
---
---
documentation level: untested
---
---
---
push player ; (YS::PLAYER_44 *)  (Player object)
push command ; (int)  (Reaction command ID)
syscall 1, 263 ; trap_player_set_exec_rc (2 in, 0 out)
---
---
---
description: Sets the player to be executing a reaction command
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
limit\aladdin\limi.bdscript
limit\auron\limi.bdscript
limit\beast\limi.bdscript
limit\donald\limi.bdscript
limit\donald2\limi.bdscript
limit\donald2_wi\limi.bdscript
limit\donald_wi\limi.bdscript
limit\goofy\limi.bdscript
limit\goofy2\limi.bdscript
limit\goofy2_wi\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\riku\limi.bdscript
limit\simba\limi.bdscript
limit\sparrow\limi.bdscript
limit\trinity_zz\limi.bdscript
limit\tron\limi.bdscript
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\P_AL010\p_al.bdscript ((P) Genie)
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from limit\aladdin\limi.bdscript
L342:
 popToSp 4
 popToSp 0
 pushFromPSp 8
 pushFromPSpVal 4
 fetchValue 4
 gosub 8, L361
 pushFromPSp 8
 pushFromFSp 4
 syscall 1, 263 ; trap_player_set_exec_rc (2 in, 0 out)
 ret 
