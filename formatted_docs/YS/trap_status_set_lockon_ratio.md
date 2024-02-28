## trap_status_set_lockon_ratio* (status)

`syscall 1, 250 ; trap_status_set_lockon_ratio (1 in, 0 out)`

Set the range at which the player is allowed to lockon from

### Input parameters
| Name | Type | Description
|------|------|------------
| range   | float   | Range to set


### Example Usage From obj\B_AL020\b_al.bdscript
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


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          
| obj\B_CA000\b_ca.bdscript       | ((B) Illuminator)          
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\F_NM170_L\f_nm.bdscript       | ((F) Present minigame (L) (NM))          
| obj\F_NM170_M\f_nm.bdscript       | ((F) Present minigame (M) (NM))          
| obj\F_NM170_S\f_nm.bdscript       | ((F) Present minigame (S) (NM))          
| obj\F_NM170_XL\f_nm.bdscript       | ((F) Present minigame (XL) (NM))          



