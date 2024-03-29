---
WorkSize: 4256
StackSize: 512
TempSize: 512
Triggers:
- Key: 1
  Addr: TR1
- Key: 0
  Addr: TR0
Name: p_bb000

---
 section .text
// These labels seem to do nothing, try just deleting them and seeing if the game works
//D28 L28 L853 L860 L957 L1166 L1540 L1553

public void entry1() {
TR1:
 pushFromPWp W132
 gosub 4, L23
 ret 
L23:
 popToSp 0
L25:
 halt 
 jmp L25
}

public void entry0() { // TR0
 popToSp 0
 pushFromPWp W132
 pushFromFSp 0
 gosub 4, L38
 ret 
L38:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L599
 pushFromPWp W152

 trap_act_table_init(*W152);
 trap_act_table_add(*W152, 'appear', 100, *L624);
 trap_act_table_add(*W152, 'leave', 196908, *L898);
 trap_act_table_add(*W152, 'dead', 196908, *L958);
 trap_act_table_add(*W152, 'freeze', 100, *L1052);
 trap_act_table_add(*W152, 'event', 196908, *L1069, [*L1074]);
 trap_act_table_add(*W152, 'idle', 100, *L1089);
 trap_act_table_add(*W152, 'idle_time', 100, *L1363);
 trap_act_table_add(*W152, 'footwork', 100, *L1419);
 trap_act_table_add(*W152, 'mode_battle', 100, *L1435);
 trap_act_table_add(*W152, 'mode_revenge', 100, *L1698);
 trap_act_table_add(*W152, 'mode_battle_boss', 100, *L1740);
 trap_act_table_add(*W152, 'mode_revenge_boss', 100, *L1806);
 trap_act_table_add(*W152, 'revenge', 65836, *L1872); 
 trap_act_table_add(*W152, 'shout', 100, *L1931, [*L1991, *L2088]); 
 trap_act_table_add(*W152, 'rush', 100, *L2155, [*L2574, *L2581]); 
 trap_obj_set_act_table(beast_obj, W152)
 return
} 

public void before_create_act_table() {
L599:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L615
 pushImm 1
 popToSpVal 16
 ret 
L615:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 popToSpVal 4
 ret 

}

//Turn these into other functions
public ? multi_use() {
L954:
 halt 
 jmp L954
L876:
 popToSp 0
L878:
 pushFromFSp 0
 pushImmf 0
 subf 
 supzf 
 jz L897
 pushFromFSp 0
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 0
 halt 
 jmp L878
L897:
 ret 
}

public ? act_appear() {
  // D624 L624 L646 L652 L658 L656 L821
  // L809 L729 L738
D624:
L624: ;___label for action appear
 popToSp 0
 pushFromFSp 0
 syscall 1, 110 ; trap_obj_get_appear_way (1 in, 1 out)
 dup 
 pushImm 2
 sub 
 jz L646
 dup 
 pushImm -1
 sub 
 jz L646
 jmp L652
L646:
 pushFromFSp 0
 gosub 4, L658
 jmp L656
L652:
 pushFromFSp 0
 gosub 4, L821
L656:
 drop 
 ret 
L658:
 popToSp 0
 gosub 12, L809
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushImm 4
 popToSp 32
 pushFromFSp 0
 fetchValue 4
 pushImm 44
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 syscall 1, 124 ; trap_obj_is_entry_fly (1 in, 1 out)
 dup 
 jnz L729
 pushFromFSp 0
 syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
 eqz 
 neqzv 
L729:
 jz L738
 pushImm 0
 popToSp 32
 jmp L738
L738:
 pushFromFSp 0
 fetchValue 4
 pushFromFSpVal 32
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
L746:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L797
 gosub 12, L809
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 4 ; trap_obj_wish_dir (2 in, 0 out)
 halt 
 jmp L746
L797:
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 32
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 ret 
L809:
 pushFromPSp 0
 pushImm 4
 add 
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpy 0
 pushFromPSp 0
 ret 
L821:
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushFromFSp 0
 pushImm 0
 syscall 1, 67 ; trap_obj_motion_get_length (2 in, 1 out)
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 pushImmf 0
 syscall 1, 61 ; trap_sysobj_motion_frame_start (4 in, 0 out)
 pushFromFSp 0
 gosub 4, L849
 ret 
L849:
 popToSp 0
 gosub 4, L868
L868:
 syscall 1, 34 ; trap_event_is_exec (0 in, 1 out)
 jz L875
 halt 
 jmp L868
L875:
 ret 
}

