---
---
---
name: trap_obj_disable_occ
---
---
---
category: culling
---
---
---
documentation level: untested
---
---
---
push objocc ; (YS::OBJOCC_133 *)  (an occlusion culling object)
syscall 1, 255 ; trap_obj_disable_occ (1 in, 0 out)
---
---
---
description: disable occlusion culling for all bones in an culling object
---
---
---
decompiled code:
void __fastcall YS::OBJOCC::disable_all(YS::OBJOCC_133 *const this)
/----- (00000000004FB7E8) ----------------------------------------------------
void __fastcall YS::trap_obj_disable_occ(BD_VALUE_21 *args)
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
  YS::OBJOCC::disable_all((YS::OBJOCC_133 *const)(unsigned int)(*(_DWORD *)(v1 + 4) + 2048));
}
// 4FB808: variable 'back_chain' is possibly undefined
->
/----- (0000000000472AE8) ----------------------------------------------------
void __fastcall YS::OBJOCC::disable_all(YS::OBJOCC_133 *const this)
{
  __int64 v1; // ctr
  __int64 v2; // r3
  unsigned int v3; // r4

  if ( *(_DWORD *)this && *(int *)(*(unsigned int *)this + 4LL) > 0 )
  {
    v1 = *(unsigned int *)(*(unsigned int *)this + 4LL);
    v2 = *(unsigned int *)&(*this)[4];
    do
    {
      v3 = v2 + 128;
      v2 += 144LL;
      *(_DWORD *)(unsigned int)(*(_DWORD *)v3 + 8) |= 2u;
      --v1;
    }
    while ( v1 );
  }
}


