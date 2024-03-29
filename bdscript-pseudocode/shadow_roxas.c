---
WorkSize: 4224
StackSize: 512
TempSize: 512
Triggers:
- Key: 6
  Addr: TR6 // On Damage
- Key: 13
  Addr: TR13
- Key: 1
  Addr: TR1
- Key: 0
  Addr: TR0 // On Init
Name: p_ex130

void on_damage () {
  TR6:
  popToSp 0
  pushFromPWp W0
  pushFromFSp 0
  gosub 4, L35
  ret 
  L35:
  popToSp 4
  popToSp 0
  pushFromFSp 4
  syscall 2, 8 ; trap_damage_is_reaction (1 in, 1 out)
  jz L67
  pushFromFSp 0
  pushImm 20
  add 
  dup 
  fetchValue 0
  pushImm 1
  add 
  memcpy 0
  pushFromFSp 0
  pushFromPAi L4339 ; ___ai 'mode_revenge' (L4339)
  syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
  jmp L67
  L67:
  ret 
}


void on_T13 () {
  TR13:
  pushFromPWp W0
  pushImmf 0
  syscall 1, 128 ; trap_obj_sysjump (2 in, 0 out)
  pushFromPWp W0
  fetchValue 4
  pushImm 4
  pushImmf 8
  syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
  pushFromPWp W0
  syscall 1, 65 ; trap_obj_exec_fall (1 in, 0 out)
  ret 
}

void on_T1 () {
    TR1:
    pushFromPWp W0
    gosub 4, L97
    ret 
    L97:
    popToSp 0
    pushFromFSp 0
    gosub 4, L122
    L103:
    pushFromFSp 0
    syscall 1, 10 ; trap_obj_is_act_exec (1 in, 1 out)
    eqz 
    jz L118
    pushFromFSp 0
    pushFromPAi L4407 ; ___ai 'mode_battle' (L4407)
    syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
    jmp L118
    L118:
    halt 
    jmp L103
    L122:
    popToSp 0
    gosub 4, L141
    L141:
    syscall 1, 34 ; trap_event_is_exec (0 in, 1 out)
    jz L148
    halt 
    jmp L141
    L148:
    ret 
}