public ? act_leave() {
  // L898 L876 L954 L878 L897
L898: ;___label for action leave
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 45
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushImm 1
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImmf 30
 syscall 1, 19 ; trap_sysobj_fadeout (2 in, 0 out)
 pushImmf 30
 gosub 4, L876
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out) ; ___possible_ref
 gosub 4, L954
 ret 

}

public ? act_dead() {
  //L958 L965 L984 L876 L954
L958: ;___label for action dead
 popToSp 0
 pushFromFSp 0
 gosub 4, L965
 ret 
L965:
 popToSp 0
 pushFromFSpVal 28 ; ___possible_ref
 pushImm 0
 sub 
 msbi 
 jz L984
 pushFromFSp 0
 pushFromFSpVal 28 ; ___possible_ref
 syscall 1, 92 ; trap_obj_scatter_prize (2 in, 0 out)
 jmp L984
L984:
 pushFromFSp 0
 pushImm 2
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 popToSp 4
 pushFromFSp 4
 syscall 0, 79 ; trap_effect_add_dead_block (1 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 6
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSpVal 32
 pushImmf 0.5
 mulf 
 gosub 4, L876
 pushFromFSp 0
 fetchValue 4
 pushFromFSpVal 32
 pushImmf 0.5
 mulf 
 syscall 1, 19 ; trap_sysobj_fadeout (2 in, 0 out)
 pushFromFSpVal 32
 pushImmf 0.5
 mulf 
 gosub 4, L876
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out) ; ___possible_ref
 gosub 4, L954
 ret 
}

public ? act_freeze() {
  //L954
L1052: ;___label for action freeze
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 gosub 4, L954
 ret 
}

public ? act_event() {
 // L1069
L1069: ;___label for action event
 popToSp 0
 gosub 4, L954
 ret 
}

public void act_event_callback() {
  // L1074
L1074: ;___callback for action event
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 ret 
}

public ? act_idle() {
  // L1089 L1105 L1202 L1132 L1231 L1270 L1204 L1217
  // L1225 L1230 L1204 1291 1328 1317 1326 
L1089: ;___label for action idle
 popToSp 0
 pushFromFSp 0
 pushImm 0
 pushImm 0
 pushImm -1
 gosub 4, L1105
 ret 
L1105:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 0
 gosub 8, L1202
 pushFromFSp 8
 pushImm 3
 sub 
 neqz 
 jz L1132
 pushFromFSp 0
 gosub 8, L1231
 jmp L1132
L1132:
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 12
 pushFromFSp 0
 pushFromFSp 12
 gosub 8, L1270
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
L1146:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L1179
 halt 
 pushFromFSp 0
 pushFromFSp 12
 gosub 8, L1332
 jz L1168
 jmp L1179
L1168:
 pushFromFSp 0
 syscall 2, 5 ; trap_enemy_is_no_control (1 in, 1 out)
 jz L1177
 halt 
 jmp L1168
L1177:
 jmp L1146
L1179:
 pushFromFSp 4
 pushImm 0
 sub 
 msbi 
 jz L1201
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 4
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 jmp L1201

L1201:
 ret 
L1332:
 popToSp 4
 popToSp 0
 pushImm 0
 popToSp 8
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushFromFSp 4
 sub 
 neqz 
 jz L1360
 pushImm 1
 popToSp 8
 jmp L1360
L1360:
 pushFromFSp 8
 ret 
L1202:
 popToSp 0
L1204:
 pushFromFSp 0
 syscall 1, 124 ; trap_obj_is_entry_fly (1 in, 1 out)
 eqz 
 dup 
 jz L1217
 pushFromFSp 0
 syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
 eqzv 
L1217:
 dup 
 jnz L1225
 pushFromFSp 0
 syscall 2, 5 ; trap_enemy_is_no_control (1 in, 1 out)
 neqzv 
L1225:
 jz L1230
 halt 
 jmp L1204
L1230:
 ret 
L1270:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 fetchValue 36
 popToSp 8
 pushFromFSp 4
 dup 
 pushImm 0
 sub 
 jz L1291
 jmp L1328
L1291:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 2
 sub 
 neqz 
 dup 
 jz L1317
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 1
 sub 
 neqz 
 eqzv 
L1317:
 jz L1326
 pushImmf 0
 popToSp 8
 jmp L1326
L1326:
 jmp L1328
L1328:
 drop 
 pushFromFSp 8
 ret 
L1231:
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 4 ; trap_obj_wish_dir (2 in, 0 out)
 ret 
}

