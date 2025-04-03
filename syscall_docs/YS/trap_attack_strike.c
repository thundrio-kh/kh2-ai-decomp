---
---
---
name: trap_attack_strike
---
---
---
category: attack
---
---
---
documentation level: untested
---
---
---
push owner ; (YS::ATTACK_10) (An attack object) 
push target ; (YS::BTLOBJ *) (object of the attack target) 
push hitpart ; (int)  (Which part to hit)
push parts ; (int)  (Perhaps the number of parts)
syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
---
---
---
description: Sets up an attack to strike a specific part of an object
---
---
---
decompiled code:
__int64 __fastcall YS::ATTACK::Strike(YS::BTLOBJ *owner, __int64 param_id, YS::BTLOBJ *target, const kn::FVector *dir, bool is_force)
void __fastcall YS::DAMAGE::Free(YS::DAMAGE_5 *damage)
/----- (00000000004F49FC) ----------------------------------------------------
void __fastcall YS::trap_attack_strike(BD_VALUE_19 *args)
{
  __int64 v2; // r30
  unsigned __int64 v3; // r29
  __int64 v4; // r30
  YS::BTLOBJ *v5; // r30
  YS::DAMAGE_5 *v6; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v2 = *(unsigned int *)&(*args)[4];
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
  if ( !(unsigned int)YS::OBJ::is_valid((YS::OBJ_132 *const)*(unsigned int *)(v2 + 4)) )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "ToOBJ(args[1].p)->is_valid()",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp",
      492LL,
      "trap_attack_strike",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp", 492);
  }
  v4 = *(unsigned int *)&(*args)[4];
  if ( !(_DWORD)v4 )
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
  if ( (v4 & 3) != 0 )
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
  v5 = (YS::BTLOBJ *)*(unsigned int *)(v4 + 4);
  if ( (*(_DWORD *)&v5->baseclass_0[1416] & 2) == 0 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "TOOBJ(obj)->is_btlobj()",
      "common",
      "../../yasui/libys/btlobj.h",
      178LL,
      "TOBTLOBJ",
      (const void *)v3);
    ErrorRaise();
    Axa::AxaAssert("../../yasui/libys/btlobj.h", 178);
  }
  v6 = YS::ATTACK::strike((YS::ATTACK_10 *const)(*args)[0], v5, *(_DWORD *)&(*args)[8], *(_DWORD *)&(*args)[12]);
  if ( (_DWORD)v6 )
  {
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)v5->baseclass_0 + 0x64LL))();
    YS::DAMAGE::Free(v6);
  }
}
// 4F4A20: variable 'back_chain' is possibly undefined

//COMPLICATED YS::ATTACK::strike YS::DAMAGE::Free
->
/----- (00000000004088CC) ----------------------------------------------------
__int64 __fastcall YS::ATTACK::Strike(YS::BTLOBJ *owner, __int64 param_id, YS::BTLOBJ *target, const kn::FVector *dir, bool is_force)
{
  __int64 v6; // r28
  YS::ATTACK_10 *v11; // r29
  YS::ATTACK_10 *v12; // r3
  YS::ATTACK_10 *v13; // r24
  YS::DAMAGE_3 *v14; // r27

  v6 = 0LL;
  v11 = 0LL;
  v12 = (YS::ATTACK_10 *)AREA::Alloc(0xD0u);
  v13 = v12;
  if ( (_DWORD)v12 )
  {
    YS::ATTACK::ATTACK(v12, owner, 0LL, param_id, 0LL, -1, -1);
    v11 = v13;
  }
  if ( is_force )
    v14 = YS::ATTACK::force_strike(v11, target, (const YS::ATTACKPARAM_0 *)*(unsigned int *)&(*v11)[40], 0);
  else
    v14 = YS::ATTACK::strike(v11, target, 0, 0);
  if ( (_DWORD)v14 )
  {
    if ( (*(_DWORD *)&(*v14)[24] & 1) == 0 )
      v6 = 1LL;
    kn::FVector::operator=((kn::FVector *const)v14, dir);
    ((void (*)(void))*(unsigned int *)*(unsigned int *)(*(unsigned int *)*(unsigned int *)target->baseclass_0 + 0x64LL))();
    YS::DAMAGE::Free(v14);
  }
  YS::ATTACK::destroy(v11);
  return v6;
}


