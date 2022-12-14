---
WorkSize: 4272
StackSize: 512
TempSize: 512
Triggers:
- Key: 6
  Addr: TR6
- Key: 1
  Addr: TR1
- Key: 0
  Addr: TR0
Name: m_ex870

void entry_6 () {
    TR6:
    popToSp 0
    pushFromPWp W0
    pushFromFSp 0
    gosub 4, L31
    ret 
    L31:
    popToSp 4
    popToSp 0
    ret 
}

void entry_1() {
    // 129 261 80
    TR1:
    pushFromPWp W0
    gosub 4, L41
    ret 
    L41:
    popToSp 0
    pushFromFSp 0
    pushFromPAi L3507 ; ___ai appear (L3507)
    syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
    pushFromFSp 0
    gosub 4, L86
    pushFromFSp 0
    gosub 4, L129
    pushFromFSp 0
    syscall 1, 133 ; trap_obj_hide (1 in, 0 out)
    L61:
    pushFromFSp 0
    gosub 4, L261
    pushFromFSp 0
    syscall 1, 10 ; trap_obj_is_act_exec (1 in, 1 out)
    eqz 
    jz L80
    pushFromFSp 0
    pushFromPAi L3511 ; ___ai mode_battle (L3511)
    syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
    jmp L80
    L80:
    halt 
    jmp L61
    L86:
    popToSp 0
    pushFromPSpVal 128
    gosub 4, L121
    pushFromPSpVal 132
    gosub 4, L121
    pushFromPSpVal 136
    gosub 4, L121
    pushFromPSpVal 140
    gosub 4, L121
    pushFromPSpVal 144
    gosub 4, L121
    pushFromPSpVal 148
    gosub 4, L121
    pushFromPSpVal 152
    gosub 4, L121
    pushFromPSpVal 156
    gosub 4, L121
    ret 
    L121:
    popToSp 0
    pushImm 0
    popToSpVal 0
    ret 
    L129:
    popToSp 0
    pushFromPSpVal 128
    pushFromFSp 0
    pushImm 10
    pushImm 0
    gosub 4, L228
    pushFromPSpVal 132
    pushFromFSp 0
    pushImm 11
    pushImm 0
    gosub 4, L228
    pushFromPSpVal 136
    pushFromFSp 0
    pushImm 12
    pushImm 0
    gosub 4, L228
    pushFromPSpVal 140
    pushFromFSp 0
    pushImm 13
    pushImm 0
    gosub 4, L228
    pushFromPSpVal 144
    pushFromFSp 0
    pushImm 14
    pushImm 0
    gosub 4, L228
    pushFromPSpVal 148
    pushFromFSp 0
    pushImm 15
    pushImm 0
    gosub 4, L228
    pushFromPSpVal 152
    pushFromFSp 0
    pushImm 16
    pushImm 0
    gosub 4, L228
    pushFromPSpVal 156
    pushFromFSp 0
    pushImm 17
    pushImm 0
    gosub 4, L228
    ret 
    L261:
    popToSp 0
    pushFromPSpVal 108
    fetchValue 4
    syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
    eqz 
    jz L280
    pushFromFSp 0
    pushFromPAi L3594 ; ___ai leave (L3594)
    syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
    jmp L280
    L280:
    ret 
    L228:
    popToSp 4
    popToSp 8
    popToSp 12
    popToSp 0
    pushFromFSpVal 0
    pushImm 0
    sub 
    eqz 
    jz L260
    pushFromFSp 12
    pushFromFSp 8
    pushImm 0
    pushFromFSp 4
    syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
    popToSpVal 0
    jmp L260
    L260:
    ret
}