// IDLE has 1202 1231 and 1270 to be shared with idle_time

public ? act_idle_time() {
  //L1363 1202 1231 1270
L1363: ;___label for action idle_time
 popToSp 0
 pushImmf 15
 pushImmf 45
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 popToSp 4
 pushFromFSp 0
 gosub 4, L1202
 pushFromFSp 0
 gosub 4, L1231
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushFromFSp 0
 pushImm 0
 gosub 4, L1270
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
L1399:
 pushFromFSp 4
 pushImmf 0
 subf 
 supzf 
 jz L1418
 pushFromFSp 4
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 4
 halt 
 jmp L1399
L1418:
 ret 
}

public ? act_footwork() {
L1419: ;___label for action footwork
 popToSp 0
 pushFromFSp 0
 pushImm 47
 pushImm 0
 pushImm -1
 gosub 4, L1105
 ret 
}

// Cannot find L809 for now

public ? act_mode_battle() {
  //1435 1509 1632 1647 1482 1508 1527 1526 1502
  // 1542 1597 1555 809 1600 1589 1597
L1435: ;___label for action mode_battle
 popToSp 0
 pushFromFSp 0
 gosub 4, L1509
 pushFromFSp 0
 pushImm 0
 gosub 4, L1632
 pushFromFSp 0
 pushImm 16
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSp 0
 gosub 4, L1647
 pushFromFSp 0
 fetchValue 48
 subf 
 infzf 
 jz L1482
 pushFromFSp 0
 pushFromPAi L2593 ; ___ai 'btl_attack' (L2593)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1508
L1509:
 popToSp 0
 pushFromFSp 0
 gosub 4, L1527
 jz L1526
 pushFromFSp 0
 pushFromPAi L2624 ; ___ai 'leave' (L2624)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 halt 
 jmp L1526
L1526:
 ret 
L1632:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromFSp 0
 pushFromFSp 4
 syscall 1, 121 ; trap_target_search (3 in, 0 out)
 ret 
L1647:
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 popToSp 32
 pushFromFSp 32
 ret 
L1482:
 pushFromFSp 0
 gosub 4, L1647
 pushFromFSp 0
 fetchValue 52
 subf 
 infzf 
 jz L1502
 pushFromFSp 0
 pushFromPAi L2604 ; ___ai 'btl_short' (L2604)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1508
L1502:
 pushFromFSp 0
 pushFromPAi L2627 ; ___ai 'btl_long' (L2627)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
L1508:
 ret 
L1527:
 popToSp 0
 syscall 1, 206 ; trap_status_is_force_leave (0 in, 1 out)
 jz L1542
 pushImm 1
 popToSp 8
 jmp L1597
L1542:
 syscall 1, 171 ; trap_status_no_leave (0 in, 1 out)
 jz L1555
 pushImm 0
 popToSp 8
 jmp L1597
L1555:
 pushImm 0
 popToSp 8
 pushFromFSp 0
 gosub 8, L809
 memcpyToSp 16, 16
 pushFromPSp 16
 gosub 12, L1600
 popToSp 4
 pushFromFSp 0
 syscall 1, 56 ; method_obj_is_culling (1 in, 1 out)
 jz L1589
 pushFromFSp 4
 pushFromFSpVal 60
 subf 
 supzf 
 popToSp 8
 jmp L1597
L1600:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 6 ; trap_vector_len (1 in, 1 out)
 ret 
L1589:
 pushFromFSp 4
 pushFromFSpVal 56
 subf 
 supzf 
 popToSp 8
L1597:
 pushFromFSp 8
 ret 
}