// on load also would work
void on_init() { 
    TR0:
    popToSp 0
    pushFromPWp W0
    pushFromFSp 0
    gosub 4, L180
    ret 
    L180:
    popToSp 4
    popToSp 0
    pushFromFSp 0
    pushFromFSp 4
    gosub 4, L1278
    pushFromFSp 0
    pushFromPWp W112
    gosub 4, L1365
    pushFromFSp 0
    pushFromPWp W112
    syscall 1, 7 ; trap_obj_set_act_table (2 in, 0 out)

    syscall(trap_act_table_add(act_table, 'appear', 100, L1405))
    syscall(trap_act_table_add(act_table, 'leave', 196908, L1630))
    syscall(trap_act_table_add(act_table, 'dead', 196908, L1690))
    syscall(trap_act_table_add(act_table, 'freeze', 100, L1784))
    syscall(trap_act_table_add(act_table, 'event', 196908, L1801))

    syscall(trap_act_table_add(act_table, 'idle', 100, L1821))
    syscall(trap_act_table_add(act_table, 'idle_time', 100, L2095))
    syscall(trap_act_table_add(act_table, 'footwork', 100, L2151))
    syscall(trap_act_table_add(act_table, 'mode_revenge', 100, L2167))
    syscall(trap_act_table_add(act_table, 'mode_battle_boss', 100, L2275))
    syscall(trap_act_table_add(act_table, 'mode_revenge_boss', 100, L2341))
    syscall(trap_act_table_add(act_table, 'idle_short', 100, L2407))
    syscall(trap_act_table_add(act_table, 'idle_long', 100, L2606))
    syscall(trap_act_table_add(act_table, 'move_forward', 100, L2634))
    syscall(trap_act_table_add(act_table, 'atk_cut_down', 200, L3142))
    syscall(trap_act_table_add(act_table, 'atk_cut_slide', 200, L3158))
    syscall(trap_act_table_add(act_table, 'atk_thrust', 200, L3174))
    syscall(trap_act_table_add(act_table, 'atk_spin', 200, L3190))
    syscall(trap_act_table_add(act_table, 'atk_combo', 200, L3216))
    syscall(trap_act_table_add(act_table, 'atk_revenge_combo', 200, L3296))
    syscall(trap_act_table_add(act_table, 'mode_changer', 100, L3353))

    syscall(trap_act_table_add(act_table, 'btl_attack', 100, L3401))
    syscall(trap_act_table_add(act_table, 'btl_short', 100, L3506))
    syscall(trap_act_table_add(act_table, 'btl_long', 100, L3581))
    syscall(trap_act_table_add(act_table, 'mode_battle', 100, L3596))
    syscall(trap_act_table_add(act_table, 'rvg_short', 100, L3353))
    syscall(trap_act_table_add(act_table, 'rvg_long', 100, L3825))

    syscall(trap_act_table_add(act_table, 'revenge', 65836, L3951))


    pushFromFSp 0
    pushImmf 8
    gosub 4, L4105
    pushFromFSp 0
    pushImm 0
    gosub 4, L4119
    pushFromFSp 0
    pushImmf 300
    pushImmf 400
    gosub 4, L4240
    pushFromFSp 0
    pushImm 145
    pushImm 0
    syscall 2, 9 ; trap_btlobj_set_sheet (3 in, 0 out)
    pushFromFSp 0
    pushImm 6
    syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
    pushFromFSp 0
    pushImmf 40
    syscall 2, 76 ; trap_enemy_set_karma_limit (2 in, 0 out)
    pushFromFSp 0
    pushImm 24
    add 
    pushImm 0
    memcpy 0
    pushImm 0
    popToSpVal 108
    pushFromFSp 0
    gosub 4, L3656
    ret 

    L1278:
    popToSp 4
    popToSp 0
    pushFromFSp 0
    pushFromFSp 4
    gosub 4, L1313
    pushImm -1
    popToSpVal 28
    pushImmf 30
    popToSpVal 32
    pushFromPSpVal 72
    gosub 4, L1322
    pushImmf 2000
    popToSpVal 56
    pushImmf 1000
    popToSpVal 60
    ret 
    L1313:
    popToSp 4
    popToSp 0
    pushFromFSp 4
    popToSpVal 4
    ret 
    L1322:
    popToSp 0
    pushImmf 200
    popToSpVal 0
    pushImmf 200
    popToSpVal 4
    pushImmf 0
    popToSpVal 8
    pushImm 2
    popToSpVal 12
    pushImmf 8
    popToSpVal 16
    pushImm 3
    popToSpVal 20
    pushImmf 8
    popToSpVal 24
    pushImm 0
    popToSpVal 32
    ret 

L1365:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L1396
 pushFromFSp 0
 pushImm 16
 add 
 pushImm 0
 memcpy 0
 pushFromFSp 0
 pushImm 20
 add 
 pushImm 0
 memcpy 0
 ret 
L1396:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 syscall 1, 5 ; trap_act_table_init (1 in, 0 out)
 ret 

L4105:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushImm 36
 add 
 pushFromFSp 4
 memcpy 0
 ret 
L4119:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 dup 
 pushImm 5
 sub 
 jz L4134
 jmp L4156
L4134:
 pushFromFSp 0
 pushImm 56
 add 
 pushImmf 2500
 memcpy 0
 pushFromFSp 0
 pushImm 60
 add 
 pushImmf 1800
 memcpy 0
 jmp L4238
L4156:
 dup 
 pushImm 6
 sub 
 jz L4165
 jmp L4187
L4165:
 pushFromFSp 0
 pushImm 56
 add 
 pushImmf 2500
 memcpy 0
 pushFromFSp 0
 pushImm 60
 add 
 pushImmf 1200
 memcpy 0
 jmp L4238

L4187:
 syscall 1, 23 ; trap_area_world (0 in, 1 out)
 pushImm 10
 sub 
 eqz 
 jz L4218
 pushFromFSp 0
 pushImm 56
 add 
 pushImmf 2500
 memcpy 0
 pushFromFSp 0
 pushImm 60
 add 
 pushImmf 1200
 memcpy 0
 jmp L4238
L4218:
 pushFromFSp 0
 pushImm 56
 add 
 pushImmf 2000
 memcpy 0
 pushFromFSp 0
 pushImm 60
 add 
 pushImmf 1200
 memcpy 0
L4238:
 drop 
 ret 
L4240:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 pushImm 48
 add 
 pushFromFSp 8
 memcpy 0
 pushFromFSp 0
 pushImm 52
 add 
 pushFromFSp 4
 memcpy 0
 ret 

L3656:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 ret 

}

void act_appear() {

}

D121:
L121:
 ret 
L126:
 syscall 1, 301 ; trap_tutorial_is_open (0 in, 1 out)
 jz L133
 halt 
 jmp L126
L133:
 pushImmf 30
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 gosub 4, L149
 ret 


L149:
 popToSp 0