void entry_0() {
    // gotta grab 1052 1139 3336 3349
    TR0:
    popToSp 0
    pushFromPWp W0
    pushFromFSp 0
    gosub 4, L294
    ret 
    L294:
    popToSp 4
    popToSp 0
    pushFromFSp 0
    pushFromFSp 4
    gosub 4, L1052
    pushFromFSp 0
    pushFromPWp W160
    gosub 4, L1139
    syscall(trap_act_table_add(act_table, 'appear', 100, L1148))
    syscall(trap_act_table_add(act_table, 'dead', 196908, L1422))
    syscall(trap_act_table_add(act_table, 'freeze', 100, L1516))
    syscall(trap_act_table_add(act_table, 'event', 196908, L1533, callbacks=[L1538]))
    syscall(trap_act_table_add(act_table, 'idle_time', 100, L1553))
    syscall(trap_act_table_add(act_table, 'footwork', 100, L1739))
    syscall(trap_act_table_add(act_table, 'revenge', 100, L1883))

    syscall(trap_act_table_add(act_table, 'mode_battle_boss', 100, L1991))
    syscall(trap_act_table_add(act_table, 'mode_revenge_boss', 100, L2057))
    syscall(trap_act_table_add(act_table, 'revenge', 65836, L2123))
    syscall(trap_act_table_add(act_table, 'idle', 100, L2182))
    syscall(trap_act_table_add(act_table, 'leave', 196908, L2345))
    syscall(trap_act_table_add(act_table, 'atk_shield', 200, L2560, callbacks=[L2714, L2758]))
    syscall(trap_act_table_add(act_table, 'atk_shot', 200, L2773, callbacks=[L2938, L2953]))

    syscall(trap_act_table_add(act_table, 'atk_blade', 200, L2968, callbacks=[L3134, L3142]))
    syscall(trap_act_table_add(act_table, 'funnel_blade', 100, L3150, callbacks=[L3153]))
    syscall(trap_act_table_add(act_table, 'funnel_shield', 100, L3275, callbacks=[L3278]))
    syscall(trap_act_table_add(act_table, 'funnel_shot', 100, L3301, callbacks=[L3304]))
    syscall(trap_act_table_add(act_table, 'mode_battle', 100, L3327))

    pushFromFSp 0
    pushFromPWp W160
    syscall 1, 7 ; trap_obj_set_act_table (2 in, 0 out)
    pushFromPSpVal 108
    pushImm 315
    gosub 4, L3336
    pushFromPSpVal 108
    pushFromFSp 0
    syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
    memcpyToSp 16, 16
    pushFromPSp 16
    syscall 1, 148 ; trap_obj_set_pos (2 in, 0 out)
    pushFromPSpVal 108
    pushFromFSp 0
    syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
    memcpyToSp 16, 16
    pushFromPSp 16
    syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
    pushImm 0
    popToSpVal 124
    pushFromFSp 0
    pushImmf 10
    pushImmf 0
    pushImmf 0.95
    gosub 4, L3349
    ret
}


D83:
L83:
 gosub 4, L281
 ret 
D281:
L281:
 halt 
 jmp L281
L284:
 ret 

L1052:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L1087
 pushImm -1
 popToSpVal 28
 pushImmf 30
 popToSpVal 32
 pushFromPSpVal 72
 gosub 4, L1096
 pushImmf 2000
 popToSpVal 56
 pushImmf 1000
 popToSpVal 60
 ret 
L1087:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 popToSpVal 4
 ret 
L1096:
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
L1139:
 popToSp 4
 popToSp 0
 pushFromFSp 4
 syscall 1, 5 ; trap_act_table_init (1 in, 0 out)
 ret 
D1148:
L1148: ;___label for action pushFromPAi L3507 ; ___ai appear
 popToSp 0
 pushFromFSp 0
 syscall 1, 110 ; trap_obj_get_appear_way (1 in, 1 out)
 dup 
 pushImm 2
 sub 
 jz L1170
 dup 
 pushImm -1
 sub 
 jz L1170
 jmp L1176
L1170:
 pushFromFSp 0
 gosub 4, L1182
 jmp L1180
L1176:
 pushFromFSp 0
 gosub 4, L1345
L1180:
 drop 
 ret 
L1182:
 popToSp 0
 gosub 12, L1333
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
 jnz L1253
 pushFromFSp 0
 syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
 eqz 
 neqzv 
