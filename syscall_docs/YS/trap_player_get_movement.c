---
---
---
name: trap_player_get_movement
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
syscall 1, 113 ; trap_player_get_movement (1 in, 1 out)
pop pos ; ( kn::FVector) 
---
---
---
description: Get the position that the player is moving to
---
---
---
decompiled code:
void __fastcall YS::PLAYER::get_movement(YS::PLAYER_44 *const this, __int64 a2)
/----- (0000000000507C70) ----------------------------------------------------
void __fastcall YS::trap_player_get_movement(BD_VALUE_21 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r28
  __int64 v4; // r29
  __int64 back_chain; // [sp+0h] [-B0h]
  kn::FVector v6; // [sp+70h] [-40h] BYREF

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
  YS::PLAYER::get_movement((YS::PLAYER_44 *const)&v6, v4);
  kn::FVector::operator=((kn::FVector *const)&ResultVector, &v6);
  *(_DWORD *)args = (unsigned int)&ResultVector;
}
// 507CA0: variable 'back_chain' is possibly undefined
// 2B75D50: using guessed type float ResultVector;
->
/----- (000000000047F048) ----------------------------------------------------
void __fastcall YS::PLAYER::get_movement(YS::PLAYER_44 *const this, __int64 a2)
{
  YS::PLAYER::PadToMovement((const kn::FVector *)this, (FLOAT *)(unsigned int)(*(_DWORD *)(a2 + 2884) + 2608));
}


---
---
---
appears in:
limit\goofy\limi.bdscript
limit\goofy_wi\limi.bdscript
limit\jack\limi.bdscript
limit\mulan\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\F_HB090\f_hb.bdscript ((F) CoR’s whirlwind (jumpable) (HB))
obj\F_MU070\f_mu.bdscript ((F) Wind ride (Reaction Command) (MU))
obj\F_MU070_BOSS\f_mu.bdscript ((F) Wind ride (Reaction Command) (BOSS) (MU))
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX730\m_ex.bdscript ((M) Tornado Step)
---
---
---
example usage from limit\goofy\limi.bdscript
L1410:
 jz L1742
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 1, 113 ; trap_player_get_movement (1 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 memcpyToSp 16, 64
 pushFromPSp 64
 fetchValue 12
 pushImmf 0.1
 subf 
 infzf 
 jz L1452
 pushImmf 0.1
 popToSp 84
 pushImmf 0
 popToSp 80
 jmp L1473
