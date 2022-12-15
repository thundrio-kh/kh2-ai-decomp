---
---
---
name: trap_friend_set_target
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
push unk3 ; (unknown) 
syscall 10, 14 ; trap_friend_set_target (3 in, 0 out)
---
---
---
description: 
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

---
---
---
example usage from NA