->
/----- (0000000000421F20) ----------------------------------------------------
void __fastcall YS::DAMAGE::Free(YS::DAMAGE_5 *damage)
{
  int v1; // r30
  unsigned __int64 v2; // r29
  int v3; // r30
  char *v4; // r4
  __int64 back_chain; // [sp+0h] [-90h]

  v1 = (int)damage;
  v2 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( dword_2A93E20 == 4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "!is_empty()",
      "common",
      "../yasui/classblock.h",
      44LL,
      "free",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 44);
  }
  v3 = (int)(v1 - (unsigned int)&YS::DamageBuff) / 64;
  if ( v3 < 0 || v3 >= 4 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "idx >= 0 && idx < size",
      "common",
      "../yasui/classblock.h",
      46LL,
      "free",
      (const void *)v2);
    ErrorRaise();
    Axa::AxaAssert("../yasui/classblock.h", 46);
  }
  v4 = (char *)&YS::DamageBuff + 4 * dword_2A93E20++;
  *((_DWORD *)v4 + 64) = v3;
}
// 421F4C: variable 'back_chain' is possibly undefined
// 2A93E20: using guessed type int dword_2A93E20;


---
---
---
appears in:
limit\aladdin\limi.bdscript
limit\donald\limi.bdscript
limit\donald_wi\limi.bdscript
limit\trinity\limi.bdscript
limit\trinity_wi\limi.bdscript
magic\cure1\cure.bdscript
magic\CURE_1\cure.bdscript
magic\CURE_1lk\cure.bdscript
magic\CURE_2\cure.bdscript
magic\CURE_2lk\cure.bdscript
magic\CURE_3\cure.bdscript
magic\CURE_3lk\cure.bdscript
obj\B_AL100_1ST\b_al.bdscript ((M) Volcano Lord)
obj\B_AL100_2ND\b_al.bdscript ((M) Blizzard Lord)
obj\B_AL100_FIRE\b_al.bdscript ((B) Volcanic Lord)
obj\B_AL100_ICE\b_al.bdscript ((B) Blizzard Lord)
obj\B_BB110\b_bb.bdscript ((B) Dark Thorn)
obj\B_CA010\b_ca.bdscript ((B) Barbossa)
obj\B_CA020\b_ca.bdscript ((M) Undead Pirate A)
obj\B_CA030\b_ca.bdscript ((M) Undead Pirate B)
obj\B_CA040\b_ca.bdscript ((M) Undead Pirate C)
obj\B_CA040_PUB\b_ca.bdscript ()
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX100\b_ex.bdscript ((B) Twilight Thorn)
obj\B_EX110\b_ex.bdscript ((B) Axel (Twilight Town, 2nd fight))
obj\B_EX110_FRIEND\b_ex.bdscript ((A?) Axel)
obj\B_EX110_LV99\b_ex.bdscript ((B99) Axel (Limit Cut))
obj\B_EX110_SKIRMISH\b_ex.bdscript ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))
obj\B_EX120\b_ex.bdscript ((B) Demyx (Only playing sitar?))
obj\B_EX120_HB\b_ex.bdscript ((B) Demyx)
obj\B_EX120_HB_LV99\b_ex.bdscript ((B99) Demyx (Limit Cut))
obj\B_EX140\b_ex.bdscript ((B) Xigbar)
obj\B_EX140_LV99\b_ex.bdscript ((B99) Xigbar (Limit Cut))
obj\B_EX150\b_ex.bdscript ((B) Luxord (WORKS! can’t be killed, or paused))
obj\B_EX150_LV99\b_ex.bdscript ((B99) Luxord (Limit Cut))
obj\B_EX170\b_ex.bdscript ((B) Xemnas)
obj\B_EX170_LAST\b_ex.bdscript ((B) Xemnas (Final))
obj\B_EX170_LAST_LV99\b_ex.bdscript ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)
obj\B_EX170_LV99\b_ex.bdscript ((B99) Xemnas (Limit Cut Memory’s Contortion))
obj\B_EX180\b_ex.bdscript ((?) Xemnas’s dragon (Throne))
obj\B_EX260\b_ex.bdscript ((B) Xemnas (Armor))
obj\B_EX390\b_ex.bdscript ((B) Hooded Roxas)
obj\B_EX410\b_ex.bdscript ((P) Sora book)
obj\B_EX420\b_ex.bdscript ((B) Lingering Will)
obj\B_HE020\b_he.bdscript ((B) Cerberus)
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_BB080\f_bb.bdscript ((F) Shadow Stalker’s ground trap (BB))
obj\F_TR150\f_tr.bdscript ((F) ??? (TR))
obj\M_EX420\m_ex.bdscript ((M) Neoshadow)
obj\M_EX420_NM\m_ex.bdscript ((M) Neoshadow (NM))
obj\M_EX620\m_ex.bdscript ((M) Fortuneteller)
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX720\m_ex.bdscript ((M) Shaman)
obj\M_EX720_HB\m_ex.bdscript ((M) Necromancer)
obj\M_EX740\m_ex.bdscript ((M) Crescendo)
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX950\m_ex.bdscript ((M) Gambler)
obj\N_AL070_BTL\n_al.bdscript ((N) Jafar clone (BTL) (AL))
obj\N_CM040_BTL\n_cm.bdscript ((N) Vexen (BTL) (CM))
obj\N_HB630\n_hb.bdscript ((N) Sephiroth (HB))
obj\P_EX020\p_ex.bdscript ((P) Donald)
obj\P_EX020_NM\p_ex.bdscript ((P) Donald (NM))
obj\P_EX020_TR\p_ex.bdscript ((P) Donald (TR))
obj\P_EX020_XM\p_ex.bdscript ((P) Donald (XM))
obj\P_EX350\p_ex.bdscript ((P) Chicken Little)
obj\P_EX360\p_ex.bdscript ((P) ??? (EX))
obj\P_LK000\p_lk.bdscript ((P) Simba)
obj\P_LK020\p_lk.bdscript ((P) Donald (LK))
obj\P_WI020\p_ex.bdscript ((P) Donald (WI))
---
---
---
example usage from limit\aladdin\limi.bdscript
L4188:
 jz L4406
 pushFromFSpVal 68
 pushFromFSp 0
 fetchValue 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 2, 18 ; trap_attack_is_strike (2 in, 1 out)
 jz L4398
 pushImmf 1000
 pushImmf 1000
 gosub 12, L4480
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf -2000
 pushImmf 2000
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 memcpy 0
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromFSpVal 68
 pushFromPSp 16
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 68
 pushFromFSp 0
 fetchValue 48
 gosub 12, L1699
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 0
 pushImm 0
 syscall 2, 17 ; trap_attack_strike (4 in, 0 out)
 pushFromFSp 0
 fetchValue 48
 pushFromPSp 16
 syscall 6, 9 ; trap_target_dist (2 in, 1 out)
 popToSp 36
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 fetchValue 12
 pushFromFSp 36
 subf 
 pushImmf 0
 pushImmf 80
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 addf 
 popToSp 36
 pushFromPSp 16
 pushFromFSp 36
 syscall 0, 35 ; method_vector_scale (2 in, 0 out)
 pushFromFSp 0
 fetchValue 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromPSp 16
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPWp W0
 fetchValue 0
 pushImm 5
 pushImm 1
 syscall 2, 57 ; trap_limit_effect_start (3 in, 1 out)
 pushFromPSp 16
 syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
 pushFromPSp 16
 pushImm 99
 syscall 6, 1 ; trap_prize_appear (2 in, 0 out)
 jmp L4398