L151:
 pushFromFSp 0
 pushImmf 0
 subf 
 supzf 
 jz L170
 pushFromFSp 0
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 0
 halt 
 jmp L151
L170:
 ret 




D1405:
L1405: ;___label for action appear
 popToSp 0
 pushFromFSp 0
 syscall 1, 110 ; trap_obj_get_appear_way (1 in, 1 out)
 dup 
 pushImm 2
 sub 
 jz L1427
 dup 
 pushImm -1
 sub 
 jz L1427
 jmp L1433
L1427:
 pushFromFSp 0
 gosub 4, L1439
 jmp L1437
L1433:
 pushFromFSp 0
 gosub 4, L1602
L1437:
 drop 
 ret 
L1439:
 popToSp 0
 gosub 12, L1590
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
 jnz L1510
 pushFromFSp 0
 syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
 eqz 
 neqzv 
L1510:
 jz L1519
 pushImm 0
 popToSp 32
 jmp L1519
L1519:
 pushFromFSp 0
 fetchValue 4
 pushFromFSpVal 32
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
L1527:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L1578
 gosub 12, L1590
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
 jmp L1527
L1578:
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 32
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 ret 
L1590:
 pushFromPSp 0
 pushImm 4
 add 
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpy 0
 pushFromPSp 0
 ret 
L1602:
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
 gosub 4, L122
 ret 
L1630: ;___label for action leave
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
 gosub 4, L149
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 gosub 4, L1686
 ret 
L1686:
 halt 
 jmp L1686
L1689:
 ret 
L1690: ;___label for action dead
 popToSp 0
 pushFromFSp 0
 gosub 4, L1697
 ret 
L1697:
 popToSp 0
 pushFromFSpVal 28
 pushImm 0
 sub 
 msbi 
 jz L1716
 pushFromFSp 0
 pushFromFSpVal 28
 syscall 1, 92 ; trap_obj_scatter_prize (2 in, 0 out)
 jmp L1716
L1716:
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
 gosub 4, L149
 pushFromFSp 0
 fetchValue 4
 pushFromFSpVal 32
 pushImmf 0.5
 mulf 
 syscall 1, 19 ; trap_sysobj_fadeout (2 in, 0 out)
 pushFromFSpVal 32
 pushImmf 0.5
 mulf 
 gosub 4, L149
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 gosub 4, L1686
 ret 
L1784: ;___label for action freeze
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 gosub 4, L1686
 ret 
L1801: ;___label for action event
 popToSp 0
 gosub 4, L1686
 ret 
L1806: ;___callback for action event
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 ret 
L1821: ;___label for action idle
 popToSp 0
 pushFromFSp 0
 pushImm 0
 pushImm 0
 pushImm -1
 gosub 4, L1837
 ret 
L1837:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 0
 gosub 8, L1934
 pushFromFSp 8
 pushImm 3
 sub 
 neqz 
 jz L1864
 pushFromFSp 0
 gosub 8, L1963
 jmp L1864
L1864:
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 12
 pushFromFSp 0
 pushFromFSp 12
 gosub 8, L2002
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
L1878:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L1911
 halt 
 pushFromFSp 0
 pushFromFSp 12
 gosub 8, L2064
 jz L1900
 jmp L1911
L1898:
 jmp L1900
L1900:
 pushFromFSp 0
 syscall 2, 5 ; trap_enemy_is_no_control (1 in, 1 out)
 jz L1909
 halt 
 jmp L1900
L1909:
 jmp L1878
L1911:
 pushFromFSp 4
 pushImm 0
 sub 
 msbi 
 jz L1933
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 4
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 jmp L1933
L1933:
 ret 
L1934:
 popToSp 0
L1936:
 pushFromFSp 0
 syscall 1, 124 ; trap_obj_is_entry_fly (1 in, 1 out)
 eqz 
 dup 
 jz L1949
 pushFromFSp 0
 syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
 eqzv 
L1949:
 dup 
 jnz L1957
 pushFromFSp 0
 syscall 2, 5 ; trap_enemy_is_no_control (1 in, 1 out)
 neqzv 
L1957:
 jz L1962
 halt 
 jmp L1936
L1962:
 ret 
L1963:
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
L2002:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 fetchValue 36
 popToSp 8
 pushFromFSp 4
 dup 
 pushImm 0
 sub 
 jz L2023
 jmp L2060
L2023:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 2
 sub 
 neqz 
 dup 
 jz L2049
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 1
 sub 
 neqz 
 eqzv 
L2049:
 jz L2058
 pushImmf 0
 popToSp 8
 jmp L2058
