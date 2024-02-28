## trap_obj_set_act_table* (action)

`syscall 1, 7 ; trap_obj_set_act_table (2 in, 0 out)`

Initializes an action table for an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| act_table   | memory   | Variable/stack location to store the act table


Example Usage From obj\B_AL020\b_al.bdscript
```plaintext
L4649:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L6314
 pushFromFSp 0
 pushFromPWp W480
 gosub 4, L6392
 pushFromFSp 0
 pushFromPWp W480
 syscall 1, 7 ; trap_obj_set_act_table (2 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11318 ; ___ai 'appear' (L11318)
 pushImm 100
 pushImm L6432
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11568 ; ___ai 'leave' (L11568)
 pushImm 196908
 pushImm L6684
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11411 ; ___ai 'freeze' (L11411)
 pushImm 100
 pushImm L6744
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11443 ; ___ai 'event' (L11443)
 pushImm 196908
 pushImm L6761
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L6766
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11221 ; ___ai 'idle' (L11221)
 pushImm 100
 pushImm L6781
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11341 ; ___ai 'mode_battle' (L11341)
 pushImm 100
 pushImm L7055
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11583 ; ___ai 'mode_revenge' (L11583)
 pushImm 100
 pushImm L7318
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11456 ; ___ai 'mode_battle_boss' (L11456)
 pushImm 100
 pushImm L7360
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11484 ; ___ai 'mode_revenge_boss' (L11484)
 pushImm 100
 pushImm L7426
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11499 ; ___ai 'revenge' (L11499)
 pushImm 65836
 pushImm L7492
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11597 ; ___ai 'dead' (L11597)
 pushImm 196908
 pushImm L7551
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11516 ; ___ai 'magic_spot_l' (L11516)
 pushImm 100
 pushImm L7685
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L7688
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11534 ; ___ai 'magic_spot_r' (L11534)
 pushImm 100
 pushImm L7716
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L7719
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11262 ; ___ai 'atk_summon_tower' (L11262)
 pushImm 200
 pushImm L7747
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11291 ; ___ai 'atk_magic_fire' (L11291)
 pushImm 200
 pushImm L8056
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11555 ; ___ai 'atk_auto_thunder_starter' (L11555)
 pushImm 200
 pushImm L8085
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L8088
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11571 ; ___ai 'atk_auto_thunder_ender' (L11571)
 pushImm 200
 pushImm L8100
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm L8103
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11403 ; ___ai 'atk_magic_storm' (L11403)
 pushImm 200
 pushImm L8113
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11228 ; ___ai 'atk_spin_blow' (L11228)
 pushImm 200
 pushImm L8142
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11283 ; ___ai 'atk_flash_bind' (L11283)
 pushImm 200
 pushImm L8166
 pushImm L8186
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11310 ; ___ai 'atk_summon_junk' (L11310)
 pushImm 200
 pushImm L8194
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11366 ; ___ai 'atk_black_storm' (L11366)
 pushImm 200
 pushImm L9397
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11211 ; ___ai 'pos' (L11211)
 pushImm 100
 pushImm L10028
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11347 ; ___ai 'body_break' (L11347)
 pushImm 300
 pushImm L10044
 pushImm L10180
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11509 ; ___ai 'body_break_a' (L11509)
 pushImm 300
 pushImm L10187
 pushImm L10209
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11224 ; ___ai 'stun' (L11224)
 pushImm 300
 pushImm L10220
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11215 ; ___ai 'stun_a' (L11215)
 pushImm 300
 pushImm L10245
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11322 ; ___ai 'rc_roll_up' (L11322)
 pushImm 100
 pushImm L10279
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11359 ; ___ai 'rc_spin_burst' (L11359)
 pushImm 100
 pushImm L10325
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11240 ; ___ai 'idle_time' (L11240)
 pushImm 100
 pushImm L10364
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11235 ; ___ai 'footwork' (L11235)
 pushImm 100
 pushImm L10388
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11590 ; ___ai 'first_action' (L11590)
 pushImm 100
 pushImm L10425
 pushImm L10475
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11374 ; ___ai 'btl_normal' (L11374)
 pushImm 100
 pushImm L10483
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11391 ; ___ai 'btl_hard' (L11391)
 pushImm 100
 pushImm L10583
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11417 ; ___ai 'btl_super_hard' (L11417)
 pushImm 100
 pushImm L10861
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11305 ; ___ai 'rvg_short' (L11305)
 pushImm 100
 pushImm L11025
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 pushImm 0
 syscall 1, 6 ; trap_act_table_add (12 in, 0 out)
 pushFromPWp W480
 pushFromPAi L11331 ; ___ai 'rvg_long' (L11331)
 pushImm 100
 pushImm L11034
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
 pushImmf 0
 gosub 4, L11043
 pushFromFSp 0
 pushImm 0
 gosub 4, L11057
 pushFromFSp 0
 pushImmf 1200
 pushImmf 2500
 gosub 4, L11178
 pushFromFSp 0
 pushImm 138
 pushImm 0
 syscall 2, 9 ; trap_btlobj_set_sheet (3 in, 0 out)
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
 pushFromFSp 0
 pushImm 24
 add 
 pushImm 0
 memcpy 0
 pushFromFSp 0
 syscall 1, 97 ; trap_obj_spec (1 in, 1 out)
 pushImm 12
 add 
 pushImmf 0.03927
 memcpy 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 211 ; trap_obj_pattern_enable (2 in, 0 out)
 pushFromPSpVal 116
 gosub 4, L11203
 pushFromPSpVal 120
 gosub 4, L11203
 pushFromFSp 0
 pushImm 2
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 53 ; method_obj_disable_collision (2 in, 0 out)
 pushImm 1
 popToSpVal 124
 pushImm 1
 popToSpVal 244
 pushImm 0
 popToSpVal 272
 pushImm 0
 popToSpVal 276
 pushImmf -1
 popToSpVal 256
 pushImmf -1
 popToSpVal 260
 pushImmf -1
 popToSpVal 264
 pushImmf -1
 popToSpVal 268
 pushImm 0
 popToSpVal 248
 pushImm 0
 popToSpVal 252
 pushImm 0
 popToSpVal 240
 pushFromPSpVal 160
 pushImmf 300
 pushImmf -22455
 pushImmf 15950
 pushImmf 1
 gosub 4, L864
 pushFromPSpVal 176
 pushImmf 300
 pushImmf -22455
 pushImmf 500
 pushImmf 1
 gosub 4, L864
 pushFromPSpVal 192
 pushImmf 0
 pushImmf -24455
 pushImmf 0
 pushImmf 1
 gosub 4, L864
 pushFromPSpVal 208
 pushImmf 0
 pushImmf -24455
 pushImmf -10000
 pushImmf 1
 gosub 4, L864
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 memcpyToSpVal 16, 224
 pushImm 0
 popToSpVal 108
 pushImm 1
 popToSpVal 112
 pushImm 0
 popToSpVal 140
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 pushImm 10
 div 
 pushImm 7
 mul 
 popToSpVal 128
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 229 ; trap_sheet_max_hp (2 in, 1 out)
 pushImm 10
 div 
 pushImm 4
 mul 
 popToSpVal 132
 pushImm 0
 popToSpVal 136
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushFromFSpVal 128
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 pushImmf 0.8
 syscall 1, 250 ; trap_status_set_lockon_ratio (1 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
| obj\B_AL110\b_al.bdscript       | ((B) Volcanic Lord’s lava pool)          
| obj\B_AL120\b_al.bdscript       | ((B) Blizzard Lord’s ice spikes)          
| obj\B_BB100\b_bb.bdscript       | ((B) Thresholder)          
| obj\B_BB110\b_bb.bdscript       | ((B) Dark Thorn)          
| obj\B_BB120\b_bb.bdscript       | ((B) Shadow Stalker)          
| obj\B_BB130\b_bb.bdscript       | ((B) Thresholder’s possessor?)          
| obj\B_CA000\b_ca.bdscript       | ((B) Illuminator)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\B_CA060\b_ca.bdscript       | ((?) Port Royal enemy?)          
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_FRIEND\b_ex.bdscript       | ((A?) Axel)          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
| obj\B_EX110_RTN\rtn_.bdscript       | ((B) Axel (Scene day he freezes) (RTN))          
| obj\B_EX110_SKIRMISH\b_ex.bdscript       | ((B) Axel (boss, freezes when RC is used) (SKIRMISH) (EX))          
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          
| obj\B_EX130\b_ex.bdscript       | ((B) Xaldin)          
| obj\B_EX130_LV99\b_ex.bdscript       | ((B99) Xaldin (Limit Cut))          
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX160\b_ex.bdscript       | ((B) Saïx)          
| obj\B_EX160_LV99\b_ex.bdscript       | ((B99) Saïx (Limit Cut))          
| obj\B_EX170\b_ex.bdscript       | ((B) Xemnas)          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX170_LV99\b_ex.bdscript       | ((B99) Xemnas (Limit Cut Memory’s Contortion))          
| obj\B_EX170_RTN\rtn_.bdscript       | ((B) Xehanort (Scene looking at Kingdom Hearts) (RTN))          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\B_EX210_EH\b_ex.bdscript       | ((M) Luxord’s card (time?) (EX))          
| obj\B_EX220\b_ex.bdscript       | ((F) Saix’s claymore (Usable))          
| obj\B_EX220_LV99\b_ex.bdscript       | ((F) Saix’s claymore limit cut (Usable))          
| obj\B_EX240\b_ex.bdscript       | ((?) Xemnas’s dragon (Anchored))          
| obj\B_EX250\b_ex.bdscript       | ((?) Xemna’s dragon’s arms (Anchored))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX270_SIDECAR\b_ex.bdscript       | ((F) Xemnas’s dragon sidecar)          
| obj\B_EX280\b_ex.bdscript       | ((F) Xemnas armor - Saïx’s claymore)          
| obj\B_EX290\b_ex.bdscript       | ((F) Xemnas armor - Xigbar’s arrowgun)          
| obj\B_EX300\b_ex.bdscript       | ((?) Xemnas armor - ???)          
| obj\B_EX310\b_ex.bdscript       | ((F) Xemnas armor - Xaldin’s spears)          
| obj\B_EX320\b_ex.bdscript       | ((F) Xemnas armor - Axel’s chakrams)          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX400\b_ex.bdscript       | ((B) Larxene (Absent Silhouette))          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_EX430\b_ex.bdscript       | ((?) Related to Lingering Will?)          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_NPC_QSATO\npc_.bdscript       | ((B) Hades (NPC_QSATO) (HE))          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_HE030_RTN\rtn_.bdscript       | ((RTN) Hades (HE))          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00_RTN\rtn_.bdscript       | ((RTN) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_10_RTN\rtn_.bdscript       | ((RTN) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\B_LK100_20_RTN\rtn_.bdscript       | ((RTN) Ed)          
| obj\B_LK110\b_lk.bdscript       | ((B) Scar)          
| obj\B_LK110_PHANTOM\b_lk.bdscript       | ((M) Scar Ghost)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU100_RTN\rtn_.bdscript       | ((RTN) Shan-Yu)          
| obj\B_MU110\b_mu.bdscript       | ((B) Hayabusa (Shan-Yu’s Falcon))          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_NM110_HEAD\b_nm.bdscript       | ((B) The Experiment (Head))          
| obj\B_NM110_L_ARM\b_nm.bdscript       | ((B) The Experiment (Left Hand))          
| obj\B_NM110_R_ARM\b_nm.bdscript       | ((B) The Experiment (Right Hand))          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\B_TR020\b_tr.bdscript       | ((B) MCP)          
| obj\EH_G_EX120\g_ex.bdscript       | ((EH) Xemnas’s dragon missile (G_EX))          
| obj\EH_G_EX250\g_ex.bdscript       | ((EH) Bomb Bell B)          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_AL000\f_al.bdscript       | ((F) Water spitting statue (AL))          
| obj\F_AL030\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_AL050\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_AL050_BRIDGE\f_al.bdscript       | ()          
| obj\F_AL050_DUST\f_al.bdscript       | ()          
| obj\F_AL050_L\f_al.bdscript       | ()          
| obj\F_AL050_S\f_al.bdscript       | ()          
| obj\F_AL070_BLIZZARD\f_al.bdscript       | ((F) Blizzard orbs (AL))          
| obj\F_AL070_FIRE\f_al.bdscript       | ((F) Fire orbs (AL))          
| obj\F_AL070_THUNDER\f_al.bdscript       | ((F) Thunder orbs (AL))          
| obj\F_AL080\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_AL090_01\f_al.bdscript       | ((F) Falling pillar 1 (AL))          
| obj\F_AL090_02\f_al.bdscript       | ((F) Falling pillar 2 (AL))          
| obj\F_AL090_03\f_al.bdscript       | ((F) Falling pillar 3 (AL))          
| obj\F_AL100\f_al.bdscript       | ((F) Sandstorm (AL))          
| obj\F_AL110\f_al.bdscript       | ((F) ??? (AL))          
| obj\F_AL140\f_al.bdscript       | ((F) Boxes and rugs (AL))          
| obj\F_AL150\f_al.bdscript       | ((F) Piece of stone wall (AL))          
| obj\F_AL160\f_al.bdscript       | ((F) Building floor (AL))          
| obj\F_AL170\f_al.bdscript       | ((F) Tip of tower (AL))          
| obj\F_BB000\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_BB010\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_BB020\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_BB030\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_BB040\f_bb.bdscript       | ((F) ??? - Invisible Armor? (BB))          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_BB060\f_bb.bdscript       | ((F) Shadow Stalker (Columns) (BB))          
| obj\F_BB070\f_bb.bdscript       | ((F) ??? - Something from Shadow Stalker? (B))          
| obj\F_BB080\f_bb.bdscript       | ((F) Shadow Stalker’s ground trap (BB))          
| obj\F_BB090\f_bb.bdscript       | ((F) ??? (BB))          
| obj\F_BB100\f_bb.bdscript       | ((F) Minigame’s lamp (BB))          
| obj\F_BB110\f_bb.bdscript       | ((F) Minigame’s crank (BB))          
| obj\F_BB120\f_bb.bdscript       | ((F) Minigame’s box (BB))          
| obj\F_BB130\f_bb.bdscript       | ((F) ??? - Minigame related? (BB))          
| obj\F_CA000\f_ca.bdscript       | ((F) Black Pearl (CA))          
| obj\F_CA020\f_ca.bdscript       | ((F) Isla de Muerta’s chest’s lid (CA))          
| obj\F_CA030_DARK\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA030_LIGHT\f_ca.bdscript       | ((F) Port Royal’s crane (CA))          
| obj\F_CA040\f_ca.bdscript       | ((F) Anchor (CA))          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_CA060\f_ca.bdscript       | ((F) ??? (CA))          
| obj\F_CA060_MEDAL\f_ca.bdscript       | ((F) ??? - Attackable floor? (MEDAL) (CA))          
| obj\F_CA690_BTL\f_ca.bdscript       | ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))          
| obj\F_CA710_RTN\rtn_.bdscript       | ((F) Jack Sparrow’s compass (RTN))          
| obj\F_EH000\f_eh.bdscript       | ((F) Crooked Ascension room (EH))          
| obj\F_EH010\f_eh.bdscript       | ((F) Twilight’s View room (EH))          
| obj\F_EH020\f_eh.bdscript       | ((F) Big vertical white line (EH))          
| obj\F_EH030\f_eh.bdscript       | ((F) Crooked Ascension room’s horizontal columns (EH))          
| obj\F_EH040\f_eh.bdscript       | ((F) White and green beam (EH))          
| obj\F_EH050\f_eh.bdscript       | ((F) Floating building 1 (EH))          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\F_EH100\f_eh.bdscript       | ((F) Xemnas’s dragon energy core (EH))          
| obj\F_EH110\f_eh.bdscript       | ((F) Rising building (EH))          
| obj\F_EX210\f_ex.bdscript       | ((F) Vexen’s Absent Silhouette portal (can’t be used))          
| obj\F_EX220\f_ex.bdscript       | ((F) Lexeus’ Absent Silhouette portal (can’t be used))          
| obj\F_EX230\f_ex.bdscript       | ((F) Zexion’s Absent Silhouette portal (can’t be used))          
| obj\F_EX240\f_ex.bdscript       | ((F) Marluxia’s Absent Silhouette portal (can’t be used))          
| obj\F_EX250\f_ex.bdscript       | ((F) Larxene’s Absent Silhouette portal (can’t be used))          
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_HB030\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_HB040\f_hb.bdscript       | ((F) CoR’s orb (red) (HB))          
| obj\F_HB040_BL\f_hb.bdscript       | ((F) CoR’s orb (blue) (HB))          
| obj\F_HB040_WH\f_hb.bdscript       | ((F) CoR’s orb (white) (HB))          
| obj\F_HB040_YE\f_hb.bdscript       | ((F) CoR’s orb (yellow) (HB))          
| obj\F_HB050\f_hb.bdscript       | ((F) CoR’s pushing pillar (HB))          
| obj\F_HB050_23\f_hb.bdscript       | ((F) CoR’s pushing pillar 2 (HB))          
| obj\F_HB060\f_hb.bdscript       | ((F) CoR’s rising pillar (HB))          
| obj\F_HB070\f_hb.bdscript       | ((F) CoR’s droppable spike (HB))          
| obj\F_HB080\f_hb.bdscript       | ((F) CoR’s steam wheel (HB))          
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_HB100\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_HB110\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_HB120\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_HB130\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_HB140\f_hb.bdscript       | ((F) Cavern of Remembrance big pushing block (HB))          
| obj\F_HE000\f_he.bdscript       | ((F) Standing Torch (HE))          
| obj\F_HE010\f_he.bdscript       | ((F) Blue Barrier (HE))          
| obj\F_HE020_A1\f_he.bdscript       | ((F) Rock 1 (grey) (HE))          
| obj\F_HE020_A2\f_he.bdscript       | ((F) Rock 2 (grey) (HE))          
| obj\F_HE020_B1\f_he.bdscript       | ((F) Rock 1 (green) (HE))          
| obj\F_HE020_B2\f_he.bdscript       | ((F) Rock 2 (green) (HE))          
| obj\F_HE020_C1\f_he.bdscript       | ((F) Rock 1 (blue) (HE))          
| obj\F_HE020_C2\f_he.bdscript       | ((F) Rock 2 (blue) (HE))          
| obj\F_HE020_PETE\f_he.bdscript       | ((F) Falling boulder (Pete battle) (HE))          
| obj\F_HE020_PO\f_he.bdscript       | ((F) Falling crystal (PO))          
| obj\F_HE030_L\f_he.bdscript       | ((F) Phil minigame L (HE))          
| obj\F_HE030_L_FREE\f_he.bdscript       | ((F) Phil minigame L (FREE) (HE))          
| obj\F_HE030_S\f_he.bdscript       | ((F) Phil minigame S (HE))          
| obj\F_HE030_S_FREE\f_he.bdscript       | ((F) Phil minigame S (FREE) (HE))          
| obj\F_HE110\f_he.bdscript       | ((F) Mist Sphere (HE))          
| obj\F_MU000\f_mu.bdscript       | ((F) Destructable Rock 1 (Reaction Command) (MU))          
| obj\F_MU010\f_mu.bdscript       | ((F) Destructable Rock 2 (Reaction Command) (MU))          
| obj\F_MU020\f_mu.bdscript       | ((F) Destructable Rock 3 (Reaction Command) (MU))          
| obj\F_MU030\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU040\f_mu.bdscript       | ((F) Bunch of fireworks (MU))          
| obj\F_MU050\f_mu.bdscript       | ((F) Firework (Rocket) (MU))          
| obj\F_MU060\f_mu.bdscript       | ((F) Drive Orb Wagon (MU))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          
| obj\F_MU080\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU090\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU100\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU100_SHANG\f_mu.bdscript       | ((F) ??? (SHANG) (MU))          
| obj\F_MU100_TOWER\f_mu.bdscript       | ((F) ??? (TOWER) (MU))          
| obj\F_NM000\f_nm.bdscript       | ((F) Guillotine blade (NM))          
| obj\F_NM010\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_NM020\f_nm.bdscript       | ((F) Spitting fountain (NM))          
| obj\F_NM030\f_nm.bdscript       | ((F) Swinging gates (NM))          
| obj\F_NM040_00\f_nm.bdscript       | ((F) Statue (horse) (NM))          
| obj\F_NM040_10\f_nm.bdscript       | ((F) Statue (human) (NM))          
| obj\F_NM050\f_nm.bdscript       | ((F) Falling grave (NM))          
| obj\F_NM070\f_nm.bdscript       | ((F) Merry-go-round (NM))          
| obj\F_NM080\f_nm.bdscript       | ((F) Oogie’s present box (NM))          
| obj\F_NM090\f_nm.bdscript       | ((F) Oogie’s punch (NM))          
| obj\F_NM100\f_nm.bdscript       | ((F) Oogie’s present (NM))          
| obj\F_NM110\f_nm.bdscript       | ((F) Oogie’s bag (NM))          
| obj\F_NM120\f_nm.bdscript       | ((F) Oogie’s spikes (NM))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_NM140\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_NM150\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_NM160\f_nm.bdscript       | ((F) Lever (NM))          
| obj\F_NM170_CATCH\f_nm.bdscript       | ((F) Present minigame (CATCH) (NM))          
| obj\F_NM170_L\f_nm.bdscript       | ((F) Present minigame (L) (NM))          
| obj\F_NM170_M\f_nm.bdscript       | ((F) Present minigame (M) (NM))          
| obj\F_NM170_S\f_nm.bdscript       | ((F) Present minigame (S) (NM))          
| obj\F_NM170_XL\f_nm.bdscript       | ((F) Present minigame (XL) (NM))          
| obj\F_PO030\f_po.bdscript       | ((F) ??? (PO))          
| obj\F_PO080\f_po.bdscript       | ((F) Honey pot (PO))          
| obj\F_PO090\f_po.bdscript       | ((PO) Bees (PO))          
| obj\F_PO090_ETC\f_po.bdscript       | ((F) Bees (ETC) (PO))          
| obj\F_PO090_TT\f_po.bdscript       | ((F) Bees (TT) (PO))          
| obj\F_TR020\f_tr.bdscript       | ((F) Energy core’s cube (TR))          
| obj\F_TR020_CORE\f_tr.bdscript       | ()          
| obj\F_TR030\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR050\f_tr.bdscript       | ((F) MCP barrier (TR))          
| obj\F_TR060\f_tr.bdscript       | ((F) MCP wall (TR))          
| obj\F_TR080\tr_w.bdscript       | ((F) Light cycle’s wall (TR))          
| obj\F_TR090\tr_w.bdscript       | ((F) Light cycle’s wall 2 (TR))          
| obj\F_TR100\tr_w.bdscript       | ((F) Light cycle’s wall 3 (single panel) (TR))          
| obj\F_TR110\tr_b.bdscript       | ((F) Light cycle’s columns (5) (TR))          
| obj\F_TR120\tr_b.bdscript       | ((F) Light cycle’s columns (3) (TR))          
| obj\F_TR130\tr_b.bdscript       | ((F) Light cycle’s columns (1) (TR))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_TR170\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TT000\f_tt.bdscript       | ((F) Tram (TT))          
| obj\F_TT010\f_tt.bdscript       | ((F) Skateboard (TT))          
| obj\F_TT010_AL\f_tt.bdscript       | ((F) Skateboard (AL))          
| obj\F_TT010_CA\f_tt.bdscript       | ((F) Skateboard (CA))          
| obj\F_TT010_HE\f_tt.bdscript       | ((F) Skateboard (HE))          
| obj\F_TT010_NM\f_tt.bdscript       | ((F) Skateboard (NM))          
| obj\F_TT010_SORA\f_tt.bdscript       | ((F) Skateboard (SORA) (TT))          
| obj\F_TT010_TR\f_tt.bdscript       | ((F) Skateboard (TR))          
| obj\F_TT010_WI\f_tt.bdscript       | ((F) Skateboard (WI))          
| obj\F_TT020\f_tt.bdscript       | ((F) Juggling ball (TT))          
| obj\F_TT030\f_tt.bdscript       | ((F) Cargo Climb’s cart (TT))          
| obj\F_TT030_ETC\f_tt.bdscript       | ((F) Cargo Climb’s cart (ETC) (TT))          
| obj\F_TT040\f_tt.bdscript       | ((F) Junk (TT))          
| obj\F_TT060\f_tt.bdscript       | ((F) ??? - minigame reaction command? (TT))          
| obj\F_TT070\f_tt.bdscript       | ((F) Skateboard Checkmark (TT))          
| obj\F_TT100\f_tt.bdscript       | ((F) Trashcan (TT))          
| obj\F_TT100_FREE\f_tt.bdscript       | ((F) Trashcan (FREE) (TT))          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\F_TT110_FREE\f_tt.bdscript       | ((F) Dog’s sack (FREE) (TT))          
| obj\F_TT120\f_tt.bdscript       | ((F) Junk 2 (TT))          
| obj\F_TT130\f_tt.bdscript       | ((F) Junk 3 (TT))          
| obj\F_TT140\rtn_.bdscript       | ((F) Dream Sword (TT))          
| obj\F_TT150\rtn_.bdscript       | ((F) Dream Shield (TT))          
| obj\F_TT160\rtn_.bdscript       | ((F) Dream Rod (TT))          
| obj\F_TT170\f_tt.bdscript       | ((F) ??? - flying attack balls - bees? (TT))          
| obj\F_WI000\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? (WI))          
| obj\F_WI010\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))          
| obj\F_WI010_BOSS\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))          
| obj\F_WI020\f_wi.bdscript       | ((F) Burning building (WI))          
| obj\F_WI020_BOSS\f_wi.bdscript       | ((F) Burning building (BOSS) (WI))          
| obj\F_WI020_BTL\f_wi.bdscript       | ()          
| obj\F_WI060\f_wi.bdscript       | ((F) Cannon tower (WI))          
| obj\F_WI060_PETE\f_wi.bdscript       | ((F) Cannon tower (PETE) (WI))          
| obj\F_WI070\f_wi.bdscript       | ((F) Toy box (WI))          
| obj\F_WI080\f_wi.bdscript       | ((F) Box with stuff (WI))          
| obj\F_WI090\f_wi.bdscript       | ((F) Sofa 1 (WI))          
| obj\F_WI100\f_wi.bdscript       | ((F) Chair 1 (WI))          
| obj\F_WI110\f_wi.bdscript       | ((F) Chair 2 (WI))          
| obj\F_WI120\f_wi.bdscript       | ((F) Piano (WI))          
| obj\F_WI130\f_wi.bdscript       | ((F) Wardrobe 1 (WI))          
| obj\F_WI140\f_wi.bdscript       | ((F) Wardrobe 2 (WI))          
| obj\F_WI150\f_wi.bdscript       | ((F) Wardrobe 3 (WI))          
| obj\F_WI160\f_wi.bdscript       | ((F) Ceiling lamp (WI))          
| obj\F_WI170\f_wi.bdscript       | ((F) Fireplace (WI))          
| obj\F_WI180\f_wi.bdscript       | ((F) Chimney (WI))          
| obj\F_WI190\f_wi.bdscript       | ((F) Train toy (WI))          
| obj\F_WI200\f_wi.bdscript       | ((F) Stool (WI))          
| obj\F_WI210\f_wi.bdscript       | ((F) Dog bed (WI))          
| obj\F_WI220\f_wi.bdscript       | ((F) Sofa 2 (WI))          
| obj\F_WI230\f_wi.bdscript       | ((F) Wall deer trophy (WI))          
| obj\F_WI240\f_wi.bdscript       | ((F) Wall lamp (WI))          
| obj\F_WI250\f_wi.bdscript       | ((F) Christmas tree (WI))          
| obj\F_WI260\f_wi.bdscript       | ((F) Drawer (WI))          
| obj\F_WI270\f_wi.bdscript       | ((F) Wardrobe 4 (WI))          
| obj\F_WI280\f_wi.bdscript       | ((F) Wardrobe 5 (WI))          
| obj\F_WI290\f_wi.bdscript       | ((F) Painting (WI))          
| obj\F_WI300\f_wi.bdscript       | ((F) Shelf (WI))          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\F_WI320\f_wi.bdscript       | ((F) Lilliput houses 1 (WI))          
| obj\F_WI330\f_wi.bdscript       | ((F) Lilliput houses 2 (WI))          
| obj\F_WI340\f_wi.bdscript       | ((F) Lilliput houses 3 (WI))          
| obj\F_WI350\f_wi.bdscript       | ((F) Lilliput houses 4 (WI))          
| obj\F_WI360\f_wi.bdscript       | ((F) Building site’s platform (WI))          
| obj\F_WI360_PETE\f_wi.bdscript       | ((F) Building site’s platform (PETE) (WI))          
| obj\F_WI380\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (WI))          
| obj\F_WI380_RTN\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (RTN) (WI))          
| obj\F_WI390\f_wi.bdscript       | ((F) Steamboat’s hook (WI))          
| obj\F_WI390_RTN\f_wi.bdscript       | ((F) Steamboat’s hook (RTN) (WI))          
| obj\F_WI400\f_wi.bdscript       | ((F) Box (Pete throws) (WI))          
| obj\F_WI410\f_wi.bdscript       | ((F) Barrel (Pete throws) (WI))          
| obj\F_WI420\f_wi.bdscript       | ((F) Bowl (Pete throws) (WI))          
| obj\G_EX250_EH\g_ex.bdscript       | ()          
| obj\M_AL020_FIRE\m_al.bdscript       | ((M) Fiery Globe)          
| obj\M_AL020_FIRE2\m_al.bdscript       | ((M) Fiery Globe (2))          
| obj\M_AL020_FIRE_RAW\m_al.bdscript       | ((M) Fiery Globe (RAW))          
| obj\M_AL020_ICEE\m_al.bdscript       | ((M) Icy Cube)          
| obj\M_AL020_ICEE2\m_al.bdscript       | ((M) Icy Cube (2))          
| obj\M_AL020_ICEE_RAW\m_al.bdscript       | ((M) Icy Cube (RAW))          
| obj\M_BB010_AX\m_bb.bdscript       | ((M) Gargoyle Warrior)          
| obj\M_BB010_SWORD\m_bb.bdscript       | ((M) Gargoyle Knight)          
| obj\M_EX010\m_ex.bdscript       | ((M) Soldier)          
| obj\M_EX010_NM\m_ex.bdscript       | ((M) Soldier (NM))          
| obj\M_EX010_TR\m_ex.bdscript       | ((M) Soldier (TR))          
| obj\M_EX010_WI\m_ex.bdscript       | ((M) Soldier (WI))          
| obj\M_EX020\m_ex.bdscript       | ((M) Shadow)          
| obj\M_EX020_NM\m_ex.bdscript       | ((M) Shadow (NM))          
| obj\M_EX020_NM_RAW\m_ex.bdscript       | ((M) Shadow (NM) (RAW))          
| obj\M_EX020_RAW\m_ex.bdscript       | ((M) Shadow (RAW))          
| obj\M_EX020_WI\m_ex.bdscript       | ((M) Shadow (WI))          
| obj\M_EX020_WI_RAW\m_ex.bdscript       | ((M) Shadow (WI) (RAW))          
| obj\M_EX050\m_ex.bdscript       | ((M) Large Body)          
| obj\M_EX050_WI\m_ex.bdscript       | ((M) Large Body (WI))          
| obj\M_EX060\m_ex.bdscript       | ((M) Fat Bandit)          
| obj\M_EX110\m_ex.bdscript       | ((M) Silver Rock)          
| obj\M_EX120\m_ex.bdscript       | ((M) Emerald Blues)          
| obj\M_EX120_HB\m_ex.bdscript       | ((M) Spring Metal)          
| obj\M_EX120_NM\m_ex.bdscript       | ((M) Emerald Blues (NM))          
| obj\M_EX120_TR\m_ex.bdscript       | ((M) Emerald Blues (TR))          
| obj\M_EX130\m_ex.bdscript       | ((M) Crimson Jazz)          
| obj\M_EX130_AL\m_ex.bdscript       | ((M) Crimson Jazz (AL))          
| obj\M_EX200\m_ex.bdscript       | ((M) Wight Knight)          
| obj\M_EX200_NM\m_ex.bdscript       | ((M) Wight Knight (NM))          
| obj\M_EX210\m_ex.bdscript       | ((M) Air Pirate)          
| obj\M_EX210_HB\m_ex.bdscript       | ((M) Aerial Viking)          
| obj\M_EX350_01\m_ex.bdscript       | ((M) Mushroom 1 (EX))          
| obj\M_EX350_02\m_ex.bdscript       | ((M) Mushroom 2 (EX))          
| obj\M_EX350_03\m_ex.bdscript       | ((M) Mushroom 3 (EX))          
| obj\M_EX350_04\m_ex.bdscript       | ((M) Mushroom 4 (EX))          
| obj\M_EX350_05\m_ex.bdscript       | ((M) Mushroom 5 (EX))          
| obj\M_EX350_06\m_ex.bdscript       | ((M) Mushroom 6 (EX))          
| obj\M_EX350_06_SU\m_ex.bdscript       | ((M) Mushroom 6 (SU))          
| obj\M_EX350_07\m_ex.bdscript       | ((M) Mushroom 7 (EX))          
| obj\M_EX350_08\m_ex.bdscript       | ((M) Mushroom 8 (EX))          
| obj\M_EX350_09\m_ex.bdscript       | ((M) Mushroom 9 (EX))          
| obj\M_EX350_10\m_ex.bdscript       | ((M) Mushroom 10 (EX))          
| obj\M_EX350_11\m_ex.bdscript       | ((M) Mushroom 11 (EX))          
| obj\M_EX350_12\m_ex.bdscript       | ((M) Mushroom 12 (EX))          
| obj\M_EX350_13\m_ex.bdscript       | ((M) Mushroom 13 (EX))          
| obj\M_EX420\m_ex.bdscript       | ((M) Neoshadow)          
| obj\M_EX420_NM\m_ex.bdscript       | ((M) Neoshadow (NM))          
| obj\M_EX500\m_ex.bdscript       | ((M) Trick Ghost)          
| obj\M_EX500_HB\m_ex.bdscript       | ((M) Magic Phantom)          
| obj\M_EX500_NM\m_ex.bdscript       | ((M) Trick Ghost (NM))          
| obj\M_EX510\m_ex.bdscript       | ((M) Rabid Dog)          
| obj\M_EX520\m_ex.bdscript       | ((M) Hook Bat)          
| obj\M_EX520_AL\m_ex.bdscript       | ((M) Hook Bat (AL))          
| obj\M_EX520_HB\m_ex.bdscript       | ((M) Beffudler)          
| obj\M_EX530\m_ex.bdscript       | ((M) Bookmaster)          
| obj\M_EX530_HB\m_ex.bdscript       | ((M) Runemaster)          
| obj\M_EX530_TR\m_ex.bdscript       | ((M) Bookmaster (TR))          
| obj\M_EX540\m_ex.bdscript       | ((M) Aeroplane)          
| obj\M_EX540_WI\m_ex.bdscript       | ((M) Aeroplane (WI))          
| obj\M_EX550\m_ex.bdscript       | ((M) Minute Bomb)          
| obj\M_EX550_WI\m_ex.bdscript       | ((M) Minute Bomb (WI))          
| obj\M_EX560\m_ex.bdscript       | ((M) Hammer Frame)          
| obj\M_EX560_HB\m_ex.bdscript       | ((M) Iron Hammer)          
| obj\M_EX560_WI\m_ex.bdscript       | ((M) Hammer Frame (WI))          
| obj\M_EX570\m_ex.bdscript       | ((M) Assault Rider)          
| obj\M_EX580\m_ex.bdscript       | ((M) Nightwalker)          
| obj\M_EX590\m_ex.bdscript       | ((M) Bulky Vendor)          
| obj\M_EX590_NM\m_ex.bdscript       | ((M) Bulky Vendor (NM))          
| obj\M_EX600\m_ex.bdscript       | ((M) Magnum Loader)          
| obj\M_EX600_LC\m_ex.bdscript       | ((M) Magnum Loader (white))          
| obj\M_EX600_LC_ATK\m_ex.bdscript       | ((M) Magnum Loader (blue))          
| obj\M_EX600_LC_CHG\m_ex.bdscript       | ((M) Magnum Loader (yellow))          
| obj\M_EX600_LC_GRD\m_ex.bdscript       | ((M) Magnum Loader (green))          
| obj\M_EX610\m_ex.bdscript       | ((M) Strafer)          
| obj\M_EX610_RAW\m_ex.bdscript       | ((M) Strafer (RAW))          
| obj\M_EX620\m_ex.bdscript       | ((M) Fortuneteller)          
| obj\M_EX620_AL\m_ex.bdscript       | ((M) Fortuneteller (AL))          
| obj\M_EX630\m_ex.bdscript       | ((M) Luna Bandit)          
| obj\M_EX640\m_ex.bdscript       | ((M) Hot Rod)          
| obj\M_EX640_HB\m_ex.bdscript       | ((M) Mad Ride)          
| obj\M_EX640_WI\m_ex.bdscript       | ((M) Hot Rod (WI))          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\M_EX660\m_ex.bdscript       | ((M) Rapid Thruster)          
| obj\M_EX660_AL\m_ex.bdscript       | ((M) Rapid Thruster (AL))          
| obj\M_EX660_RAW\m_ex.bdscript       | ((M) Rapid Thruster (RAW))          
| obj\M_EX660_WI\m_ex.bdscript       | ((M) Rapid Thruster (WI))          
| obj\M_EX660_WI_RAW\m_ex.bdscript       | ()          
| obj\M_EX670\m_ex.bdscript       | ((M) Living Bone)          
| obj\M_EX680\m_ex.bdscript       | ((M) Devastator)          
| obj\M_EX680_HB\m_ex.bdscript       | ((M) Reckless)          
| obj\M_EX690\m_ex.bdscript       | ((M) Lance Soldier)          
| obj\M_EX690_HB\m_ex.bdscript       | ((M) Lance Warrior)          
| obj\M_EX700\m_ex.bdscript       | ((M) Mole Driller)          
| obj\M_EX700_NM\m_ex.bdscript       | ((M) Mole Driller (NM))          
| obj\M_EX710\m_ex.bdscript       | ((M) Morning Star)          
| obj\M_EX720\m_ex.bdscript       | ((M) Shaman)          
| obj\M_EX720_HB\m_ex.bdscript       | ((M) Necromancer)          
| obj\M_EX730\m_ex.bdscript       | ((M) Tornado Step)          
| obj\M_EX740\m_ex.bdscript       | ((M) Crescendo)          
| obj\M_EX750\m_ex.bdscript       | ((M) Creeper Plant)          
| obj\M_EX750_NM\m_ex.bdscript       | ((M) Creeper Plant (NM))          
| obj\M_EX760\m_ex.bdscript       | ((M) Armored Knight)          
| obj\M_EX760_NM\m_ex.bdscript       | ((M) Armored Knight (NM))          
| obj\M_EX760_NM_RAW\m_ex.bdscript       | ()          
| obj\M_EX760_RAW\m_ex.bdscript       | ((M) Armored Knight (RAW) (1000 battle))          
| obj\M_EX770\m_ex.bdscript       | ((M) Surveillance Robot)          
| obj\M_EX770_RAW\m_ex.bdscript       | ((M) Surveillance Robot (RAW) (1000 battle))          
| obj\M_EX770_TR\m_ex.bdscript       | ((M) Surveillance Robot (TR))          
| obj\M_EX770_TR_RAW\m_ex.bdscript       | ()          
| obj\M_EX780\m_ex.bdscript       | ((M) Aerial Knocker)          
| obj\M_EX780_HB\m_ex.bdscript       | ((M) Aeriel Champ)          
| obj\M_EX790\m_ex.bdscript       | ((M) Graveyard)          
| obj\M_EX790_CHRISTMAS\m_ex.bdscript       | ((M) Toy Soldier)          
| obj\M_EX790_CHRISTMAS_NM\m_ex.bdscript       | ((M) Toy Soldier (NM))          
| obj\M_EX790_HALLOWEEN\m_ex.bdscript       | ((M) Graveyard)          
| obj\M_EX790_HALLOWEEN_NM\m_ex.bdscript       | ((M) Graveyard (NM))          
| obj\M_EX800\m_ex.bdscript       | ((M) Bolt Tower)          
| obj\M_EX800_DC\m_ex.bdscript       | ((M) Bolt Tower (DC))          
| obj\M_EX800_MU\m_ex.bdscript       | ((M) Bolt Tower (MU))          
| obj\M_EX800_MU_RAW\m_ex.bdscript       | ((M) Bolt Tower (MU) (RAW))          
| obj\M_EX800_RAW\m_ex.bdscript       | ((M) Bolt Tower (RAW))          
| obj\M_EX850\m_ex.bdscript       | ((M) Berserker weapon (Useable))          
| obj\M_EX870\m_ex.bdscript       | ((M) Sorcerer v2 - Cubes?)          
| obj\M_EX880\m_ex.bdscript       | ((M) Creeper)          
| obj\M_EX880_DANCER\m_ex.bdscript       | ((M) Demyx’s water form)          
| obj\M_EX880_DANCER_EH\m_ex.bdscript       | ((M) Demyx’s water form (EH))          
| obj\M_EX880_DANCER_LV99\m_ex.bdscript       | ((M) Demyx’s water form (Data))          
| obj\M_EX890\m_ex.bdscript       | ((M) Dragoon)          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\M_EX910\m_ex.bdscript       | ((M) Samurai)          
| obj\M_EX920\m_ex.bdscript       | ((M) Sniper)          
| obj\M_EX930\m_ex.bdscript       | ((M) Dancer)          
| obj\M_EX940\m_ex.bdscript       | ((M) Berserker)          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          
| obj\M_EX960\m_ex.bdscript       | ((M) Sorcerer)          
| obj\M_EX990\m_ex.bdscript       | ((M) Dusk)          
| obj\M_EX990_RTN\rtn_.bdscript       | ((M) Dusk (RTN))          
| obj\M_EX990_RTN_FIXCOLOR\rtn_.bdscript       | ((M) Dusk (RTN) (FIXCOLOR) (EX))          
| obj\M_EX990_ZIPPER_RTN\rtn_.bdscript       | ((P) Dusk (ZIPPER) (RTN) (EX))          
| obj\N_AL010_RTN\rtn_.bdscript       | ((N) Magic Carpet (RTN) (AL))          
| obj\N_AL020_RTN\rtn_.bdscript       | ((N) Iago (RTN) (AL))          
| obj\N_AL030_RTN\rtn_.bdscript       | ((N) Abu (RTN) (AL))          
| obj\N_AL040_RTN\rtn_.bdscript       | ((N) Jasmine (RTN) (AL))          
| obj\N_AL070_BTL\n_al.bdscript       | ((N) Jafar clone (BTL) (AL))          
| obj\N_AL080_RTN\rtn_.bdscript       | ((N) Peddler (RTN) (AL))          
| obj\N_AL090_BTL\n_al.bdscript       | ((N) Abu holding gem (BTL) (AL))          
| obj\N_BB010_RTN\rtn_.bdscript       | ((N) Belle (RTN) (BB))          
| obj\N_BB010_SIT_RTN\rtn_.bdscript       | ((N) Belle (sitting) (RTN) (BB))          
| obj\N_BB020_RTN\rtn_.bdscript       | ((N) Beast (Prince Outfit) (RTN) (BB))          
| obj\N_BB040_RTN\rtn_.bdscript       | ((N) Chip (RTN) (BB))          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_BB050_RTN\rtn_.bdscript       | ((N) Cogsworth (RTN) (BB))          
| obj\N_BB050_SAD_RTN\rtn_.bdscript       | ((N) Cogsworth (SAD) (RTN) (BB))          
| obj\N_BB060_BTL\n_bb.bdscript       | ((N) Lumière (BTL) (BB))          
| obj\N_BB060_RTN\rtn_.bdscript       | ((N) Lumière (RTN) (BB))          
| obj\N_BB070_BTL\n_bb.bdscript       | ((N) Mrs. Potts (BTL) (BB))          
| obj\N_BB070_RTN\rtn_.bdscript       | ((N) Mrs. Potts (RTN) (BB))          
| obj\N_BB080_BTL\n_bb.bdscript       | ((N) Wardrobe maid (BTL) (BB))          
| obj\N_BB080_RTN\rtn_.bdscript       | ((N) Wardrobe maid (RTN) (BB))          
| obj\N_CA010_RTN\rtn_.bdscript       | ((N) Elizabeth (RTN) (CA))          
| obj\N_CA010_SAD_RTN\rtn_.bdscript       | ((N) Elizabeth (SAD) (RTN) (CA))          
| obj\N_CA020_KAJI_RTN\rtn_.bdscript       | ((N) Will Turner (KAJI) (RTN) (CA))          
| obj\N_CA020_RTN\rtn_.bdscript       | ((N) Will Turner (RTN) (CA))          
| obj\N_CA020_SIT_RTN\rtn_.bdscript       | ((N) Will Turner (sitting) (RTN) (CA))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM010_BTL\n_cm.bdscript       | ((N) Larxene (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\N_DC010_RTN\rtn_.bdscript       | ((N) Minnie (RTN) (DC))          
| obj\N_DC020_RTN\rtn_.bdscript       | ((N) Daisy (RTN) (DC))          
| obj\N_DC030_RTN\rtn_.bdscript       | ((N) Chip (RTN) (DC))          
| obj\N_DC040_RTN\rtn_.bdscript       | ((N) Dale (RTN) (DC))          
| obj\N_DC050_RTN\rtn_.bdscript       | ((N) Magic Broom (RTN) (DC))          
| obj\N_EX500_ANGER_RAW_RTN\rtn_.bdscript       | ((N) Heyner (ANGER) (RAW) (RTN) (EX))          
| obj\N_EX500_ANGER_RTN\rtn_.bdscript       | ((N) Heyner (ANGER) (RTN) (EX))          
| obj\N_EX500_BTL\n_ex.bdscript       | ((N) Hayner (BTL) (EX))          
| obj\N_EX500_RAW_RTN\rtn_.bdscript       | ((N) Hayner (RAW) (RTN) (EX))          
| obj\N_EX500_RTN\rtn_.bdscript       | ((N) Hayner (RTN) (EX))          
| obj\N_EX510_RAW_RTN\rtn_.bdscript       | ((N) Pence (RAW) (RTN) (EX))          
| obj\N_EX510_RTN\rtn_.bdscript       | ((N) Pence (RTN) (EX))          
| obj\N_EX520_RAW_RTN\rtn_.bdscript       | ((N) Olette (RAW) (RTN) (EX))          
| obj\N_EX520_RTN\rtn_.bdscript       | ((N) Olette (RTN) (EX))          
| obj\N_EX560_RTN\rtn_.bdscript       | ((N) Kairi (RTN) (EX))          
| obj\N_EX570_BTL\n_ex.bdscript       | ((N) Seifer (BTL) (EX))          
| obj\N_EX570_RAW_RTN\rtn_.bdscript       | ((N) Seifer (RAW) (RTN) (EX))          
| obj\N_EX570_RTN\rtn_.bdscript       | ((N) Seifer (RTN) (EX))          
| obj\N_EX580_RAW_RTN\rtn_.bdscript       | ((N) Raijin (RAW) (RTN) (EX))          
| obj\N_EX580_RTN\rtn_.bdscript       | ((N) Raijin (RTN) (EX))          
| obj\N_EX590_RAW_RTN\rtn_.bdscript       | ((N) Fujin (RAW) (RTN) (EX))          
| obj\N_EX590_RTN\rtn_.bdscript       | ((N) Fujin (RTN) (EX))          
| obj\N_EX600_BTL\n_ex.bdscript       | ((N) Setzer (BTL) (EX))          
| obj\N_EX600_RAW_RTN\rtn_.bdscript       | ((N) Setzer (RAW) (RTN) (EX))          
| obj\N_EX600_RTN\rtn_.bdscript       | ((N) Setzer (RTN) (EX))          
| obj\N_EX610_BTL\n_ex.bdscript       | ((N) Vivi (BTL) (EX))          
| obj\N_EX610_BTL2\n_ex.bdscript       | ((N) Vivi (BTL2) (EX))          
| obj\N_EX610_RAW_RTN\rtn_.bdscript       | ((N) Vivi (RAW) (RTN) (EX))          
| obj\N_EX610_RTN\rtn_.bdscript       | ((N) Vivi (RTN) (EX))          
| obj\N_EX620_RTN\rtn_.bdscript       | ((N) Naminé (RTN) (EX))          
| obj\N_EX640_MOOGLE_RTN\rtn_.bdscript       | ((N) Moogle (MOOGLE) (RTN) (EX))          
| obj\N_EX640_SHOP_RTN\rtn_.bdscript       | ((N) Moogle (SHOP) (RTN) (EX))          
| obj\N_EX650_BTL1\tt_a.bdscript       | ((N) Villager (boy) (BTL1) (EX))          
| obj\N_EX650_BTL10\tt_a.bdscript       | ((N) Villager (boy) (BTL10) (EX))          
| obj\N_EX650_BTL2\tt_a.bdscript       | ((N) Villager (boy) (BTL2) (EX))          
| obj\N_EX650_HB_BOY_A_RTN\rtn_.bdscript       | ((N) Villager (boy) (HB_BOY_A) (RTN) (EX))          
| obj\N_EX650_HB_ITEM_RTN\rtn_.bdscript       | ((N) Villager (boy) (HB_ITEM) (RTN) (EX))          
| obj\N_EX650_HB_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (boy) (HB_PROTECT) (RTN) (EX))          
| obj\N_EX650_TT_BOY_A_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_BOY_A) (RTN) (EX))          
| obj\N_EX650_TT_BOY_B_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_BOY_B) (RTN) (EX))          
| obj\N_EX650_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (boy) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX650_TT_ITEM_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_ITEM) (RTN) (EX))          
| obj\N_EX650_TT_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (boy) (TT_PROTECT) (RTN) (EX))          
| obj\N_EX660_HB_LADY_A_RTN\rtn_.bdscript       | ((N) Villager (lady) (HB_LADY_A) (RTN) (EX))          
| obj\N_EX660_TT_LADY_A_RTN\rtn_.bdscript       | ((N) Villager (lady) (TT_LADY_A) (RTN) (EX))          
| obj\N_EX670_BTL1\tt_a.bdscript       | ((N) Villager (girl) (BTL1) (EX))          
| obj\N_EX670_BTL10\tt_a.bdscript       | ((N) Villager (girl) (BTL10) (EX))          
| obj\N_EX670_BTL2\tt_a.bdscript       | ((N) Villager (girl) (BTL2) (EX))          
| obj\N_EX670_HB_GIRL_A_RTN\rtn_.bdscript       | ((N) Villager (girl) (HB_GIRL_A) (RTN) (EX))          
| obj\N_EX670_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (girl) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX670_TT_GIRL_A_RTN\rtn_.bdscript       | ((N) Villager (girl) (TT_GIRL_A) (RTN) (EX))          
| obj\N_EX670_TT_GIRL_B_RTN\rtn_.bdscript       | ((N) Villager (girl) (TT_GIRL_B) (RTN) (EX))          
| obj\N_EX680_BTL1\tt_a.bdscript       | ((N) Villager (man) (BTL1) (EX))          
| obj\N_EX680_BTL10\tt_a.bdscript       | ((N) Villager (man) (BTL10) (EX))          
| obj\N_EX680_BTL2\tt_a.bdscript       | ((N) Villager (man) (BTL2) (EX))          
| obj\N_EX680_HB_ITEM_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_ITEM) (RTN) (EX))          
| obj\N_EX680_HB_MAN_A_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_MAN_A) (RTN) (EX))          
| obj\N_EX680_HB_MAN_B_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_MAN_B) (RTN) (EX))          
| obj\N_EX680_HB_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_PROTECT) (RTN) (EX))          
| obj\N_EX680_TT_B_SKATE_RTN\n_ex.bdscript       | ((N) Villager (man) (TT_B_SKATE) (RTN) (EX))          
| obj\N_EX680_TT_ITEM_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_ITEM) (RTN) (EX))          
| obj\N_EX680_TT_MAN_A_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_MAN_A) (RTN) (EX))          
| obj\N_EX680_TT_MAN_B_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_MAN_B) (RTN) (EX))          
| obj\N_EX680_TT_PROTECT_RAW_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_PROTECT) (RAW) (RTN) (EX))          
| obj\N_EX680_TT_PROTECT_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_PROTECT) (RTN) (EX))          
| obj\N_EX680_TT_PRT_RAW_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_PRT) (RAW) (RTN) (EX))          
| obj\N_EX680_TT_REFEREE_RAW_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_REFEREE) (RAW) (RTN) (EX))          
| obj\N_EX680_TT_REFEREE_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_REFEREE) (RTN) (EX))          
| obj\N_EX680_TT_REF_RAW_RTN\rtn_.bdscript       | ((N) Villager (man) (TT_REF) (RAW) (RTN) (EX))          
| obj\N_EX690_BTL1\tt_a.bdscript       | ((N) Villager (woman) (BTL1) (EX))          
| obj\N_EX690_BTL10\tt_a.bdscript       | ((N) Villager (woman) (BTL10) (EX))          
| obj\N_EX690_BTL2\tt_a.bdscript       | ((N) Villager (woman) (BTL2) (EX))          
| obj\N_EX690_HB_ACCE_RTN\rtn_.bdscript       | ((N) Villager (woman) (HB_ACCE) (RTN) (EX))          
| obj\N_EX690_HB_WOMAN_A_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_WOMAN_A) (RTN) (EX))          
| obj\N_EX690_HB_WOMAN_B_RTN\rtn_.bdscript       | ((N) Villager (man) (HB_WOMAN_B) (RTN) (EX))          
| obj\N_EX690_TT_ACCE_RAW_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_ACCE) (RAW) (RTN) (EX))          
| obj\N_EX690_TT_ACCE_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_ACCE) (RTN) (EX))          
| obj\N_EX690_TT_ACC_RAW_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_ACC) (RAW) (RTN) (EX))          
| obj\N_EX690_TT_A_SKATE_RTN\n_ex.bdscript       | ((N) Villager (woman) (TT_A_SKATE) (RTN) (EX))          
| obj\N_EX690_TT_TUTOR_RTN\n_ex.bdscript       | ((N) Villager (woman) (TT_TUTOR) (RTN) (EX))          
| obj\N_EX690_TT_WOMAN_A_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_WOMAN_A) (RTN) (EX))          
| obj\N_EX690_TT_WOMAN_B_RTN\rtn_.bdscript       | ((N) Villager (woman) (TT_WOMAN_B) (RTN) (EX))          
| obj\N_EX700_HB_WEAPON_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (HB_WEAPON) (RTN) (EX))          
| obj\N_EX700_TT_GENTL_A_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_GENTL_A) (RTN) (EX))          
| obj\N_EX700_TT_GENTL_B_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_GENTL_B) (RTN) (EX))          
| obj\N_EX700_TT_SPONSOR_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_SPONSOR) (RTN) (EX))          
| obj\N_EX700_TT_SPO_RAW_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_SPO) (RAW) (RTN) (EX))          
| obj\N_EX700_TT_SPO_RW2_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_SPO) (RW2) (RTN) (EX))          
| obj\N_EX700_TT_WEAPON_RAW_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_WEAPON) (RAW) (RTN) (EX))          
| obj\N_EX700_TT_WEAPON_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_WEAPON) (RTN) (EX))          
| obj\N_EX700_TT_WPN_RAW_RTN\rtn_.bdscript       | ((N) Villager (gentleman) (TT_WPN) (RAW) (RTN) (EX))          
| obj\N_EX710_HB_OLD_F_A_RTN\rtn_.bdscript       | ((N) Villager (old woman) (HB_OLD_F_A) (RTN) (EX))          
| obj\N_EX710_TT_OLD_F_A_RTN\rtn_.bdscript       | ((N) Villager (old man) (TT_OLD_F_A) (RTN) (EX))          
| obj\N_EX710_TT_SWEETS_RAW_RTN\rtn_.bdscript       | ((N) Villager (old woman) (TT_SWEETS) (RAW) (RTN) (EX))          
| obj\N_EX710_TT_SWEETS_RTN\rtn_.bdscript       | ((N) Villager (old woman) (TT_SWEETS) (RTN) (EX))          
| obj\N_EX710_TT_SWT_RAW_RTN\rtn_.bdscript       | ((N) Villager (old woman) (TT_SWT) (RAW) (RTN) (EX))          
| obj\N_EX720_RTN\rtn_.bdscript       | ((N) Dog (RTN))          
| obj\N_EX730_RTN\rtn_.bdscript       | ((N) Cat (RTN))          
| obj\N_EX730_TUTORIAL_RTN\rtn_.bdscript       | ((N) Cat (TUTORIAL) (RTN))          
| obj\N_EX740_TT_SKATE_RTN\n_ex.bdscript       | ((N) Dove (TT) (SKATE) (RTN) (EX))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_EX760_RTN\rtn_.bdscript       | ((N) Pete (RTN) (EX))          
| obj\N_EX810_HB_OLD_M_A_RTN\rtn_.bdscript       | ((N) Villager (old man) (HB_OLD_M_A) (RTN) (EX))          
| obj\N_EX810_TT_OLD_M_A_RTN\rtn_.bdscript       | ((N) Villager (old man) (TT_OLD_M_A) (RTN) (EX))          
| obj\N_EX900_RTN\rtn_.bdscript       | ((N) Riku (Ansem form) (RTN) (EX))          
| obj\N_EX940_BTL\n_ex.bdscript       | ((N) Riku (coat) (BTL) (EX))          
| obj\N_HB010_RTN\rtn_.bdscript       | ((N) Scrooge (RTN) (HB))          
| obj\N_HB020_DEWEY_RTN\rtn_.bdscript       | ((N) Dewey (RTN) (HB))          
| obj\N_HB020_HUEY_RTN\rtn_.bdscript       | ((N) Huey (RTN) (HB))          
| obj\N_HB020_LOUIE_RTN\rtn_.bdscript       | ((N) Louie (RTN) (HB))          
| obj\N_HB030_RTN\rtn_.bdscript       | ((N) Merlin (RTN) (HB))          
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          
| obj\N_HB500_BTL\n_hb.bdscript       | ()          
| obj\N_HB530_BOSS\n_hb.bdscript       | ((N) Squall / Leon (BOSS) (HB))          
| obj\N_HB530_BTL\n_hb.bdscript       | ((N) Squall / Leon (BTL) (HB))          
| obj\N_HB530_BTL2\n_hb.bdscript       | ((N) Squall / Leon (BTL2) (HB))          
| obj\N_HB530_RTN\rtn_.bdscript       | ((N) Squall / Leon (RTN) (HB))          
| obj\N_HB540_RTN\rtn_.bdscript       | ((N) Cid (RTN) (HB))          
| obj\N_HB540_SIT_RTN\rtn_.bdscript       | ((N) Cid (sitting) (RTN) (HB))          
| obj\N_HB550_BOSS\n_hb.bdscript       | ((N) Cloud (BOSS) (HB))          
| obj\N_HB550_BTL\n_hb.bdscript       | ((N) Cloud (BTL) (HB))          
| obj\N_HB550_BTL2\n_hb.bdscript       | ((N) Cloud (BTL2) (HB))          
| obj\N_HB550_RTN\rtn_.bdscript       | ((N) Cloud (RTN) (HB))          
| obj\N_HB550_STAND_RTN\rtn_.bdscript       | ((N) Cloud (STAND) (RTN) (HB))          
| obj\N_HB560_RTN\rtn_.bdscript       | ((N) Aerith (RTN) (HB))          
| obj\N_HB570_BOSS\n_hb.bdscript       | ((N) Tifa (BOSS) (HB))          
| obj\N_HB570_BTL\n_hb.bdscript       | ((N) Tifa (BTL) (HB))          
| obj\N_HB570_BTL2\n_hb.bdscript       | ((N) Tifa (BTL2) (HB))          
| obj\N_HB570_RTN\rtn_.bdscript       | ((N) Tifa (RTN) (HB))          
| obj\N_HB580_BOSS\n_hb.bdscript       | ((N) Yuffie (BOSS) (HB))          
| obj\N_HB580_BTL\n_hb.bdscript       | ((N) Yuffie (BTL) (HB))          
| obj\N_HB580_BTL2\n_hb.bdscript       | ((N) Yuffie (BTL2) (HB))          
| obj\N_HB580_RTN\rtn_.bdscript       | ((N) Yuffie (RTN) (HB))          
| obj\N_HB590_BTL\n_hb.bdscript       | ((N) Sephiroth (BTL) (HB))          
| obj\N_HB590_RTN\rtn_.bdscript       | ((N) Sephiroth (RTN) (HB))          
| obj\N_HB600_RTN\rtn_.bdscript       | ((N) Yuna (RTN) (HB))          
| obj\N_HB610_RTN\rtn_.bdscript       | ((N) Rikku (RTN) (HB))          
| obj\N_HB620_RTN\rtn_.bdscript       | ((N) Paine (RTN) (HB))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_HE010_BTL_CLSM\n_he.bdscript       | ((N) Hercules (BTL) (CLSM) (HE))          
| obj\N_HE010_RTN\rtn_.bdscript       | ((N) Hercules (RTN) (HE))          
| obj\N_HE010_SIT_RTN\rtn_.bdscript       | ((N) Hercules (sitting) (RTN) (HE))          
| obj\N_HE020_BTL\n_he.bdscript       | ((N) Phil (BTL) (HE))          
| obj\N_HE020_MENU_RTN\rtn_.bdscript       | ((N) Phil (MENU) (RTN) (HE))          
| obj\N_HE020_RTN\rtn_.bdscript       | ((N) Phil (RTN) (HE))          
| obj\N_HE030_BTL\n_he.bdscript       | ((N) Megara (Hydra battle) (BTL) (HE))          
| obj\N_HE030_BTL_DEF\n_he.bdscript       | ((N) Megara (Pete battle) (BTL_DEF) (HE))          
| obj\N_HE030_RTN\rtn_.bdscript       | ((N) Megara (RTN) (HE))          
| obj\N_HE040_BTL\n_he.bdscript       | ((N) Pegasus (BTL) (HE))          
| obj\N_HE040_RTN\rtn_.bdscript       | ((N) Pegasus (RTN) (HE))          
| obj\N_HE050_RTN\rtn_.bdscript       | ((N) Pain (RTN) (HE))          
| obj\N_HE060_RTN\rtn_.bdscript       | ((N) Panic (RTN) (HE))          
| obj\N_LK010_RTN\rtn_.bdscript       | ((N) Timon (RTN) (LK))          
| obj\N_LK020_BTL\n_lk.bdscript       | ((N) Pumba (BTL) (LK))          
| obj\N_LK020_RTN\rtn_.bdscript       | ((N) Pumba (RTN) (LK))          
| obj\N_LK030_RTN\rtn_.bdscript       | ((N) Nala (RTN) (LK))          
| obj\N_LK050_RTN\rtn_.bdscript       | ((N) Lioness (RTN) (LK))          
| obj\N_LK120_RTN\rtn_.bdscript       | ((N) Rafiki (RTN) (LK))          
| obj\N_LM010_RTN\rtn_.bdscript       | ((N) Donald (RTN) (LM))          
| obj\N_LM020_RTN\rtn_.bdscript       | ((N) Goofy (RTN) (LM))          
| obj\N_LM030_RTN\rtn_.bdscript       | ((N) Ariel (RTN) (LM))          
| obj\N_LM040_RTN\rtn_.bdscript       | ((N) Poseidon (RTN) (LM))          
| obj\N_LM050_RTN\rtn_.bdscript       | ((N) Sebastian (RTN) (LM))          
| obj\N_LM060_RTN\rtn_.bdscript       | ((N) Flounder (RTN) (LM))          
| obj\N_MU010_RTN\rtn_.bdscript       | ((N) Li Shang (RTN) (MU))          
| obj\N_MU020_RTN\rtn_.bdscript       | ((N) Yao (RTN) (MU))          
| obj\N_MU030_RTN\rtn_.bdscript       | ((N) Chien-Po (RTN) (MU))          
| obj\N_MU040_RTN\rtn_.bdscript       | ((N) Ling (RTN) (MU))          
| obj\N_MU050_RTN\rtn_.bdscript       | ((N) Emperor of China (RTN) (MU))          
| obj\N_MU060_RTN\rtn_.bdscript       | ((N) Chinese Soldier 1 (RTN) (MU))          
| obj\N_MU070_RTN\rtn_.bdscript       | ((N) Chinese Soldier 2 (RTN) (MU))          
| obj\N_NM010_RTN\rtn_.bdscript       | ((N) Sally (RTN) (NM))          
| obj\N_NM010_SIT_RTN\rtn_.bdscript       | ((N) Sally (sitting) (RTN) (NM))          
| obj\N_NM020_RTN\rtn_.bdscript       | ((N) Dr. Finkelstein (RTN) (NM))          
| obj\N_NM030_RTN\rtn_.bdscript       | ((N) Zero (RTN) (NM))          
| obj\N_NM040_RTN\rtn_.bdscript       | ((N) The Mayor (RTN) (NM))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM050_BTL_2\n_nm.bdscript       | ((N) Lock (BTL2) (NM))          
| obj\N_NM050_BTL_TOY\n_nm.bdscript       | ((N) Lock (toy minigame) (BTL) (NM))          
| obj\N_NM050_RTN\rtn_.bdscript       | ((N) Lock (RTN) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM060_BTL_2\n_nm.bdscript       | ((N) Shock (BTL2) (NM))          
| obj\N_NM060_BTL_TOY\n_nm.bdscript       | ((N) Shock (toy minigame) (BTL) (NM))          
| obj\N_NM060_RTN\rtn_.bdscript       | ((N) Shock (RTN) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_NM070_BTL_2\n_nm.bdscript       | ((N) Barrel (BTL2) (NM))          
| obj\N_NM070_BTL_TOY\n_nm.bdscript       | ((N) Barrel (toy minigame) (BTL) (NM))          
| obj\N_NM070_RTN\rtn_.bdscript       | ((N) Barrel (RTN) (NM))          
| obj\N_NM090_RTN\rtn_.bdscript       | ((N) Santa Claus (RTN) (NM))          
| obj\N_NM100_RTN\rtn_.bdscript       | ((N) Elf (male) (RTN) (NM))          
| obj\N_NM110_RTN\rtn_.bdscript       | ((N) Elf (female) (RTN) (NM))          
| obj\N_PO010_BTL\n_po.bdscript       | ((N) Pooh (BTL) (PO))          
| obj\N_PO010_RTN\rtn_.bdscript       | ((N) Pooh (RTN) (PO))          
| obj\N_PO010_SIT_RTN\rtn_.bdscript       | ((N) Pooh (sitting) (RTN) (PO))          
| obj\N_PO020_BTL\n_po.bdscript       | ((N) Tigger (BTL) (PO))          
| obj\N_PO020_RTN\rtn_.bdscript       | ((N) Tigger (RTN) (PO))          
| obj\N_PO030_AIR_RTN\rtn_.bdscript       | ((N) Piglet (AIR) (RTN) (PO))          
| obj\N_PO030_BTL\n_po.bdscript       | ((N) Pigglet (BTL) (PO))          
| obj\N_PO030_RTN\rtn_.bdscript       | ((N) Pigglet (RTN) (PO))          
| obj\N_PO040_BTL\n_po.bdscript       | ((N) Eeyore (BTL) (PO))          
| obj\N_PO040_RTN\rtn_.bdscript       | ((N) Eeyore (RTN) (PO))          
| obj\N_PO050_RTN\rtn_.bdscript       | ((N) Rabbit (RTN) (PO))          
| obj\N_PO060_RTN\rtn_.bdscript       | ((N) Owl (RTN) (PO))          
| obj\N_PO070_BTL\n_po.bdscript       | ((N) Roo (BTL) (PO))          
| obj\N_PO070_RTN\rtn_.bdscript       | ((N) Roo (RTN) (PO))          
| obj\N_PO080_RTN\rtn_.bdscript       | ((N) Kanga (RTN) (PO))          
| obj\N_PO090_RTN\rtn_.bdscript       | ((N) Gopher (RTN) (PO))          
| obj\N_PO100_RTN\rtn_.bdscript       | ((N) Kanga & Roo (RTN) (PO))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\N_TT010_RTN\rtn_.bdscript       | ((N) Yen Sid (RTN) (TT))          
| obj\N_TT010_SIT_RTN\rtn_.bdscript       | ((N) Yen Sid (sitting) (RTN) (TT))          
| obj\N_TT020_RTN\rtn_.bdscript       | ((N) Flora (RTN) (TT))          
| obj\N_TT030_RTN\rtn_.bdscript       | ((N) Fauna (RTN) (TT))          
| obj\N_TT040_RTN\rtn_.bdscript       | ((N) Merryweather (RTN) (TT))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          
| obj\N_WI010_RTN\rtn_.bdscript       | ((N) Pete (captain) (RTN) (WI))          
| obj\N_WI020_RTN\rtn_.bdscript       | ((N) Horace (RTN) (WI))          
| obj\N_WI030_RTN\rtn_.bdscript       | ((N) Clarabelle (RTN) (WI))          
| obj\N_WI040_RTN\rtn_.bdscript       | ((N) Clara (RTN) (WI))          
| obj\P_AL000\p_al.bdscript       | ((P) Aladdin)          
| obj\P_AL000_RTN\rtn_.bdscript       | ((P) Aladdin (RTN) (AL))          
| obj\P_AL010\p_al.bdscript       | ((P) Genie)          
| obj\P_BB000\p_bb.bdscript       | ((P) Beast)          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          
| obj\P_BB000_RTN\rtn_.bdscript       | ((N) ??? (RTN) (BB))          
| obj\P_CA000\p_ca.bdscript       | ((P) Jack Sparrow)          
| obj\P_CA000_HUMAN\p_ca.bdscript       | ((P) Jack Sparrow (human))          
| obj\P_CA000_HUMAN_LOW\p_ca.bdscript       | ((P) Jack Sparrow (human) (LOW))          
| obj\P_CA000_KAJI_BP_RTN\rtn_.bdscript       | ((P) Jack Sparrow steering ship (Black Pearl) (RTN) (CA))          
| obj\P_CA000_KAJI_IS_RTN\rtn_.bdscript       | ((P) Jack Sparrow steering ship (Interceptor) (RTN) (CA))          
| obj\P_CA000_KAJI_RTN\rtn_.bdscript       | ((P) Jack Sparrow (KAJI) (RTN) (CA))          
| obj\P_CA000_KAJI_SKL_RTN\rtn_.bdscript       | ((P) Jack Sparrow stearing ship (Skelleton) (RTN) (CA))          
| obj\P_CA000_LOW\p_ca.bdscript       | ((P) Jack Sparrow (LOW))          
| obj\P_CA000_RTN\rtn_.bdscript       | ((P) Jack Sparrow (RTN))          
| obj\P_CA000_SKL_RTN\rtn_.bdscript       | ((P) Jack Sparrow (skeleton) (RTN))          
| obj\P_CA000_SK_RTN\rtn_.bdscript       | ()          
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EH000_RTN\rtn_.bdscript       | ((P) Riku (RTN))          
| obj\P_EH000_SIDECAR\p_eh.bdscript       | ((P) Riku riding sidecar)          
| obj\P_EX020\p_ex.bdscript       | ((P) Donald)          
| obj\P_EX020_NM\p_ex.bdscript       | ((P) Donald (NM))          
| obj\P_EX020_NM_RTN\rtn_.bdscript       | ((P) Donald (NM) (RTN))          
| obj\P_EX020_NOBG_RTN\rtn_.bdscript       | ((P) Donald (NOBG) (RTN) (EX))          
| obj\P_EX020_RTN\rtn_.bdscript       | ((N) Donald (RTN))          
| obj\P_EX020_TR\p_ex.bdscript       | ((P) Donald (TR))          
| obj\P_EX020_TR_RTN\rtn_.bdscript       | ((P) Donald (TR) (RTN))          
| obj\P_EX020_XM\p_ex.bdscript       | ((P) Donald (XM))          
| obj\P_EX020_XM_RTN\rtn_.bdscript       | ((P) Donald (XM) (RTN))          
| obj\P_EX030\p_ex.bdscript       | ((P) Goofy)          
| obj\P_EX030_NM\p_ex.bdscript       | ((P) Goofy (NM))          
| obj\P_EX030_NM_RTN\rtn_.bdscript       | ((P) Goofy (NM) (RTN))          
| obj\P_EX030_NOBG_RTN\rtn_.bdscript       | ((P) Goofy (NOBG) (RTN) (EX))          
| obj\P_EX030_RTN\rtn_.bdscript       | ((N) Goofy (RTN))          
| obj\P_EX030_TR\p_ex.bdscript       | ((N) Goofy (TR))          
| obj\P_EX030_TR_RTN\rtn_.bdscript       | ((P) Goofy (TR) (RTN))          
| obj\P_EX030_XM\p_ex.bdscript       | ((P) Goofy (XM))          
| obj\P_EX030_XM_RTN\rtn_.bdscript       | ((P) Goofy (XM) (RTN))          
| obj\P_EX100_HTLF_BTL\p_ex.bdscript       | ((P) Vexen’s Anti-Sora (BTL))          
| obj\P_EX130\p_ex.bdscript       | ((P) Shadow Roxas)          
| obj\P_EX210_RTN\rtn_.bdscript       | ((P) Mickey (coat) (RTN))          
| obj\P_EX220_RTN\rtn_.bdscript       | ((P) Mickey (RTN))          
| obj\P_EX230\p_ex.bdscript       | ((P) Mickey (with Keyblade))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX340\p_ex.bdscript       | ((P) Tinker Bell)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          
| obj\P_HE000\p_he.bdscript       | ((P) Auron)          
| obj\P_HE000_NPC_QSATO\npc_.bdscript       | ((P) Auron (NPC_QSATO))          
| obj\P_HE000_RTN\rtn_.bdscript       | ((P) Auron (RTN))          
| obj\P_LK000\p_lk.bdscript       | ((P) Simba)          
| obj\P_LK000_RTN\rtn_.bdscript       | ((P) Simba (RTN))          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          
| obj\P_LK020_RTN\rtn_.bdscript       | ((P) Donald (RTN) (LK))          
| obj\P_LK030\p_lk.bdscript       | ((P) Goofy (LK))          
| obj\P_LK030_RTN\rtn_.bdscript       | ((P) Goofy (RTN) (LK))          
| obj\P_MU000\p_mu.bdscript       | ((P) Mulan)          
| obj\P_MU000_RTN\rtn_.bdscript       | ((P) Mulan (RTN))          
| obj\P_MU010_RTN\rtn_.bdscript       | ((P) Ping (RTN))          
| obj\P_NM000\p_nm.bdscript       | ((P) Jack Skellington)          
| obj\P_NM000_RTN\rtn_.bdscript       | ((P) Jack Skellington (RTN))          
| obj\P_NM000_SANTA\p_nm.bdscript       | ((P) Jack Skellington (XM))          
| obj\P_NM000_SANTA_RTN\rtn_.bdscript       | ((P) Jack Skellington (XM) (RTN))          
| obj\P_TR000\p_tr.bdscript       | ((P) Tron)          
| obj\P_TR000_RTN\rtn_.bdscript       | ((P) Tron (RTN))          
| obj\P_TR010\p_tr.bdscript       | ((P) ??? (TR))          
| obj\P_WI020\p_ex.bdscript       | ((P) Donald (WI))          
| obj\P_WI020_RTN\rtn_.bdscript       | ((P) Donald (WI) (RTN))          
| obj\P_WI030\p_ex.bdscript       | ((P) Goofy (WI))          
| obj\P_WI030_RTN\rtn_.bdscript       | ((P) Goofy (WI) (RTN))          
| obj\W_EX010_U0_RTN\rtn_.bdscript       | ((W) Struggle Hammer (RTN))          
| obj\W_EX010_V0_RTN\rtn_.bdscript       | ((W) Struggle Wand (RTN))          
| obj\W_EX010_W0_RTN\rtn_.bdscript       | ((W) Struggle Sword (RTN))          