L1253:
 jz L1262
 pushImm 0
 popToSp 32
 jmp L1262
L1262:
 pushFromFSp 0
 fetchValue 4
 pushFromFSpVal 32
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
L1270:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L1321
 gosub 12, L1333
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
 jmp L1270
L1321:
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 32
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 ret 
L1333:
 pushFromPSp 0
 pushImm 4
 add 
 syscall 1, 3 ; trap_sysobj_player (0 in, 1 out)
 memcpy 0
 pushFromPSp 0
 ret 
L1345:
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
 gosub 4, L1373
 ret 
L1373:
 popToSp 0
 gosub 4, L1392
L1377:
 syscall 1, 301 ; trap_tutorial_is_open (0 in, 1 out)
 jz L1384
 halt 
 jmp L1377
L1384:
 pushImmf 30
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 gosub 4, L1400
 ret 
L1392:
 syscall 1, 34 ; trap_event_is_exec (0 in, 1 out)
 jz L1399
 halt 
 jmp L1392
L1399:
 ret 
L1400:
 popToSp 0
L1402:
 pushFromFSp 0
 pushImmf 0
 subf 
 supzf 
 jz L1421
 pushFromFSp 0
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 0
 halt 
 jmp L1402
L1421:
 ret 
L1422: ;___label for action pushFromPAi L3597 ; ___ai dead
 popToSp 0
 pushFromFSp 0
 gosub 4, L1429
 ret 
L1429:
 popToSp 0
 pushFromFSpVal 28
 pushImm 0
 sub 
 msbi 
 jz L1448
 pushFromFSp 0
 pushFromFSpVal 28
 syscall 1, 92 ; trap_obj_scatter_prize (2 in, 0 out)
 jmp L1448
L1448:
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
 gosub 4, L1400
 pushFromFSp 0
 fetchValue 4
 pushFromFSpVal 32
 pushImmf 0.5
 mulf 
 syscall 1, 19 ; trap_sysobj_fadeout (2 in, 0 out)
 pushFromFSpVal 32
 pushImmf 0.5
 mulf 
 gosub 4, L1400
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 gosub 4, L281
 ret 
L1516: ;___label for action pushFromPAi L3536 ; ___ai freeze
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 gosub 4, L281
 ret 
L1533: ;___label for action pushFromPAi L3409 ; ___ai event
 popToSp 0
 gosub 4, L281
 ret 
L1538: ;___callback for action pushFromPAi L3409 ; ___ai event
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 ret 
L1553: ;___label for action pushFromPAi L3415 ; ___ai idle_time
 popToSp 0
 pushImmf 15
 pushImmf 45
 syscall 0, 18 ; trap_random_range (2 in, 1 out)
 popToSp 4
 pushFromFSp 0
 gosub 4, L1609
 pushFromFSp 0
 gosub 4, L1638
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushFromFSp 0
 pushImm 0
 gosub 4, L1677
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
L1589:
 pushFromFSp 4
 pushImmf 0
 subf 
 supzf 
 jz L1608
 pushFromFSp 4
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 popToSp 4
 halt 
 jmp L1589
L1608:
 ret 
L1609:
 popToSp 0
L1611:
 pushFromFSp 0
 syscall 1, 124 ; trap_obj_is_entry_fly (1 in, 1 out)
 eqz 
 dup 
 jz L1624
 pushFromFSp 0
 syscall 1, 60 ; trap_obj_is_air (1 in, 1 out)
 eqzv 
L1624:
 dup 
 jnz L1632
 pushFromFSp 0
 syscall 2, 5 ; trap_enemy_is_no_control (1 in, 1 out)
 neqzv 
L1632:
 jz L1637
 halt 
 jmp L1611
L1637:
 ret 
L1638:
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
L1677:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 fetchValue 36
 popToSp 8
 pushFromFSp 4
 dup 
 pushImm 0
 sub 
 jz L1698
 jmp L1735
L1698:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 2
 sub 
 neqz 
 dup 
 jz L1724
 pushFromFSp 0
 fetchValue 4
 syscall 1, 15 ; trap_sysobj_motion_id (1 in, 1 out)
 pushImm 1
 sub 
 neqz 
 eqzv 