// sharing 1632 and 1647

public ? act_mode_revenge() {
  //1698 1632 1647 1727 1733
L1698: ;___label for action mode_revenge
 popToSp 0
 pushFromFSp 0
 pushImm 1
 gosub 4, L1632
 pushFromFSp 0
 gosub 4, L1647
 pushFromFSp 0
 fetchValue 52
 subf 
 infzf 
 jz L1727
 pushFromFSp 0
 pushFromPAi L2667 ; ___ai 'rvg_short' (L2667)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1733
L1727:
 pushFromFSp 0
 pushFromPAi L2684 ; ___ai 'rvg_long' (L2684)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
L1733:
 pushFromFSp 0
 pushFromPAi L2699 ; ___ai 'mode_battle' (L2699)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 ret 
}

//uses 1632 from battle

public ? act_mode_battle_boss() {
  //L1740 1632 1762 1770 1804 1779 1787
L1740: ;___label for action mode_battle_boss
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub 4, L1632
 pushFromFSp 0
 fetchValue 24
 dup 
 pushImm 0
 sub 
 jz L1762
 jmp L1770
L1762:
 pushFromFSp 0
 pushFromPAi L2727 ; ___ai 'btl_normal' (L2727)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1804
L1770:
 dup 
 pushImm 1
 sub 
 jz L1779
 jmp L1787
L1779:
 pushFromFSp 0
 pushFromPAi L2742 ; ___ai 'btl_hard' (L2742)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1804
L1804:
 drop 
 ret 
L1787:
 dup 
 pushImm 2
 sub 
 jz L1796
 jmp L1804
L1796:
 pushFromFSp 0
 pushFromPAi L2747 ; ___ai 'btl_super_hard' (L2747)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1804

}

// uses 1632 from battle

public ? act_mode_revenge_boss() {
  // 1806 1828 1836 1870 1845 1853 1862
L1806: ;___label for action mode_revenge_boss
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub 4, L1632
 pushFromFSp 0
 fetchValue 24
 dup 
 pushImm 0
 sub 
 jz L1828
 jmp L1836
L1828:
 pushFromFSp 0
 pushFromPAi L2609 ; ___ai 'rvg_normal' (L2609)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1870
L1836:
 dup 
 pushImm 1
 sub 
 jz L1845
 jmp L1853
L1845:
 pushFromFSp 0
 pushFromPAi L2632 ; ___ai 'rvg_hard' (L2632)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1870
L1853:
 dup 
 pushImm 2
 sub 
 jz L1862
 jmp L1870
L1862:
 pushFromFSp 0
 pushFromPAi L2644 ; ___ai 'rvg_super_hard' (L2644)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1870
L1870:
 drop 
 ret 
}