L2058:
 jmp L2060
L2060:
 drop 
 pushFromFSp 8
 ret 
L2064:
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
 jz L2092
 pushImm 1
 popToSp 8
 jmp L2092
L2092:
 pushFromFSp 8
 ret 
L2095: ;___label for action idle_time
 popToSp 0
 pushImmf 15
 pushImmf 45
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 popToSp 4
 pushFromFSp 0
 gosub 4, L1934
 pushFromFSp 0
 gosub 4, L1963
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushFromFSp 0
 pushImm 0
 gosub 4, L2002
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
L2131:
 pushFromFSp 4
 pushImmf 0
 subf 
 supzf 
 jz L2150
 pushFromFSp 4
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 4
 halt 
 jmp L2131
L2150:
 ret 
L2151: ;___label for action footwork
 popToSp 0
 pushFromFSp 0
 pushImm 47
 pushImm 0
 pushImm -1
 gosub 4, L1837
 ret 
L2167: ;___label for action mode_revenge
 popToSp 0
 pushFromFSp 0
 pushImm 1
 gosub 4, L2209
 pushFromFSp 0
 gosub 4, L2224
 pushFromFSp 0
 fetchValue 52
 subf 
 infzf 
 jz L2196
 pushFromFSp 0
 pushFromPAi L4388 ; ___ai 'rvg_short' (L4388)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2202
L2196:
 pushFromFSp 0
 pushFromPAi L4398 ; ___ai 'rvg_long' (L4398)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
L2202:
 pushFromFSp 0
 pushFromPAi L4407 ; ___ai 'mode_battle' (L4407)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 ret 
L2209:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromFSp 0
 pushFromFSp 4
 syscall 1, 121 ; trap_target_search (3 in, 0 out) ; ___possible_ref
 ret 
L2224:
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
L2275: ;___label for action mode_battle_boss
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub 4, L2209
 pushFromFSp 0
 fetchValue 24
 dup 
 pushImm 0
 sub 
 jz L2297
 jmp L2305
L2297:
 pushFromFSp 0
 pushFromPAi L4422 ; ___ai 'btl_normal' (L4422)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2339
L2305:
 dup 
 pushImm 1
 sub 
 jz L2314
 jmp L2322
L2314:
 pushFromFSp 0
 pushFromPAi L4428 ; ___ai 'btl_hard' (L4428)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2339
L2322:
 dup 
 pushImm 2
 sub 
 jz L2331
 jmp L2339
L2331:
 pushFromFSp 0
 pushFromPAi L4437 ; ___ai 'btl_super_hard' (L4437)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2339
L2339:
 drop 
 ret 
L2341: ;___label for action mode_revenge_boss
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub 4, L2209
 pushFromFSp 0
 fetchValue 24
 dup 
 pushImm 0
 sub 
 jz L2363
 jmp L2371
L2363:
 pushFromFSp 0
 pushFromPAi L4445 ; ___ai 'rvg_normal' (L4445)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2405
L2371:
 dup 
 pushImm 1
 sub 
 jz L2380
 jmp L2388
L2380:
 pushFromFSp 0
 pushFromPAi L4451 ; ___ai 'rvg_hard' (L4451)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2405
L2388:
 dup 
 pushImm 2
 sub 
 jz L2397
 jmp L2405
L2397:
 pushFromFSp 0
 pushFromPAi L4456 ; ___ai 'rvg_super_hard' (L4456)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2405
L2405:
 drop 
 ret 
L2407: ;___label for action idle_short
 popToSp 0
 pushImmf 20
 pushImmf 30
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 popToSp 4
 pushFromFSp 0
 pushFromFSp 4
 pushImmf 0
 pushImmf 0
 pushImm 0
 gosub 4, L2435
 ret 
L2435:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 16
 popToSp 0
 pushImm 0
 popToSp 20
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 20
 pushImmf 8
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 pushImm 0
 popToSp 24
L2466:
 pushImmf 0
 pushFromFSp 16
 subf 
 infzf 
 jz L2605
 pushImmf 0
 pushFromFSp 12
 subf 
 infzf 
 dup 
 jz L2494
 pushFromFSp 0
 gosub 12, L2224
 pushFromFSp 12
 subf 
 infzf 
 eqzv 
L2494:
 jz L2529
 pushFromFSp 4
 pushImm 1
 sub 
 msb 
 dup 
 jnz L2513
 pushFromFSp 4
 pushFromFSp 24
 sub 
 msb 
 neqzv 
L2513:
 jz L2519
 jmp L2605