L1724:
 jz L1733
 pushImmf 0
 popToSp 8
 jmp L1733
L1733:
 jmp L1735
L1735:
 drop 
 pushFromFSp 8
 ret 
L1739: ;___label for action pushFromPAi L3420 ; ___ai footwork
 popToSp 0
 pushFromFSp 0
 pushImm 47
 pushImm 0
 pushImm -1
 gosub 4, L1755
 ret 
L1755:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 0
 gosub 8, L1609
 pushFromFSp 8
 pushImm 3
 sub 
 neqz 
 jz L1782
 pushFromFSp 0
 gosub 8, L1638
 jmp L1782
L1782:
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 12
 pushFromFSp 0
 pushFromFSp 12
 gosub 8, L1677
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
L1796:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L1829
 halt 
 pushFromFSp 0
 pushFromFSp 12
 gosub 8, L1852
 jz L1818
 jmp L1829
L1816:
 jmp L1818
L1818:
 pushFromFSp 0
 syscall 2, 5 ; trap_enemy_is_no_control (1 in, 1 out)
 jz L1827
 halt 
 jmp L1818
L1827:
 jmp L1796
L1829:
 pushFromFSp 4
 pushImm 0
 sub 
 msbi 
 jz L1851
 pushFromFSp 0
 fetchValue 4
 pushFromFSp 4
 pushImmf 0
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 jmp L1851
L1851:
 ret 
L1852:
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
 jz L1880
 pushImm 1
 popToSp 8
 jmp L1880
L1880:
 pushFromFSp 8
 ret 
L1883: ;___label for action pushFromPAi L3432 ; ___ai mode_revenge
 popToSp 0
 pushFromFSp 0
 pushImm 1
 gosub 4, L1925
 pushFromFSp 0
 gosub 4, L1940
 pushFromFSp 0
 fetchValue 52
 subf 
 infzf 
 jz L1912
 pushFromFSp 0
 pushFromPAi L3497 ; ___ai rvg_short (L3497)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L1918
L1912:
 pushFromFSp 0
 pushFromPAi L3502 ; ___ai rvg_long (L3502)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
L1918:
 pushFromFSp 0
 pushFromPAi L3511 ; ___ai mode_battle (L3511)
 syscall 1, 9 ; trap_obj_act_push (2 in, 0 out)
 ret 
L1925:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromFSp 0
 pushFromFSp 4
 syscall 1, 121 ; trap_target_search (3 in, 0 out)
 ret 
L1940:
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
L1991: ;___label for action pushFromPAi L3439 ; ___ai mode_battle_boss
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub 4, L1925
 pushFromFSp 0
 fetchValue 24
 dup 
 pushImm 0
 sub 
 jz L2013
 jmp L2021
L2013:
 pushFromFSp 0
 pushFromPAi L3517 ; ___ai btl_normal (L3517)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2055
L2021:
 dup 
 pushImm 1
 sub 
 jz L2030
 jmp L2038
L2030:
 pushFromFSp 0
 pushFromPAi L3523 ; ___ai btl_hard (L3523)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2055
L2038:
 dup 
 pushImm 2
 sub 
 jz L2047
 jmp L2055
L2047:
 pushFromFSp 0
 pushFromPAi L3528 ; ___ai btl_super_hard (L3528)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2055
L2055:
 drop 
 ret 
L2057: ;___label for action pushFromPAi L3448 ; ___ai mode_revenge_boss
 popToSp 0
 pushFromFSp 0
 pushImm 2
 gosub 4, L1925
 pushFromFSp 0
 fetchValue 24
 dup 
 pushImm 0
 sub 
 jz L2079
 jmp L2087
L2079:
 pushFromFSp 0
 pushFromPAi L3540 ; ___ai rvg_normal (L3540)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2121
L2087:
 dup 
 pushImm 1
 sub 
 jz L2096
 jmp L2104
