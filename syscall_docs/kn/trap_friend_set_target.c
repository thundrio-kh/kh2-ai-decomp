---
---
---
name: trap_friend_set_target
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
push unk2 ; (unknown)  (pushFromPSp: 4) (pushFromPSpVal: 0)
push unk3 ; (unknown)  (syscall: 2, 23 ; trap_btlobj_target (1 in, 1 out))
syscall 10, 14 ; trap_friend_set_target (3 in, 0 out)
---
---
---
description: Set the target for a friend
---
---
---
decompiled code:
void __fastcall kn::Friend::setTarget(kn::Friend_0 *const this, kn::Friend_0::SET_TARGET_MODE mode, YS::TARGET_10 *target)
/----- (0000000000611D6C) ----------------------------------------------------
void __fastcall kn::trap_friend_set_target(BD_VALUE_22 *args)
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
  kn::Friend::setTarget(
    (kn::Friend_0 *const)*(unsigned int *)(v2 + 4),
    *(kn::Friend_0::SET_TARGET_MODE *)&(*args)[4],
    (YS::TARGET_10 *)*(unsigned int *)&(*args)[8]);
}
// 611D90: variable 'back_chain' is possibly undefined
->
/----- (00000000000E5288) ----------------------------------------------------
void __fastcall kn::Friend::setTarget(kn::Friend_0 *const this, kn::Friend_0::SET_TARGET_MODE mode, YS::TARGET_10 *target)
{
  YS::TARGET_10 *v5; // r30
  unsigned int v6; // r4

  v5 = (YS::TARGET_10 *)(unsigned int)((_DWORD)this + 2548);
  if ( mode > SET_TARGET_DIRECT )
  {
    if ( mode <= SET_TARGET_PLAYER_TARGET )
    {
      *(_DWORD *)v5 = kn::Friend::playerTarget;
      *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 4LL) = dword_A1CB08;
      *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 8LL) = dword_A1CB0C;
      *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 0xCLL) = HIDWORD(qword_A1CB10);
      *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 0x10LL) = qword_A1CB10;
    }
    else if ( mode <= SET_TARGET_PLAYER_ATTACKER )
    {
      YS::TARGET::clear((YS::TARGET_108 *const)(unsigned int)((_DWORD)this + 2548));
      kn::Friend::searchEnemy_playerAttacker(this, v5, v5);
    }
  }
  else if ( mode > -1 && mode > SET_TARGET_UNLOCK )
  {
    *(_DWORD *)v5 = *(_DWORD *)target;
    *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 4LL) = *(_DWORD *)&(*target)[4];
    *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 8LL) = *(_DWORD *)&(*target)[8];
    *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 0xCLL) = *(_DWORD *)&(*target)[12];
    *(_DWORD *)((unsigned int)((_DWORD)this + 2548) + 0x10LL) = *(_DWORD *)&(*target)[16];
  }
  if ( !(unsigned int)YS::TARGET::is_exist(v5) || !*(_DWORD *)&(*this)[2548] )
    YS::TARGET::clear(v5);
  if ( mode )
    v6 = *(_DWORD *)&(*this)[2944] | 0x10000;
  else
    v6 = *(_DWORD *)&(*this)[2944] & 0xFFFEFFFF;
  *(_DWORD *)&(*this)[2944] = v6;
}
// A1CB04: using guessed type int kn::Friend::playerTarget;
// A1CB08: using guessed type int dword_A1CB08;
// A1CB0C: using guessed type int dword_A1CB0C;
// A1CB10: using guessed type __int64 qword_A1CB10;


---
---
---
appears in:
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\P_EH000\p_eh.bdscript ((P) Riku)
obj\P_EH000_LAST\p_eh.bdscript ((P) Riku (final battle))
obj\P_EX030\p_ex.bdscript ((P) Goofy)
obj\P_EX030_NM\p_ex.bdscript ((P) Goofy (NM))
obj\P_EX030_TR\p_ex.bdscript ((N) Goofy (TR))
obj\P_EX030_XM\p_ex.bdscript ((P) Goofy (XM))
obj\P_LK030\p_lk.bdscript ((P) Goofy (LK))
obj\P_WI030\p_ex.bdscript ((P) Goofy (WI))
---
---
---
example usage from obj\B_EX260\b_ex.bdscript
L545:
 popToSp 0
 pushImm 0
 gosub 12, L618
 memcpyToSp 16, 40
 pushFromPSp 40
 memcpyToSp 16, 24
 pushFromPSp 24
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L617
 pushFromPSp 4
 pushFromPSp 24
 fetchValue 4
 gosub 12, L640
 pushFromPSp 4
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 eqz 
 jz L615
 pushFromPSp 4
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromFSp 0
 pushFromPSp 4
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 6, 11 ; trap_target_searcher_search_obj (3 in, 0 out)
 pushFromPSp 4
 pushImm 1
 pushFromPSp 4
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 10, 14 ; trap_friend_set_target (3 in, 0 out)
 jmp L615
