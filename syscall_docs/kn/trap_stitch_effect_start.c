---
---
---
name: trap_stitch_effect_start
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
push friend ; (kn::Friend_0 *)  (A friend object)
push id ; (int)  (ID of effect to start)
push obj ; (YS::OBJ_125) (An object)
push bone ; (int)  (Bone ID)
push motion ; (int)  (Motion set ID. -1 is used in game AI)
push use_bone_rotation ; (bool)  (Should bone rotation be used)
push flag ; (int)  (Flag argument for effect)
push priority ; (int)  (Priority of effectt)
syscall 10, 12 ; trap_stitch_effect_start (8 in, 1 out)
pop effect ; (unknown) 
---
---
---
description: Start a stitch effect
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
__int64 __fastcall kn::Stitch::startEffect(kn::Stitch *const this, int id, YS::OBJ_36 *obj, int bone, int motion, bool use_bone_rotation, int flag, int priority)
/----- (0000000000611A60) ----------------------------------------------------
void __fastcall kn::trap_stitch_effect_start(BD_VALUE_22 *args)
{
  __int64 v2; // r28
  unsigned __int64 v3; // r27
  kn::Stitch *v4; // r28
  __int64 v5; // r31
  YS::OBJ_36 *v6; // r5
  int v7; // r29
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
  v4 = (kn::Stitch *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  v5 = *(unsigned int *)&(*args)[8];
  v6 = 0LL;
  v7 = *(_DWORD *)&(*args)[4];
  if ( (_DWORD)v5 )
  {
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
    v6 = (YS::OBJ_36 *)*(unsigned int *)(v5 + 4);
  }
  *(_DWORD *)args = kn::Stitch::startEffect(
                      v4,
                      v7,
                      v6,
                      *(_DWORD *)&(*args)[12],
                      *(_DWORD *)&(*args)[16],
                      (_cntlzw(*(_DWORD *)&(*args)[20]) & 0x20) == 0,
                      *(_DWORD *)&(*args)[24],
                      *(_DWORD *)&(*args)[28]);
}
// 611A84: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Stitch::startEffect
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (000000000010A6E4) ----------------------------------------------------
__int64 __fastcall kn::Stitch::startEffect(kn::Stitch *const this, int id, YS::OBJ_36 *obj, int bone, int motion, bool use_bone_rotation, int flag, int priority)
{
  __int64 v8; // r29
  int v14; // r28
  int v17; // r11
  unsigned __int64 v18; // r21
  int v19; // r3
  int *v20; // r26
  int *v21; // r5
  int *v22; // r7
  unsigned __int64 v23; // r6
  unsigned __int64 v24; // r3
  unsigned int v25; // r3
  int v26; // r5
  __int64 back_chain; // [sp+0h] [-D0h]

  v8 = 0LL;
  v14 = (int)obj;
  do
  {
    v17 = (_DWORD)this + ((_DWORD)v8 << 6);
    if ( *(int *)(unsigned int)(v17 + 36) < 0 && !*(_DWORD *)(unsigned int)(v17 + 40) )
      break;
    v8 = (int)v8 + 1;
  }
  while ( (int)v8 < 24 );
  v18 = (unsigned int)*(_QWORD *)(back_chain + 16);
  if ( (int)v8 >= 24 )
  {
    ErrorPrintf(
      "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
      "i < EFFECT_MAX",
      "common",
      "C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp",
      717LL,
      "alloc_effect_work",
      (const void *)(unsigned int)*(_QWORD *)(back_chain + 16));
    ErrorRaise();
    Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp", 717);
  }
  v19 = (_DWORD)this + ((_DWORD)v8 << 6);
  v20 = (int *)(unsigned int)(v19 + 32);
  *v20 = 0;
  *(_DWORD *)(unsigned int)(v19 + 52) = motion;
  v21 = (int *)(unsigned int)(v19 + 48);
  v22 = (int *)(unsigned int)(v19 + 44);
  *(_DWORD *)(unsigned int)(v19 + 36) = id;
  v23 = (unsigned int)(v19 + 64);
  *(_DWORD *)(unsigned int)(v19 + 56) = bone;
  v24 = (unsigned int)(v19 + 80);
  *v22 = flag;
  *v21 = priority;
  *(_DWORD *)(v23 + 12) = 0;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 4) = 0;
  *(_DWORD *)v23 = 0;
  *(_DWORD *)(v24 + 8) = 0;
  *(_DWORD *)(v24 + 4) = 0;
  *(_DWORD *)v24 = 0;
  *(_DWORD *)(v24 + 12) = 1065353216;
  if ( v14 )
  {
    v25 = (unsigned int)kn::Friend::getPartyChara(0);
    if ( v14 == *(_DWORD *)&this->baseclass_0[4] )
    {
      v26 = *v20;
      *v20 |= 1u;
      if ( !id )
        *v20 = v26 | 0x21;
    }
    else if ( v14 == v25 )
    {
      *v20 |= 2u;
    }
    else
    {
      ErrorPrintf(
        "#ASSERT(%s):%s/%s:%d:%s\nret=%p\n",
        "0",
        "common",
        "C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp",
        763LL,
        "startEffect",
        (const void *)v18);
      ErrorRaise();
      Axa::AxaAssert("C:\\hd25\\kingdom2\\naka\\libkn\\stitch.cpp", 763);
    }
  }
  if ( use_bone_rotation )
    *v20 |= 8u;
  return v8;
}
// 10A790: variable 'back_chain' is possibly undefined