L2096:
 pushFromFSp 0
 pushFromPAi L3546 ; ___ai rvg_hard (L3546)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2121
L2104:
 dup 
 pushImm 2
 sub 
 jz L2113
 jmp L2121
L2113:
 pushFromFSp 0
 pushFromPAi L3551 ; ___ai rvg_super_hard (L3551)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2121
L2121:
 drop 
 ret 
L2123: ;___label for action pushFromPAi L3457 ; ___ai revenge
 popToSp 0
 pushFromFSp 0
 fetchValue 24
 dup 
 pushImm 0
 sub 
 jz L2138
 jmp L2146
L2138:
 pushFromFSp 0
 pushFromPAi L3559 ; ___ai rst_normal (L3559)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2180
L2146:
 dup 
 pushImm 1
 sub 
 jz L2155
 jmp L2163
L2155:
 pushFromFSp 0
 pushFromPAi L3565 ; ___ai rst_hard (L3565)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2180
L2163:
 dup 
 pushImm 2
 sub 
 jz L2172
 jmp L2180
L2172:
 pushFromFSp 0
 pushFromPAi L3576 ; ___ai rst_super_hard (L3576)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L2180
L2180:
 drop 
 ret 
L2182: ;___label for action pushFromPAi L3412 ; ___ai idle
 popToSp 0
L2184:
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 16
 syscall 1, 12 ; trap_sysobj_motion_change (3 in, 0 out)
 pushFromFSp 0
 pushFromPSpVal 108
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 44
 pushImm 0
 pushImm 0
 gosub 12, L2224
 drop 
 halt 
 jmp L2184
L2223:
 ret 
L2224:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 16
 popToSp 0
 pushFromFSp 16
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 32
 pushFromFSp 8
 jz L2271
 pushFromPSp 32
 pushImm 4
 add 
 pushImmf 0
 memcpy 0
 jmp L2271
L2271:
 pushFromPSp 32
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 32
 pushImm 12
 add 
 dup 
 fetchValue 0
 pushImmf 1
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 divf 
 mulf 
 memcpy 0
 pushFromPSp 32
 fetchValue 12
 pushFromFSp 12
 subf 
 supzf 
 jz L2314
 pushFromPSp 32
 pushImm 12
 add 
 pushFromFSp 12
 memcpy 0
 jmp L2314
L2314:
 pushFromFSp 4
 jz L2330
 pushFromFSp 0
 pushFromPSp 32
 pushFromPSp 32
 fetchValue 12
 syscall 1, 89 ; trap_obj_move_request (3 in, 0 out)
 jmp L2340
L2330:
 pushFromFSp 0
 pushFromPSp 32
 pushFromPSp 32
 fetchValue 12
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
L2340:
 pushFromPSp 32
 fetchValue 12
 ret 
L2345: ;___label for action pushFromPAi L3594 ; ___ai leave
 popToSp 0
 pushFromFSp 0
 gosub 4, L2362
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 pushFromFSp 0
 syscall 1, 328 ; trap_obj_dead_mark (1 in, 0 out)
 gosub 4, L281
 ret 
L2362:
 popToSp 0
 pushImmf 8
 popToSp 4
 pushFromPSpVal 128
 pushFromFSp 4
 gosub 4, L2530
 pushFromPSpVal 132
 pushFromFSp 4
 gosub 4, L2530
 pushFromPSpVal 136
 pushFromFSp 4
 gosub 4, L2530
 pushFromPSpVal 140
 pushFromFSp 4
 gosub 4, L2530
 pushFromPSpVal 144
 pushFromFSp 4
 gosub 4, L2530
 pushFromPSpVal 148
 pushFromFSp 4
 gosub 4, L2530
 pushFromPSpVal 152
 pushFromFSp 4
 gosub 4, L2530
 pushFromPSpVal 156
 pushFromFSp 4
 gosub 4, L2530
 pushFromFSp 0
 pushImm 2
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 3
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 4
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 5
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 6
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 7
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 8
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 9
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 ret 
L2530:
 popToSp 4
 popToSp 0
 pushFromFSpVal 0
 pushImm 0
 sub 
 neqz 
 jz L2559
 pushFromFSpVal 0
 pushFromFSp 4
 pushImm 1
 syscall 0, 52 ; trap_effect_fadeout (3 in, 0 out)
 pushImm 0
 popToSpVal 0
 jmp L2559
