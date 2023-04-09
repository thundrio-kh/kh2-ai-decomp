---
---
---
name: trap_attack_set_effect
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
push attack ; (YS::ATTACK_MAGIC *)  (an attack object)
push effect ; (ryj::EFFECT *) (an object effect to apply to an attack)
syscall 2, 61 ; trap_attack_set_effect (2 in, 0 out)
---
---
---
description: Applies an object effect to an attack
---
---
---
decompiled code:
void __fastcall YS::ATTACK_MAGIC::set_effect(YS::ATTACK_MAGIC_3 *const this, ryj::EFFECT_431 *effect)
/----- (00000000004F48A4) ----------------------------------------------------
void __fastcall YS::trap_attack_set_effect(BD_VALUE_19 *args)
{
  YS::ATTACK_MAGIC_3 *v2; // r30
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r7
  __int64 v7; // r6
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r7
  __int64 v12; // r6
  __int64 v13; // r5
  __int64 v14; // r4
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r7
  __int64 v19; // r6
  __int64 v20; // r5
  __int64 v21; // r4
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r7
  __int64 v26; // r6
  __int64 v27; // r5
  __int64 v28; // r4

  v2 = (YS::ATTACK_MAGIC_3 *)(*args)[0];
  if ( (unsigned int)YS::ATTACK::is_exist((YS::ATTACK_10 *const)v2) )
  {
    YS::ATTACK_MAGIC::set_effect(v2, (ryj::EFFECT_431 *)*(unsigned int *)&(*args)[4]);
  }
  else
  {
    printf(
      (unsigned int)"[%s:%d]",
      (__int64)"C:\\hd25\\kingdom2\\yasui\\libys\\trapbattle.cpp",
      477LL,
      v7,
      v6,
      v5,
      v4,
      v3);
    printf((unsigned int)"\x1B[41m** CAUTION! ", v14, v13, v12, v11, v10, v9, v8);
    printf((unsigned int)"no such attack", v21, v20, v19, v18, v17, v16, v15);
    printf((unsigned int)" **\x1B[00m\n", v28, v27, v26, v25, v24, v23, v22);
  }
}
// 4F48FC: variable 'v7' is possibly undefined
// 4F48FC: variable 'v6' is possibly undefined
// 4F48FC: variable 'v5' is possibly undefined
// 4F48FC: variable 'v4' is possibly undefined
// 4F48FC: variable 'v3' is possibly undefined
// 4F490C: variable 'v14' is possibly undefined
// 4F490C: variable 'v13' is possibly undefined
// 4F490C: variable 'v12' is possibly undefined
// 4F490C: variable 'v11' is possibly undefined
// 4F490C: variable 'v10' is possibly undefined
// 4F490C: variable 'v9' is possibly undefined
// 4F490C: variable 'v8' is possibly undefined
// 4F491C: variable 'v21' is possibly undefined
// 4F491C: variable 'v20' is possibly undefined
// 4F491C: variable 'v19' is possibly undefined
// 4F491C: variable 'v18' is possibly undefined
// 4F491C: variable 'v17' is possibly undefined
// 4F491C: variable 'v16' is possibly undefined
// 4F491C: variable 'v15' is possibly undefined
// 4F492C: variable 'v28' is possibly undefined
// 4F492C: variable 'v27' is possibly undefined
// 4F492C: variable 'v26' is possibly undefined
// 4F492C: variable 'v25' is possibly undefined
// 4F492C: variable 'v24' is possibly undefined
// 4F492C: variable 'v23' is possibly undefined
// 4F492C: variable 'v22' is possibly undefined

//CHEAT YS::ATTACK_MAGIC::set_effect
->
/----- (000000000050D048) ----------------------------------------------------
void __fastcall YS::ATTACK_MAGIC::set_effect(YS::ATTACK_MAGIC_3 *const this, ryj::EFFECT_431 *effect)
{
  int v3; // r31
  __int64 back_chain; // [sp+0h] [-90h]

  v3 = (int)effect;
  if ( *(_DWORD *)&(*this)[196] )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "Effect == NULL",
      "common",
      "C:\\hd25\\kingdom2\\yasui\\libys\\attackmagic.cpp",
      216LL,
      "set_effect",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\yasui\\libys\\attackmagic.cpp", 216);
  }
  *(_DWORD *)&(*this)[196] = v3;
}
// 50D06C: variable 'back_chain' is possibly undefined


---
---
---
appears in:
limit\beast\limi.bdscript
obj\B_CA050\b_ca.bdscript ((B) Grim Reaper)
obj\B_EX130\b_ex.bdscript ((B) Xaldin)
obj\B_EX130_LV99\b_ex.bdscript ((B99) Xaldin (Limit Cut))
obj\B_EX160\b_ex.bdscript ((B) Saïx)
obj\B_EX160_LV99\b_ex.bdscript ((B99) Saïx (Limit Cut))
obj\B_EX220\b_ex.bdscript ((F) Saix’s claymore (Usable))
obj\B_EX220_LV99\b_ex.bdscript ((F) Saix’s claymore limit cut (Usable))
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_LK130\b_lk.bdscript ((F) Path for Sora Lion’s groundshaker RC)
obj\B_NM110\b_nm.bdscript ((B) The Experiment)
obj\B_NM110_L_ARM\b_nm.bdscript ((B) The Experiment (Left Hand))
obj\M_EX050\m_ex.bdscript ((M) Large Body)
obj\M_EX050_WI\m_ex.bdscript ((M) Large Body (WI))
obj\M_EX060\m_ex.bdscript ((M) Fat Bandit)
obj\M_EX560\m_ex.bdscript ((M) Hammer Frame)
obj\M_EX560_HB\m_ex.bdscript ((M) Iron Hammer)
obj\M_EX560_WI\m_ex.bdscript ((M) Hammer Frame (WI))
obj\M_EX630\m_ex.bdscript ((M) Luna Bandit)
obj\M_EX670\m_ex.bdscript ((M) Living Bone)
obj\M_EX690\m_ex.bdscript ((M) Lance Soldier)
obj\M_EX690_HB\m_ex.bdscript ((M) Lance Warrior)
obj\M_EX800\m_ex.bdscript ((M) Bolt Tower)
obj\M_EX800_DC\m_ex.bdscript ((M) Bolt Tower (DC))
obj\M_EX800_MU\m_ex.bdscript ((M) Bolt Tower (MU))
obj\M_EX800_MU_RAW\m_ex.bdscript ((M) Bolt Tower (MU) (RAW))
obj\M_EX800_RAW\m_ex.bdscript ((M) Bolt Tower (RAW))
obj\M_EX890\m_ex.bdscript ((M) Dragoon)
obj\M_EX900\m_ex.bdscript ((M) Assassin)
obj\M_EX940\m_ex.bdscript ((M) Berserker)
---
---
---
example usage from limit\beast\limi.bdscript
L39:
 pushFromFSp 8
 pushImm 497
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSp 12
 pushFromFSp 12
 pushFromFSp 0
 syscall 2, 61 ; trap_attack_set_effect (2 in, 0 out)
 pushFromFSp 12
 pushImmf 450
 pushImmf 50
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSp 12
 pushImmf 55
 pushImmf 100
 pushImmf 0
 syscall 2, 62 ; trap_attack_set_time (4 in, 0 out)
 jmp L85