public ? act_revenge() {
  //1872 1887 1895 1929 1904 1912 1921
L1872: ;___label for action revenge
 popToSp 0
 pushFromFSp 0
 fetchValue 24
 dup 
 pushImm 0
 sub 
 jz L1887
 jmp L1895
L1887:
 pushFromFSp 0
 pushFromPAi L2689 ; ___ai 'rst_normal' (L2689)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1929
L1895:
 dup 
 pushImm 1
 sub 
 jz L1904
 jmp L1912
L1904:
 pushFromFSp 0
 pushFromPAi L2705 ; ___ai 'rst_hard' (L2705)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1929
L1912:
 dup 
 pushImm 2
 sub 
 jz L1921
 jmp L1929
L1921:
 pushFromFSp 0
 pushFromPAi L2713 ; ___ai 'rst_super_hard' (L2713)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1929
L1929:
 drop 
 ret 
}

public ? act_shout() {
  //1931 1938 1945 1978 1990 1980
L1931: ;___label for action shout
 popToSp 0
 pushFromPWp W0
 gosub 4, L1938
 ret 
L1938:
 popToSp 0
 pushFromFSp 0
 gosub 4, L1945
 ret 
L1945:
 popToSp 0
 pushFromPSpVal 0
 fetchValue 4
 pushImm 191
 pushImmf 8
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSpVal 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 0
 fetchValue 4
 gosub 4, L1978
 ret 
L1978:
 popToSp 0
L1980:
 pushFromFSp 0
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L1990
 halt 
 jmp L1980
L1990:
 ret 
}

public ? act_shout_callback1() {
 //1991 1998 2022 2033 2042 2065 2064
L1991: ;___callback for action shout
 popToSp 0
 pushFromPWp W0
 gosub 4, L1998
 ret 
L1998:
 popToSp 0
 pushImm 1
 popToSpVal 20
 pushFromPSpVal 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 dup 
 jz L2022
 pushFromPSpVal 0
 fetchValue 4
 syscall 10, 31 ; trap_sysobj_is_summon (1 in, 1 out)
 eqz 
 eqzv 
L2022:
 jz L2033
 pushFromPSpVal 0
 pushImm 8
 syscall 1, 71 ; trap_obj_reset_flag (2 in, 0 out)
 jmp L2033
L2033:
 pushFromFSp 0
 gosub 4, L2042
 pushFromFSp 0
 gosub 4, L2065
 ret 
L2042:
 popToSp 0
 pushFromFSpVal 24
 pushImm 0
 sub 
 neqz 
 jz L2064
 pushFromFSpVal 24
 syscall 0, 51 ; trap_effect_kill (1 in, 0 out)
 pushImm 0
 popToSpVal 24
 jmp L2064
L2064:
 ret 
L2065:
 popToSp 0
 pushFromFSpVal 28 ; ___possible_ref
 pushImm 0
 sub 
 neqz 
 jz L2087
 pushFromFSpVal 28 ; ___possible_ref
 syscall 2, 13 ; trap_attack_free (1 in, 0 out)
 pushImm 0
 popToSpVal 28 ; ___possible_ref
 jmp L2087
L2087:
 ret 
}

public ? act_shout_callback2() {
  //2088 2100 2154 2152
L2088: ;___callback for action shout
 popToSp 0
 pushFromPWp W0
 pushFromPWp W132
 pushImm 1
 gosub 4, L2100
 ret 
L2100:
 popToSp 4
 popToSp 8
 popToSp 0
 pushImm 0
 popToSpVal 20
 pushFromFSp 8
 memcpyToSpVal 20, 0
 pushImm 0
 popToSpVal 24
 pushImm 0
 popToSpVal 28 ; ___possible_ref
 pushFromPSpVal 0
 fetchValue 4
 syscall 10, 31 ; trap_sysobj_is_summon (1 in, 1 out)
 eqz 
 jz L2154
 pushFromPSpVal 0
 pushImm 8
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 4
 jz L2152
 pushFromPSpVal 0
 syscall 1, 276 ; trap_obj_use_mp (1 in, 0 out)
 jmp L2152
L2152:
 jmp L2154
L2154:
 ret 
}