---
---
---
appears in:
obj\B_LK120\b_lk.bdscript ((B) Groundshaker)
obj\B_MU120\b_mu.bdscript ((B) Storm Rider)
obj\F_BB120\f_bb.bdscript ((F) Minigame’s box (BB))
obj\F_EH050\f_eh.bdscript ((F) Floating building 1 (EH))
---
---
---
example usage from obj\B_LK120\b_lk.bdscript
L5615:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 12, L7759
 pushFromFSp 0
 pushFromPWp W944
 gosub 12, L7837
 pushFromFSp 0
 pushFromPWp W944
 syscall 1, 7 ; trap_obj_set_act_table (2 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23422 ; ___ai appear (L23422)
 pushImm 100
 pushImm L7877
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23548 ; ___ai leave (L23548)
 pushImm 196908
 pushImm L8109
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23398 ; ___ai freeze (L23398)
 pushImm 100
 pushImm L8165
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23576 ; ___ai event (L23576)
 pushImm 196908
 pushImm L8182
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L8187
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23603 ; ___ai idle_time (L23603)
 pushImm 100
 pushImm L8202
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23611 ; ___ai mode_battle (L23611)
 pushImm 100
 pushImm L8388
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23626 ; ___ai mode_revenge (L23626)
 pushImm 100
 pushImm L8636
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23539 ; ___ai mode_revenge_boss (L23539)
 pushImm 100
 pushImm L8678
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23633 ; ___ai revenge (L23633)
 pushImm 65836
 pushImm L8744
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23448 ; ___ai talk (L23448)
 pushImm 100
 pushImm L8803
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23464 ; ___ai near_wait (L23464)
 pushImm 100
 pushImm L9140
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23411 ; ___ai near (L23411)
 pushImm 100
 pushImm L9218
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23797 ; ___ai walk (L23797)
 pushImm 100
 pushImm L9318
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23643 ; ___ai unison_run (L23643)
 pushImm 100
 pushImm L10436
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23668 ; ___ai test_move_stop (L23668)
 pushImm 100
 pushImm L10468
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23690 ; ___ai test_set_zero (L23690)
 pushImm 65636
 pushImm L10473
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23608 ; ___ai dead (L23608)
 pushImm 196908
 pushImm L10491
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23551 ; ___ai damage_big (L23551)
 pushImm 300
 pushImm L10601
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23706 ; ___ai move (L23706)
 pushImm 100
 pushImm L11357
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23426 ; ___ai jump (L23426)
 pushImm 100
 pushImm L11560
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23723 ; ___ai target_jump (L23723)
 pushImm 100
 pushImm L11637
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23429 ; ___ai target_turn (L23429)
 pushImm 100
 pushImm L12079
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23709 ; ___ai center_jump (L23709)
 pushImm 100
 pushImm L12239
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23658 ; ___ai change_unison_start (L23658)
 pushImm 100
 pushImm L12267
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23451 ; ___ai change_ride (L23451)
 pushImm 100
 pushImm L12531
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23703 ; ___ai idle (L23703)
 pushImm 100
 pushImm L12732
 pushImm L13512
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L13531
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23435 ; ___ai idle_fire (L23435)
 pushImm 100
 pushImm L13550
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23740 ; ___ai footwork (L23740)
 pushImm 100
 pushImm L14837
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23469 ; ___ai atk_laser_eye (L23469)
 pushImm 200
 pushImm L14864
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23414 ; ___ai atk_walk_laser (L23414)
 pushImm 200
 pushImm L16473
 pushImm L16568
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23440 ; ___ai atk_shock_wave (L23440)
 pushImm 200
 pushImm L16576
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23757 ; ___ai atk_rvg_walk_laser (L23757)
 pushImm 200
 pushImm L16667
 pushImm L16762
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23523 ; ___ai atk_foot_laser (L23523)
 pushImm 200
 pushImm L16770
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23579 ; ___ai hold_off (L23579)
 pushImm 100
 pushImm L16806
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23594 ; ___ai hold_off_success (L23594)
 pushImm 100
 pushImm L17003
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23617 ; ___ai hold_off_failure (L23617)
 pushImm 100
 pushImm L17132
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23498 ; ___ai atk_punch (L23498)
 pushImm 200
 pushImm L17364
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23402 ; ___ai atk_single_laser (L23402)
 pushImm 200
 pushImm L17398
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23568 ; ___ai atk_child_punch (L23568)
 pushImm 65736
 pushImm L17408
 pushImm L18495
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L18569
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23459 ; ___ai atk_combo (L23459)
 pushImm 65836
 pushImm L18604
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23767 ; ___ai atk_jump (L23767)
 pushImm 300
 pushImm L18805
 pushImm L18823
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23357 ; ___ai atk_force_rush (L23357)
 pushImm 250
 pushImm L18834
 pushImm L19570
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23778 ; ___ai atk_unison_dash (L23778)
 pushImm 200
 pushImm L19578
 pushImm L20083
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23503 ; ___ai atk_unison_dash_loop (L23503)
 pushImm 200
 pushImm L20090
 pushImm L20107
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L20138
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23800 ; ___ai battle_start (L23800)
 pushImm 100
 pushImm L20165
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23350 ; ___ai rc_jump_wait (L23350)
 pushImm 100
 pushImm L20181
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23365 ; ___ai change_super_mode (L23365)
 pushImm 100
 pushImm L20228
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23637 ; ___ai btl_normal (L23637)
 pushImm 100
 pushImm L20241
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23649 ; ___ai btl_hard (L23649)
 pushImm 100
 pushImm L20360
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23676 ; ___ai btl_super_hard (L23676)
 pushImm 100
 pushImm L20516
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23717 ; ___ai rvg_normal (L23717)
 pushImm 100
 pushImm L20647
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23729 ; ___ai rvg_hard (L23729)
 pushImm 100
 pushImm L20679
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23749 ; ___ai rvg_super_hard (L23749)
 pushImm 100
 pushImm L20682
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23384 ; ___ai mode_battle_boss (L23384)
 pushImm 100
 pushImm L20723
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W944
 pushFromPAi L23376 ; ___ai change_alg_mode (L23376)
 pushImm 100
 pushImm L20825
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
 gosub 12, L20865
 pushFromFSp 0
 gosub 12, L20876
 pushFromFSp 0
 pushImm 30
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 gosub 12, L20935
 pushImm 0
 popToSpVal 356
 pushImm 0
 popToSpVal 360
 pushFromFSp 0
 syscall 6, 45 ; trap_obj_hide_shadow (1 in, 0 out)
 pushFromPSpVal 320
 gosub 12, L20983
 pushImm 0
 popToSpVal 316
 pushFromPSpVal 196
 gosub 12, L20991
 pushFromPSpVal 224
 gosub 12, L21031
 pushFromPSpVal 228
 gosub 12, L21071
 pushFromPSpVal 276
 gosub 12, L21111
 pushFromFSp 0
 gosub 12, L5326
 jz L7754
 pushFromFSp 0
 pushImm 0
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 109 ; trap_obj_hide_part (2 in, 0 out)
 pushFromFSp 0
 gosub 12, L12507
 pushFromFSp 0
 syscall 1, 255 ; trap_obj_disable_occ (1 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 5
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromPSp 16
 pushImmf 1
 gosub 12, L1596
 pushFromFSp 0
 pushFromPSp 16
 pushImmf 0
 syscall 1, 58 ; trap_obj_fly (3 in, 0 out)
 jmp L7758