---
---
---
appears in:
obj\N_HB040_BTL\n_hb.bdscript ((N) Stitch (BTL) (HB))
---
---
---
example usage from obj\N_HB040_BTL\n_hb.bdscript
L1369:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L883
 pushFromPWp W140
 syscall 1, 5 ; trap_act_table_init (1 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3858 ; ___ai 'dead' (L3858)
 pushImm 196908
 pushImm L2001
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3846 ; ___ai 'freeze' (L3846)
 pushImm 100
 pushImm L2099
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3861 ; ___ai 'event' (L3861)
 pushImm 196908
 pushImm L2116
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L2121
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3850 ; ___ai 'idle' (L3850)
 pushImm 100
 pushImm L2136
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3703 ; ___ai 'idle_time' (L3703)
 pushImm 100
 pushImm L2410
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3720 ; ___ai 'footwork' (L3720)
 pushImm 100
 pushImm L2466
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3812 ; ___ai 'mode_battle' (L3812)
 pushImm 100
 pushImm L2482
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3741 ; ___ai 'mode_revenge' (L3741)
 pushImm 100
 pushImm L2745
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3758 ; ___ai 'mode_battle_boss' (L3758)
 pushImm 100
 pushImm L2787
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3777 ; ___ai 'mode_revenge_boss' (L3777)
 pushImm 100
 pushImm L2853
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3791 ; ___ai 'revenge' (L3791)
 pushImm 65836
 pushImm L2919
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3823 ; ___ai 'appear' (L3823)
 pushImm 100
 pushImm L2978
 pushImm L3180
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L3188
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3806 ; ___ai 'appear_skip' (L3806)
 pushImm 100
 pushImm L3306
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L3314
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W140
 pushFromPAi L3827 ; ___ai 'leave' (L3827)
 pushImm 196908
 pushImm L3436
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromFSp 0
 pushFromPWp W140
 syscall 1, 7 ; trap_obj_set_act_table (2 in, 0 out)
 pushFromPWp W0
 pushImm 44
 add 
 pushImm 0
 memcpy 0
 pushImm -1
 popToSpVal 20
 pushFromFSp 0
 pushImm 1150
 pushImm -1
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 28
 pushFromFSpVal 28
 pushFromFSp 0
 syscall 2, 22 ; trap_attack_set_obj_pax (2 in, 0 out)
 pushFromFSpVal 28
 pushImm L3526
 pushFromFSp 0
 syscall 2, 74 ; trap_attack_set_reflect_callback (3 in, 0 out)
 pushFromFSp 0
 gosub 12, L3661
 eqz 
 jz L1995
 pushFromPSp 16
 pushImmf -185
 pushImmf 90
 pushImmf 0
 pushImmf 0
 gosub 12, L403
 pushFromFSp 0
 pushFromPSp 16
 syscall 10, 1 ; trap_stitch_set_screen_position (2 in, 0 out)
 pushFromFSp 0
 pushImm 0
 pushFromFSp 0
 pushImm 19
 pushImm -1
 pushImm 0
 pushImm 1
 pushImm 0
 syscall 10, 12 ; trap_stitch_effect_start (8 in, 1 out)
 popToSpVal 20
 jmp L2000