L2559:
 ret 
L2560: ;___label for action pushFromPAi L3600 ; ___ai atk_shield
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromPSpVal 108
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L2640
 pushFromFSp 0
 gosub 4, L2675
 pushFromFSp 0
 fetchValue 4
 pushImm 201
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
L2588:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L2639
 pushFromFSp 0
 pushImm 1
 syscall 1, 150 ; trap_obj_motion_check_range (2 in, 1 out)
 jz L2636
 pushFromFSp 0
 pushFromPSpVal 108
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 fetchValue 44
 pushImmf 0.5
 mulf 
 pushImm 0
 pushImm 0
 gosub 12, L2224
 drop 
 jmp L2636
L2636:
 halt 
 jmp L2588
L2639:
 ret 
L2640:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L2664
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 160 ; trap_target_set_obj (2 in, 0 out)
 pushFromFSp 4
 syscall 6, 57 ; trap_target_get_group (1 in, 1 out)
 popToSpVal 4
 ret 
L2664:
 popToSp 0
 pushFromPSp 16
 pushFromFSpVal 0
 gosub 12, L1087
 pushFromPSp 16
 ret 
L2675:
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
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 ret 
L2714: ;___callback for action pushFromPAi L3600 ; ___ai atk_shield
 popToSp 0
 pushImm 0
 popToSpVal 124
 pushFromFSp 0
 pushImmf 0.95
 gosub 4, L2729
 ret 
L2729:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImm 32
 add 
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromFSp 0
 pushFromPSp 16
 pushFromFSp 4
 syscall 1, 58 ; trap_obj_fly (3 in, 0 out)
 ret 
L2758: ;___callback for action pushFromPAi L3600 ; ___ai atk_shield
 popToSp 0
 pushImm 1
 popToSpVal 124
 pushFromFSp 0
 pushImmf 0
 gosub 4, L2729
 ret 
L2773: ;___label for action pushFromPAi L3404 ; ___ai atk_shot
 popToSp 0
 pushFromPSp 32
 pushImmf 0
 pushImmf 1
 pushImmf 0
 pushImmf 1
 gosub 16, L2911
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromPSpVal 108
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 16, L2640
 pushFromFSp 0
 fetchValue 4
 pushImm 202
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
L2813:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L2910
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushFromFSp 0
 pushImm 108
 add 
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromFSp 0
 pushFromPSp 16
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 150 ; trap_obj_motion_check_range (2 in, 1 out)
 jz L2907
 pushFromFSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 pushImmf 30
 pushImm 0
 pushImm 0
 gosub 20, L2224
 drop 
 pushFromFSp 0
 pushFromPSp 32
 pushImmf 10
 syscall 1, 89 ; trap_obj_move_request (3 in, 0 out)
 jmp L2907
L2907:
 halt 
 jmp L2813
L2910:
 ret 
L2911:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 16
 popToSp 0
 pushFromFSp 16
 popToSpVal 0
 pushFromFSp 12
 popToSpVal 4
 pushFromFSp 8
 popToSpVal 8
 pushFromFSp 4
 popToSpVal 12
 ret 
D2938:
L2938: ;___callback for action pushFromPAi L3404 ; ___ai atk_shot
 popToSp 0
 pushImm 0
 popToSpVal 124
 pushFromFSp 0
 pushImmf 0.95
 gosub 4, L2729
 ret 
L2953: ;___callback for action pushFromPAi L3404 ; ___ai atk_shot
 popToSp 0
 pushImm 1
 popToSpVal 124
 pushFromFSp 0
 pushImmf 0
 gosub 4, L2729
 ret 