public ? act_rush() {
//2155 2162 2169 2511 2521 2536 2240 2545
//2510 2365 2356 2349 2354
L2155: ;___label for action rush
 popToSp 0
 pushFromPWp W32
 gosub 4, L2162
 ret 
L2162:
 popToSp 0
 pushFromFSp 0
 gosub 4, L2169
 ret 
L2169:
 popToSp 0
 pushFromPSpVal 32
 gosub 8, L2511
 pushFromPSpVal 32
 pushImm 1
 syscall 10, 55 ; trap_target_searcher_set_check_hide_from_friend (2 in, 0 out)
 pushFromPSpVal 32
 pushImmf 0
 pushImmf 1500
 gosub 8, L2521
 pushFromPSpVal 32
 pushImmf 6.283185
 gosub 8, L2536
 pushFromPSpVal 0
 fetchValue 4
 pushImm 192
 pushImmf 8
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSpVal 0
 pushImm 1
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushImm 0
 popToSp 12
 pushImmf 0
 popToSp 4
 pushImmf 0
 popToSp 8
L2240:
 pushFromFSp 0
 gosub 8, L2545
 jz L2510
 pushFromFSp 8
 pushImmf 104
 subf 
 infzf 
 jz L2365
 pushFromFSp 4
 pushImmf 0
 subf 
 infoezf 
 jz L2356
 pushFromPSpVal 32
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 1
 pushImm 1
 pushImm 1
 syscall 6, 5 ; trap_target_seracher_search (7 in, 0 out)
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 eqz 
 jz L2349
 pushFromPSpVal 32
 syscall 6, 4 ; trap_target_searcher_reset (1 in, 0 out)
 pushFromPSpVal 32
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImm 1
 pushImm 1
 pushImm 1
 syscall 6, 5 ; trap_target_seracher_search (7 in, 0 out)
 jmp L2354
L2349:
 pushImmf 52
 popToSp 4
L2354:
 jmp L2363
L2363:
 jmp L2401
L2401:
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L2466
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSpVal 0
 pushFromPSp 16
 pushImmf 0.087266
 syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
 drop 
 jmp L2500
L2466:
 pushFromFSp 12
 eqz 
 jz L2500
 pushFromPSpVal 0
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImmf 1.570796
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImmf 0.034907
 syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
 drop 
 jmp L2500
L2500:
 halt 
 pushFromFSp 8
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 addf 
 popToSp 8
 jmp L2240
L2510:
 ret 
L2511:
 popToSp 0
 pushFromFSp 0
 pushImm 5
 syscall 6, 3 ; trap_target_searcher_init (2 in, 0 out)
 ret 
L2521:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 8
 popToSpVal 16
 pushFromFSp 4
 popToSpVal 20
 ret 
L2536:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 popToSpVal 24
 ret 
L2545:
 popToSp 0
 pushFromPSpVal 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 popToSp 4
 pushFromFSp 4
 pushImm 192
 sub 
 eqz 
 dup 
 jnz L2573
 pushFromFSp 4
 pushImm 193
 sub 
 eqz 
 neqzv 
L2573:
 ret 
L2356:
 pushFromFSp 4
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 4
L2365:
 pushFromFSp 12
 eqz 
 jz L2401
 pushFromPSpVal 0
 fetchValue 4
 pushImm 193
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushImm 1
 popToSp 12
 jmp L2401
}

//not sure where 1998 is

public ? act_rush_callback1() {
L2574: ;___callback for action rush
 popToSp 0
 pushFromPWp W32
 gosub 4, L1998
 ret 
}

//not sure where 2100 is
public ? act_rush_callback2() {
L2581: ;___callback for action rush
 popToSp 0
 pushFromPWp W32
 pushFromPWp W132
 pushImm 1
 gosub 4, L2100
 ret 
}




// 1332  


 section .bss
W0:
 resb 32
W32:
 resb 100
W132:
 resb 20
W152:
 resb 4104