L2517:
 jmp L2527
L2519:
 pushFromFSp 24
 pushImm 1
 add 
 popToSp 24
L2527:
 jmp L2529
L2529:
 pushImmf 0
 pushFromFSp 8
 subf 
 infzf 
 dup 
 jz L2548
 pushFromFSp 0
 gosub 12, L2224
 pushFromFSp 8
 subf 
 supzf 
 eqzv 
L2548:
 jz L2583
 pushFromFSp 4
 pushImm 1
 sub 
 msb 
 dup 
 jnz L2567
 pushFromFSp 4
 pushFromFSp 24
 sub 
 msb 
 neqzv 
L2567:
 jz L2573
 jmp L2605
L2571:
 jmp L2581
L2573:
 pushFromFSp 24
 pushImm 1
 add 
 popToSp 24
L2581:
 jmp L2583
L2583:
 pushFromFSp 0
 pushFromFSp 20
 gosub 12, L2064
 jz L2595
 jmp L2605
L2593:
 jmp L2595
L2595:
 pushFromFSp 16
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 16
 halt 
 jmp L2466
L2605:
 ret 
L2606: ;___label for action idle_long
 popToSp 0
 pushImmf 80
 pushImmf 120
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 popToSp 4
 pushFromFSp 0
 pushFromFSp 4
 pushImmf 0
 pushImmf 600
 pushImm 0
 gosub 4, L2435
 ret 
L2634: ;___label for action move_forward
 popToSp 0
 pushFromFSp 0
 gosub 4, L2666
 pushImmf 150
 pushImmf 250
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 popToSp 4
 pushFromFSp 0
 pushFromFSp 4
 pushImmf 0
 pushImmf 400
 pushImmf 0
 gosub 4, L2673
 ret 
L2666:
 popToSp 0
 pushFromFSp 0
 gosub 4, L1963
 ret 
