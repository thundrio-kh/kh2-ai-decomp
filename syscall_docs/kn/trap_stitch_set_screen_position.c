---
---
---
name: trap_stitch_set_screen_position
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
push pos ; (kn::FVector *)  (A position vector)
syscall 10, 1 ; trap_stitch_set_screen_position (2 in, 0 out)
---
---
---
description: Set the position of stitch on the screen
---
---
---
decompiled code:
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
void __fastcall kn::Stitch::set_screen_position(kn::Stitch *const this, const kn::FVector *pos)
/----- (0000000000610CB4) ----------------------------------------------------
void __fastcall kn::trap_stitch_set_screen_position(BD_VALUE_22 *args)
{
  __int64 v2; // r29
  unsigned __int64 v3; // r30
  kn::Stitch *v4; // r3
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
  v4 = (kn::Stitch *)kn::Friend::getPersonality((kn::Friend_0 *const)*(unsigned int *)(v2 + 4));
  kn::Stitch::set_screen_position(v4, (const kn::FVector *)*(unsigned int *)&(*args)[4]);
}
// 610CD8: variable 'back_chain' is possibly undefined

//COMPLICATED kn::Friend::getPersonality kn::Stitch::set_screen_position
->
/----- (00000000000E3220) ----------------------------------------------------
kn::FriendPersonality *__fastcall kn::Friend::getPersonality(kn::Friend_0 *const this)
{
  return (kn::FriendPersonality *)*(unsigned int *)&(*this)[2916];
}


->
/----- (0000000000107DD4) ----------------------------------------------------
void __fastcall kn::Stitch::set_screen_position(kn::Stitch *const this, const kn::FVector *pos)
{
  float *v3; // r30
  unsigned int v4; // r4
  __int16 v5[6]; // [sp+70h] [-20h] BYREF
  float v6; // [sp+7Ch] [-14h]

  this->work_.flag |= 1u;
  kn::FVector::operator=((kn::FVector *const)(unsigned int)((_DWORD)this + 1600), pos);
  v3 = (float *)(unsigned int)((_DWORD)this + 1612);
  *(_DWORD *)(unsigned int)((_DWORD)this + 1608) = 1149239296;
  *(float *)(unsigned int)((_DWORD)this + 1628) = *v3;
  v4 = *(_DWORD *)&this->baseclass_0[4];
  if ( (*(_DWORD *)(v4 + 0x10CLL) & 0x40) == 0 )
  {
    kn::Stitch::update_obj_pos(this);
    YS::OBJ::attach_camera(
      (YS::OBJ_130 *const)*(unsigned int *)&this->baseclass_0[4],
      (kn::FMatrix *)(unsigned int)((_DWORD)this + 1728));
    v4 = *(_DWORD *)&this->baseclass_0[4];
    *(_DWORD *)(v4 + 1648 + 0x28LL) = 1259902592;
  }
  YS::MOTION::get_trans((YS::MOTION_289 *const)v5, v4 + 320);
  *v3 = *v3 - v6;
}


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