L2968: ;___label for action pushFromPAi L3589 ; ___ai atk_blade
 popToSp 0
 pushFromPSp 32
 pushImmf 0
 pushImmf 1
 pushImmf 0
 pushImmf 1
 gosub 16, L2911
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 pushFromPSpVal 108
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 16, L2640
 pushFromFSp 0
 fetchValue 4
 pushImm 203
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
L3008:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 14 ; trap_sysobj_motion_is_end (1 in, 1 out)
 eqz 
 jz L3103
 pushFromFSp 0
 pushImm 1
 syscall 1, 150 ; trap_obj_motion_check_range (2 in, 1 out)
 jz L3100
 pushFromFSp 0
 gosub 16, L3104
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 0, 7 ; trap_vector_normalize (1 in, 1 out)
 drop 
 pushFromPSp 16
 fetchValue 12
 pushImmf 400
 subf 
 infzf 
 jz L3076
 pushImmf 10
 popToSp 48
 pushFromPSp 16
 pushImmf 1.047198
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 64
 pushFromPSp 64
 memcpyToSp 16, 16
 jmp L3081
L3076:
 pushImmf 20
 popToSp 48
L3081:
 pushFromFSp 0
 pushFromPSp 16
 pushFromFSp 48
 syscall 1, 111 ; trap_obj_set_movement (3 in, 0 out)
 pushFromFSp 0
 pushFromPSp 32
 pushImmf 10
 syscall 1, 89 ; trap_obj_move_request (3 in, 0 out)
 jmp L3100
L3100:
 halt 
 jmp L3008
L3103:
 ret 
L3104:
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 ret 
L3134: ;___callback for action pushFromPAi L3589 ; ___ai atk_blade
 popToSp 0
 pushImm 0
 popToSpVal 124
 ret 
L3142: ;___callback for action pushFromPAi L3589 ; ___ai atk_blade
 popToSp 0
 pushImm 1
 popToSpVal 124
 ret 
L3150: ;___label for action pushFromPAi L3461 ; ___ai funnel_blade
 popToSp 0
 ret 
L3153: ;___callback for action pushFromPAi L3461 ; ___ai funnel_blade
 popToSp 4
 popToSp 0
 pushFromFSp 0
 gosub 4, L3176
 jz L3175
 gosub 4, L3190
 gosub 4, L3264
 pushFromFSp 0
 pushFromPAi L3589 ; ___ai atk_blade (L3589)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L3175
L3175:
 ret 
L3176:
 popToSp 0
 pushFromFSpVal 124
 eqz 
 dup 
 jz L3189
 gosub 4, L3190
 gosub 4, L3254
 eqzv 
L3189:
 ret 
L3190:
 pushImm 44
 pushImm 12
 syscall 2, 21 ; trap_teamwork_alloc (2 in, 1 out)
 popToSp 0
 pushFromFSp 0
 gosub 4, L3207
 pushFromFSp 0
 ret 
L3207:
 popToSp 0
 pushFromFSpVal 0
 eqz 
 jz L3238
 pushImm 0
 popToSpVal 4
 pushImm 0
 popToSpVal 8
 pushFromPAi L3425 ; ___ai thread start (L3425)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushImm L3239
 pushFromFSp 0
 syscall 2, 20 ; trap_magic_start_thread (2 in, 1 out)
 drop 
 jmp L3238
L3238:
 ret 
L3239:
 popToSp 0
L3241:
 pushFromFSpVal 8
 popToSpVal 4
 pushImm 0
 popToSpVal 8
 halt 
 jmp L3241
L3253:
 ret 
L3254:
 popToSp 0
 pushFromFSpVal 4
 pushImm 0
 sub 
 ipos 
 ret 
L3264:
 popToSp 0
 pushFromFSpVal 4
 pushImm 1
 sub 
 popToSpVal 4
 ret 
L3275: ;___label for action pushFromPAi L3468 ; ___ai funnel_shield
 popToSp 0
 ret 
L3278: ;___callback for action pushFromPAi L3468 ; ___ai funnel_shield
 popToSp 4
 popToSp 0
 pushFromFSp 0
 gosub 4, L3176
 jz L3300
 gosub 4, L3190
 gosub 4, L3264
 pushFromFSp 0
 pushFromPAi L3600 ; ___ai atk_shield (L3600)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L3300
