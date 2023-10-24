---
---
---
name: trap_obj_limit_peterpan_idle
---
---
---
category: special
---
---
---
documentation level: untested
---
---
---
push obj ; (YS::OBJ_125) (An object)
syscall 6, 40 ; trap_obj_limit_peterpan_idle (1 in, 0 out)
---
---
---
description: Set the peterpan limit action to idle
---
---
---
decompiled code:
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
/----- (0000000000626D48) ----------------------------------------------------
void __fastcall Ts::trap_obj_limit_peterpan_idle(BD_VALUE_25 *args)
{
  __int64 v1; // r30
  unsigned __int64 v2; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = *(unsigned int *)args;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( !(_DWORD)v1 )
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
  if ( (v1 & 3) != 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "(((u_int)arg) & 3) == 0",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h",
      49LL,
      "ToOBJ",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\vmtrap.h", 49);
  }
  YS::OBJ::change_action((YS::OBJ_125 *const)*(unsigned int *)(v1 + 4), LIMIT_PETERPAN);
}
// 626D68: variable 'back_chain' is possibly undefined
->
/----- (0000000000461364) ----------------------------------------------------
void __fastcall YS::OBJ::change_action(YS::OBJ_125 *const this, YS::ACTION::ID id)
{
  YS::ACTION_180 *v4; // r3
  int v5; // r30

  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)&(*this)[12] + 0xCLL))();
  v4 = YS::ACTION::Get(id);
  v5 = (int)v4;
  ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(_DWORD *)v4 + 8LL))();
  *(_DWORD *)&(*this)[12] = v5;
}


---
---
---
appears in:
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
---
---
---
example usage from obj\P_EX330\p_ex.bdscript
L2529:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L2575
 pushImm 0
 popToSpVal 88
 pushFromPSpVal 20
 syscall 1, 127 ; trap_obj_act_clear (1 in, 0 out)
 pushImm 0
 popToSpVal 360
 pushFromPSpVal 48
 pushImm 470
 pushImm 471
 pushImm 482
 gosub 4, L2835
 pushFromPSpVal 4
 syscall 6, 40 ; trap_obj_limit_peterpan_idle (1 in, 0 out)
 pushFromPSpVal 20
 syscall 10, 3 ; trap_friend_start_limit (1 in, 0 out)
 ret 