L2673:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 16
 popToSp 0
 pushFromFSp 0
 gosub 16, L1934
 pushImm 2
 syscall 0, 16 ; trap_random_get (1 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L2706
 pushFromFSp 12
 degr 
 popToSp 52
 jmp L2712
L2706:
 pushFromFSp 12
 negf 
 degr 
 popToSp 52
L2712:
 pushFromFSp 16
 pushImmf 0
 subf 
 supzf 
 jz L2890
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 pushFromPSp 32
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 popToSp 48
 pushFromFSp 8
 pushImmf 0
 subf 
 supzf 
 dup 
 jz L2784
 pushFromFSp 48
 pushFromFSp 8
 subf 
 infzf 
 eqzv 
L2784:
 dup 
 jnz L2805
 pushFromFSp 4
 pushImmf 0
 subf 
 supzf 
 dup 
 jz L2804
 pushFromFSp 48
 pushFromFSp 4
 subf 
 supzf 
 eqzv 
L2804:
 neqzv 
L2805:
 jz L2811
 jmp L2890
L2809:
 jmp L2811
L2811:
 pushFromPSp 32
 pushFromFSp 52
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromPSp 32
 pushImmf 500
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 memcpyToSp 16, 32
 pushFromFSp 0
 pushFromPSp 32
 pushFromPSpVal 72
 gosub 16, L2891
 drop 
 pushFromPSpVal 72
 fetchValue 28
 pushImm 3
 sub 
 eqz 
 jz L2880
 jmp L2890
L2878:
 jmp L2880
L2880:
 halt 
 pushFromFSp 16
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 16
 jmp L2712
L2890:
 ret 
L2891:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 8
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 popToSp 48
 pushFromFSp 0
 syscall 1, 78 ; trap_obj_motion_is_no_control (1 in, 1 out)
 eqz 
 jz L3139
 pushFromFSp 0
 pushFromPSp 32
 pushFromFSp 4
 fetchValue 8
 syscall 1, 80 ; trap_obj_turn_dir (3 in, 1 out)
 drop 
 pushFromFSp 0
 syscall 1, 57 ; trap_obj_is_jump (1 in, 1 out)
 jz L2967
 pushFromFSp 0
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 pushFromFSp 4
 fetchValue 24
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 jmp L3137
L2967:
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 4
 fetchValue 12
 pushFromFSp 4
 fetchValue 16
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 12
 add 
 pushImmf 100
 memcpy 0
 pushFromFSp 4
 pushImm 28
 add 
 pushFromFSp 0
 pushFromPSp 16
 pushFromFSp 4
 fetchValue 0
 pushFromFSp 4
 fetchValue 4
 syscall 1, 119 ; trap_obj_check_step (4 in, 1 out)
 memcpy 0
 pushFromFSp 4
 fetchValue 28
 dup 
 pushImm 1
 sub 
 jz L3044
 dup 
 pushImm 2
 sub 
 jz L3044
 jmp L3123
L3044:
 pushFromFSp 4
 fetchValue 20
 pushImm 0
 sub 
 msb 
 jz L3059
 jmp L3136
L3057:
 jmp L3059
L3059:
 pushFromPSp 16
 pushImm 4
 add 
 pushFromFSp 4
 fetchValue 0
 memcpy 0
 pushFromPSp 16
 pushImm 12
 add 
 pushFromFSp 4
 fetchValue 24
 memcpy 0
 pushFromFSp 4
 fetchValue 32
 jz L3105
 pushFromFSp 0
 pushFromPSp 16
 pushFromFSp 4
 fetchValue 20
 pushImmf 0
 pushImm 1
 syscall 1, 168 ; trap_obj_flyjump (5 in, 0 out)
 jmp L3121
L3105:
 pushFromFSp 0
 pushFromPSp 16
 pushFromFSp 4
 fetchValue 20
 pushImmf 0
 pushImm 1
 syscall 1, 55 ; method_obj_jump (5 in, 0 out)
L3121:
 jmp L3136
L3123:
 dup 
 pushImm 3
 sub 
 jz L3132
 jmp L3136
L3132:
 jmp L3136
L3134:
 jmp L3136
L3136:
 drop 
L3137:
 jmp L3139
L3139:
 pushFromFSp 48
 ret 
L3142: ;___label for action atk_cut_down
 popToSp 0
 pushFromFSp 0
 pushImm 201
 pushImm 0
 pushImm -1
 gosub 4, L1837
 ret 
L3158: ;___label for action atk_cut_slide
 popToSp 0
 pushFromFSp 0
 pushImm 202
 pushImm 0
 pushImm -1
 gosub 4, L1837
 ret 
L3174: ;___label for action atk_thrust
 popToSp 0
 pushFromFSp 0
 pushImm 203
 pushImm 0
 pushImm -1
 gosub 4, L1837
 ret 
L3190: ;___label for action atk_spin
 popToSp 0
 pushFromFSp 0
 pushImm 16
 add 
 pushImm 0
 memcpy 0
 pushFromFSp 0
 pushImm 204
 pushImm 0
 pushImm -1
 gosub 4, L1837
 ret 
L3216: ;___label for action atk_combo
 popToSp 0
 pushFromFSp 0
 pushImm 202
 pushImm 2
 gosub 4, L3263
 pushFromFSp 0
 pushImm 201
 pushImm 1
 gosub 4, L3263
 pushFromFSp 0
 fetchValue 4
 pushImm 204
 pushImmf 8
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
L3250:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L3262
 halt 
 jmp L3250
L3262:
 ret 
L3263:
 popToSp 4
 popToSp 8
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 8
 pushImmf 8
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
L3280:
 pushFromFSp 0
 pushFromFSp 4
 syscall 1, 151 ; trap_obj_motion_check_trigger (2 in, 1 out)
 jz L3292
 jmp L3295
L3290:
 jmp L3292
L3292:
 halt 
 jmp L3280
L3295:
 ret 
L3296: ;___label for action atk_revenge_combo
 popToSp 0
 pushFromFSp 0
 pushImm 16
 add 
 pushImm 0
 memcpy 0
 pushFromFSp 0
 pushImm 203
 pushImm 3
 gosub 4, L3263
 pushFromFSp 0
 pushImm 202
 pushImm 2
 gosub 4, L3263
 pushFromFSp 0
 fetchValue 4
 pushImm 204
 pushImmf 8
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
L3340:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L3352
 halt 
 jmp L3340
L3352:
 ret 
L3353: ;___label for action mode_changer
 popToSp 0
 pushImmf 0.6
 pushFromFSp 0
 gosub 4, L3389
 subf 
 infzf 
 jz L3378
 pushFromFSp 0
 pushImm 24
 add 
 pushImm 0
 memcpy 0
 jmp L3388
L3378:
 pushFromFSp 0
 pushImm 24
 add 
 pushImm 1
 memcpy 0
L3388:
 ret 
L3389:
 popToSp 0
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 230 ; trap_sheet_hp_rate (2 in, 1 out)
 ret 
L3401: ;___label for action btl_attack
 popToSp 0
 pushFromFSp 0
 pushFromPAi L4265 ; ___ai 'mode_changer' (L4265)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushImm 1
 pushFromFSp 0
 fetchValue 24
 sub 
 eqz 
 jz L3440
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4483 ; ___ai 'atk_combo' (L4483)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3493
L3440:
 pushFromFSp 0
 gosub 4, L3494
 popToSp 4
 pushFromFSp 4
 pushImmf 0.5
 subf 
 infzf 
 jz L3475
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4291 ; ___ai 'atk_cut_down' (L4291)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3493
L3475:
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4298 ; ___ai 'atk_cut_slide' (L4298)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
L3493:
 ret 
L3494:
 popToSp 0
 pushImmf 1
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 popToSp 4
 pushFromFSp 4
 ret 
L3506: ;___label for action btl_short
 popToSp 0
 pushFromFSp 0
 pushFromPAi L4265 ; ___ai 'mode_changer' (L4265)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushImm 1
 pushFromFSp 0
 fetchValue 24
 sub 
 eqz 
 jz L3545
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4483 ; ___ai 'atk_combo' (L4483)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3580
L3545:
 pushFromFSp 0
 gosub 4, L3494
 popToSp 4
 pushFromFSp 4
 pushImmf 0.5
 subf 
 infzf 
 jz L3574
 pushFromFSp 0
 pushFromPAi L4305 ; ___ai 'atk_thrust' (L4305)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3580
L3574:
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
L3580:
 ret 
L3581: ;___label for action btl_long
 popToSp 0
 pushFromFSp 0
 pushFromPAi L4265 ; ___ai 'mode_changer' (L4265)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 ret 
L3596: ;___label for action mode_battle
 popToSp 0
 pushFromFSp 0
 gosub 4, L3656
 pushFromFSp 0
 pushImm 0
 gosub 4, L2209
 pushFromFSp 0
 gosub 4, L2224
 pushFromFSp 0
 fetchValue 48
 subf 
 infzf 
 jz L3629
 pushFromFSp 0
 pushFromPAi L4346 ; ___ai 'btl_attack' (L4346)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L3655
L3629:
 pushFromFSp 0
 gosub 4, L2224
 pushFromFSp 0
 fetchValue 52
 subf 
 infzf 
 jz L3649
 pushFromFSp 0
 pushFromPAi L4355 ; ___ai 'btl_short' (L4355)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L3655
L3649:
 pushFromFSp 0
 pushFromPAi L4365 ; ___ai 'btl_long' (L4365)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
L3655:
 ret 

D3666:
L3666: ;___label for action rvg_short
 popToSp 0
 pushFromFSp 0
 gosub 4, L3815
 pushFromFSp 0
 pushFromPAi L4265 ; ___ai 'mode_changer' (L4265)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushImm 1
 pushFromFSp 0
 fetchValue 24
 sub 
 eqz 
 dup 
 jnz L3700
 pushFromFSp 0
 fetchValue 16
 pushImm 2
 sub 
 msbi 
 neqzv 
L3700:
 jz L3747
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 gosub 4, L3494
 pushImmf 0.3
 subf 
 supzf 
 jz L3727
 pushFromFSp 0
 pushFromPAi L4320 ; ___ai 'atk_revenge_combo' (L4320)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3739
L3727:
 pushFromFSp 0
 pushFromPAi L4334 ; ___ai 'atk_spin' (L4334)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4483 ; ___ai 'atk_combo' (L4483)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
L3739:
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3814
L3747:
 pushFromFSp 0
 pushImm 16
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSp 0
 gosub 4, L3494
 popToSp 4
 pushFromFSp 4
 pushImmf 0.5
 subf 
 infzf 
 jz L3796
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4291 ; ___ai 'atk_cut_down' (L4291)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3814
L3796:
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4298 ; ___ai 'atk_cut_slide' (L4298)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
L3814:
 ret 
L3815:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 54 ; method_obj_reset_collision (2 in, 0 out)
 ret 
L3825: ;___label for action rvg_long
 popToSp 0
 pushFromFSp 0
 gosub 4, L3815
 pushFromFSp 0
 pushFromPAi L4265 ; ___ai 'mode_changer' (L4265)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushImm 1
 pushFromFSp 0
 fetchValue 24
 sub 
 eqz 
 jz L3868
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4483 ; ___ai 'atk_combo' (L4483)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3950
L3868:
 pushFromFSp 0
 gosub 4, L3494
 popToSp 4
 pushFromFSp 4
 pushImmf 0.3
 subf 
 infzf 
 jz L3903
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4291 ; ___ai 'atk_cut_down' (L4291)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3950
L3903:
 pushFromFSp 4
 pushImmf 0.6
 subf 
 infzf 
 jz L3932
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4298 ; ___ai 'atk_cut_slide' (L4298)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L3950
L3932:
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4305 ; ___ai 'atk_thrust' (L4305)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
L3950:
 ret 
L3951: ;___label for action revenge
 popToSp 0
 pushFromFSp 0
 pushFromPAi L4265 ; ___ai 'mode_changer' (L4265)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 pushFromFSp 0
 gosub 4, L3815
 pushImm 1
 pushFromFSp 0
 fetchValue 24
 sub 
 eqz 
 dup 
 jnz L3985
 pushFromFSp 0
 fetchValue 16
 pushImm 2
 sub 
 msbi 
 neqzv 
L3985:
 jz L4026
 pushFromFSp 0
 pushFromPAi L4272 ; ___ai 'move_forward' (L4272)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 gosub 4, L3494
 pushImmf 0.3
 subf 
 supzf 
 jz L4012
 pushFromFSp 0
 pushFromPAi L4320 ; ___ai 'atk_revenge_combo' (L4320)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L4018
L4012:
 pushFromFSp 0
 pushFromPAi L4334 ; ___ai 'atk_spin' (L4334)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
L4018:
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L4104
L4026:
 pushFromFSp 0
 pushImm 16
 add 
 dup 
 fetchValue 0
 pushImm 1
 add 
 memcpy 0
 pushFromFSp 0
 gosub 4, L3494
 popToSp 4
 pushFromFSp 4
 pushImmf 0.33
 subf 
 infzf 
 jz L4069
 pushFromFSp 0
 pushFromPAi L4291 ; ___ai 'atk_cut_down' (L4291)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L4104
L4069:
 pushFromFSp 4
 pushImmf 0.66
 subf 
 infzf 
 jz L4092
 pushFromFSp 0
 pushFromPAi L4298 ; ___ai 'atk_cut_slide' (L4298)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 jmp L4104
L4092:
 pushFromFSp 0
 pushFromPAi L4305 ; ___ai 'atk_thrust' (L4305)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L4282 ; ___ai 'idle_short' (L4282)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
L4104:
 ret 


L4265:
D4265:
TXT4265:
 db 'mode_changer',0,0
L4272:
TXT4272:
 db 'move_forward',0,0
L4279:
TXT4279:
 db 'leave',0
L4282:
TXT4282:
 db 'idle_short',0,0
L4288:
TXT4288:
 db 'dead',0,0
L4291:
TXT4291:
 db 'atk_cut_down',0,0
L4298:
TXT4298:
 db 'atk_cut_slide',0
L4305:
TXT4305:
 db 'atk_thrust',0,0
TXT4311:
 db 'jump start',0,0
L4317:
TXT4317:
 db 'idle',0,0
L4320:
TXT4320:
 db 'atk_revenge_combo',0
TXT4329:
 db 'jump end',0,0
L4334:
TXT4334:
 db 'atk_spin',0,0
L4339:
TXT4339:
 db 'mode_revenge',0,0
L4346:
TXT4346:
 db 'btl_attack',0,0
L4352:
TXT4352:
 db 'event',0
L4355:
TXT4355:
 db 'btl_short',0
L4360:
TXT4360:
 db 'footwork',0,0
L4365:
TXT4365:
 db 'btl_long',0,0
L4370:
TXT4370:
 db 'mode_battle_boss',0,0
L4379:
TXT4379:
 db 'mode_revenge_boss',0
L4388:
TXT4388:
 db 'rvg_short',0
L4393:
TXT4393:
 db 'idle_long',0
L4398:
TXT4398:
 db 'rvg_long',0,0
L4403:
TXT4403:
 db 'revenge',0
L4407:
TXT4407:
 db 'mode_battle',0
L4413:
TXT4413:
 db 'idle_time',0
L4418:
TXT4418:
 db 'freeze',0,0
TXT4422:
L4422:
 db 'btl_normal',0,0
TXT4428:
L4428:
 db 'btl_hard',0,0
L4433:
TXT4433:
 db 'appear',0,0
TXT4437:
L4437:
 db 'btl_super_hard',0,0
TXT4445:
L4445:
 db 'rvg_normal',0,0
TXT4451:
L4451:
 db 'rvg_hard',0,0
TXT4456:
L4456:
 db 'rvg_super_hard',0,0
TXT4464:
 db 'rst_normal',0,0
TXT4470:
 db 'rst_hard',0,0
TXT4475:
 db 'rst_super_hard',0,0
L4483:
TXT4483:
 db 'atk_combo',0

 section .bss
W0:
 resb 112
W112:
 resb 4112
