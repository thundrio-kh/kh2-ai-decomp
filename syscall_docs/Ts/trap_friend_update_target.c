---
---
---
name: trap_friend_update_target
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
push unk1 ; (unknown)  (pushFromFSp: 0) (pushFromPWp: W364) (syscall: 1, 140 ; trap_target_is_exist (1 in, 1 out)) (pushFromPSpVal: 0)
push unk2 ; (unknown)  (pushImm: 1) (eqz: )
syscall 7, 19 ; trap_friend_update_target (2 in, 1 out)
pop unk ; (unknown) 
---
---
---
description: 
---
---
---
decompiled code:
bool __fastcall kn::Friend::updateTarget(kn::Friend_0 *a1, bool a2)
/----- (0000000000623DA4) ----------------------------------------------------
void __fastcall Ts::trap_friend_update_target(BD_VALUE_24 *args)
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
  *(_DWORD *)args = kn::Friend::updateTarget(
                      (kn::Friend_0 *const)*(unsigned int *)(v2 + 4),
                      (_cntlzw(*(_DWORD *)&(*args)[4]) & 0x20) == 0);
}
// 623DC8: variable 'back_chain' is possibly undefined
->
/----- (00000000000E1C48) ----------------------------------------------------
bool __fastcall kn::Friend::updateTarget(kn::Friend_0 *a1, bool a2)
{
  __int64 v2; // ctr
  char v3; // cr32

  do
    --v2;
  while ( v2 && !v3 );
  return kn::Friend::updateTarget(a1, a2);
}
// E1C48: variable 'v2' is possibly undefined
// E1C48: variable 'v3' is possibly undefined


/----- (00000000000E1C50) ----------------------------------------------------
bool __fastcall kn::Friend::updateTarget(kn::Friend_0 *const this, bool force)
{
  BOOL v3; // r30
  float *v4; // r3
  int v5; // r5
  double v6; // fp31
  int v7; // r3
  int v8; // r4
  YS::TARGET_108 v10; // [sp+70h] [-80h] BYREF
  float v11; // [sp+84h] [-6Ch]
  float v12; // [sp+88h] [-68h]
  float v13; // [sp+8Ch] [-64h]
  kn::FVector v14[3]; // [sp+90h] [-60h] BYREF

  v3 = force;
  v4 = (float *)YS::OBJ::get_pos((YS::OBJ_125 *const)this);
  *(float *)&v10[16] = *v4;
  v5 = *(_DWORD *)&(*this)[2944];
  v11 = v4[1];
  v12 = v4[2];
  v13 = v4[3];
  *(_DWORD *)&(*this)[2944] = v5 & 0xFFFFFFF7;
  YS::TARGET::clear((YS::TARGET_108 *const)&v14[1]);
  YS::TARGET::set_obj((YS::TARGET_108 *const)&v14[1], (YS::OBJ_168 *)(unsigned int)kn::Friend::partyChara, 0);
  YS::TARGET::get_pos((const YS::TARGET_108 *const)v10, (const YS::TARGET_108 *)&v14[1]);
  kn::VecSet::set(
    (kn::VecSet *const)(unsigned int)((_DWORD)this + 2960),
    (const kn::FVector *)v10,
    (const kn::FVector *)&v10[16]);
  v6 = kn::FriendPersonality::getBattleCancelDistance((const kn::FriendPersonality_0 *const)*(unsigned int *)&(*this)[2916]);
  v7 = ((__int64 (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)(*this)[0] + 0xACLL))();
  if ( v7 > 3 )
  {
    if ( v7 == 5 )
    {
LABEL_6:
      v6 = (float)((float)v6 * (float)2.0);
      goto _noname_;
    }
  }
  else if ( v7 > 1 )
  {
    if ( v7 <= 2 )
    {
      v6 = (float)((float)v6 * (float)0.5);
      goto _noname_;
    }
    goto LABEL_6;
  }
_noname_:
  v8 = *(_DWORD *)&(*this)[2944];
  if ( (v8 & 0x20000) == 0 && *(float *)(unsigned int)((_DWORD)this + 3004) > v6 )
    *(_DWORD *)&(*this)[2944] = v8 | 0x40;
  if ( YS::STATUS::IsBattleMode() )
  {
    if ( v3
      || !*(_DWORD *)&(*this)[912]
      && (*(_DWORD *)&(*this)[2944] & 0x10000) == 0
      && (unsigned int)kn::Friend::checkLostTarget(this) )
    {
      kn::Friend::searchEnemy(this);
    }
    if ( (unsigned int)YS::TARGET::is_exist((const YS::TARGET_108 *const)(unsigned int)((_DWORD)this + 2548))
      && *(_DWORD *)&(*this)[2548]
      && (*(_DWORD *)(*(unsigned int *)&(*this)[2548] + 0x588LL) & 0x10) != 0 )
    {
      YS::TARGET::get_pos((const YS::TARGET_108 *const)v14, (const YS::TARGET_108 *)(unsigned int)((_DWORD)this + 2548));
      kn::VecSet::set((kn::VecSet *const)(unsigned int)((_DWORD)this + 3008), v14, (const kn::FVector *)&v10[16]);
      *(float *)&(*this)[3072] = *(float *)(unsigned int)((_DWORD)this + 3036)
                               - YS::TARGET::get_dist(
                                   (YS::TARGET_108 *const)(unsigned int)((_DWORD)this + 2548),
                                   (RCFVector)&v10[16]);
    }
  }
  else if ( v3 || !*(_DWORD *)&(*this)[912] && (*(_DWORD *)&(*this)[2944] & 0x10000) == 0 )
  {
    YS::TARGET::clear((YS::TARGET_108 *const)(unsigned int)((_DWORD)this + 2548));
  }
  return (_cntlzw(*(_DWORD *)&(*this)[2944] & 8) & 0x20) == 0;
}
// 7EF218: using guessed type void *__ptr32 kn::Friend::partyChara;


---
---
---
appears in:
obj\P_EX330\p_ex.bdscript ((P) Peter Pan)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
---
---
---
example usage from obj\P_EX330\p_ex.bdscript
L6099:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 7, 19 ; trap_friend_update_target (2 in, 1 out)
 drop 
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L6141
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L928
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 6, 9 ; trap_target_dist (2 in, 1 out)
 popToSpVal 40
 jmp L6141