L3300:
 ret 
L3301: ;___label for action pushFromPAi L3481 ; ___ai funnel_shot
 popToSp 0
 ret 
L3304: ;___callback for action pushFromPAi L3481 ; ___ai funnel_shot
 popToSp 4
 popToSp 0
 pushFromFSp 0
 gosub 4, L3176
 jz L3326
 gosub 4, L3190
 gosub 4, L3264
 pushFromFSp 0
 pushFromPAi L3404 ; ___ai atk_shot (L3404)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 jmp L3326
L3326:
 ret 
L3327: ;___label for action pushFromPAi L3511 ; ___ai mode_battle
 popToSp 0
 pushFromFSp 0
 pushFromPAi L3412 ; ___ai idle (L3412)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
 ret 
L3336:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 syscall 1, 0 ; trap_sysobj_appear (1 in, 1 out)
 gosub 4, L1087
 ret 
L3349:
 popToSp 4
 popToSp 8
 popToSp 12
 popToSp 0
 pushFromFSp 4
 popToSp 16
 pushFromPSp 32
 pushImmf 0
 pushImmf 0
 pushImmf 0
 pushImmf 1
 gosub 16, L2911
 pushFromFSp 0
 pushFromPSp 32
 pushFromFSp 16
 syscall 1, 58 ; trap_obj_fly (3 in, 0 out)
 pushFromFSp 0
 pushImm 40
 add 
 pushFromFSp 8
 memcpy 0
 pushFromFSp 0
 pushImm 44
 add 
 pushFromFSp 12
 memcpy 0
 ret 
L3404:
D3404:
TXT3404:
 db 'atk_shot',0,0
L3409:
TXT3409:
 db 'event',0
L3412:
TXT3412:
 db 'idle',0,0
L3415:
TXT3415:
 db 'idle_time',0
L3420:
TXT3420:
 db 'footwork',0,0
TXT3425:
L3425:
 db 'thread start',0,0
L3432:
TXT3432:
 db 'mode_revenge',0,0
L3439:
TXT3439:
 db 'mode_battle_boss',0,0
L3448:
TXT3448:
 db 'mode_revenge_boss',0
L3457:
TXT3457:
 db 'revenge',0
L3461:
TXT3461:
 db 'funnel_blade',0,0
L3468:
TXT3468:
 db 'funnel_shield',0
TXT3475:
 db 'btl_attack',0,0
L3481:
TXT3481:
 db 'funnel_shot',0
TXT3487:
 db 'btl_short',0
TXT3492:
 db 'btl_long',0,0
TXT3497:
L3497:
 db 'rvg_short',0
TXT3502:
L3502:
 db 'rvg_long',0,0
L3507:
TXT3507:
 db 'appear',0,0
L3511:
TXT3511:
 db 'mode_battle',0
TXT3517:
L3517:
 db 'btl_normal',0,0
TXT3523:
L3523:
 db 'btl_hard',0,0
TXT3528:
L3528:
 db 'btl_super_hard',0,0
L3536:
TXT3536:
 db 'freeze',0,0
TXT3540:
L3540:
 db 'rvg_normal',0,0
TXT3546:
L3546:
 db 'rvg_hard',0,0
TXT3551:
L3551:
 db 'rvg_super_hard',0,0
TXT3559:
L3559:
 db 'rst_normal',0,0
TXT3565:
L3565:
 db 'rst_hard',0,0
TXT3570:
 db 'jump start',0,0
TXT3576:
L3576:
 db 'rst_super_hard',0,0
TXT3584:
 db 'jump end',0,0
L3589:
TXT3589:
 db 'atk_blade',0
L3594:
TXT3594:
 db 'leave',0
L3597:
TXT3597:
 db 'dead',0,0
L3600:
TXT3600:
 db 'atk_shield',0,0

 section .bss
W0:
 resb 160
W160:
 resb 4112
