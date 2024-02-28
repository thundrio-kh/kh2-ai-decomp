## trap_btlobj_set_sheet* (btlobj)

`syscall 2, 9 ; trap_btlobj_set_sheet (3 in, 0 out)`

Sets a batleobj to use a specific enmp entry.

### Input parameters
| Name | Type | Description
|------|------|------------
| btlobj   | YS::PIERROT_6 *   | A btlobj
| id   | int   | enmp entry to use
| param   | int   | unknown, always 0 in game


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
| obj\B_AL100_1ST\b_al.bdscript       | ((M) Volcano Lord)          
| obj\B_AL100_2ND\b_al.bdscript       | ((M) Blizzard Lord)          
| obj\B_AL100_FIRE\b_al.bdscript       | ((B) Volcanic Lord)          
| obj\B_AL100_ICE\b_al.bdscript       | ((B) Blizzard Lord)          
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
| obj\B_EX100\b_ex.bdscript       | ((B) Twilight Thorn)          
| obj\B_EX110\b_ex.bdscript       | ((B) Axel (Twilight Town, 2nd fight))          
| obj\B_EX110_FRIEND\b_ex.bdscript       | ((A?) Axel)          
| obj\B_EX110_LV99\b_ex.bdscript       | ((B99) Axel (Limit Cut))          
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
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\B_EX380\b_ex.bdscript       | ((F) Zexion’s book)          
| obj\B_EX390\b_ex.bdscript       | ((B) Hooded Roxas)          
| obj\B_EX410\b_ex.bdscript       | ((P) Sora book)          
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          
| obj\B_HE020\b_he.bdscript       | ((B) Cerberus)          
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          
| obj\B_HE030_CLSM\b_he.bdscript       | ((B) Hades (CLSM) (HE))          
| obj\B_HE030_HE05\b_he.bdscript       | ((B) Hades)          
| obj\B_HE030_PART\b_he.bdscript       | ((B) Hades (1st & 2nd fight))          
| obj\B_HE100\b_he.bdscript       | ((B) Hydra)          
| obj\B_HE110\b_he.bdscript       | ((B) Hydra head (Out of the ground))          
| obj\B_LK100\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_00\b_lk.bdscript       | ((B) Shenzi)          
| obj\B_LK100_10\b_lk.bdscript       | ((B) Banzai)          
| obj\B_LK100_20\b_lk.bdscript       | ((B) Ed)          
| obj\B_LK110\b_lk.bdscript       | ((B) Scar)          
| obj\B_LK110_PHANTOM\b_lk.bdscript       | ((M) Scar Ghost)          
| obj\B_LK120\b_lk.bdscript       | ((B) Groundshaker)          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU110\b_mu.bdscript       | ((B) Hayabusa (Shan-Yu’s Falcon))          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\B_NM100\b_nm.bdscript       | ((B) Prison Keeper)          
| obj\B_NM110\b_nm.bdscript       | ((B) The Experiment)          
| obj\B_TR000\b_tr.bdscript       | ((B) Hostile Program)          
| obj\B_TR020\b_tr.bdscript       | ((B) MCP)          
| obj\EH_G_EX120\g_ex.bdscript       | ((EH) Xemnas’s dragon missile (G_EX))          
| obj\EH_G_EX250\g_ex.bdscript       | ((EH) Bomb Bell B)          
| obj\EH_G_EX250_FLY\g_ex.bdscript       | ((EH) Bomb Bell B (FLY) (G_EX))          
| obj\EH_G_EX290\g_ex.bdscript       | ((EH) Speeder B (G_EX))          
| obj\EH_G_EX320\g_ex.bdscript       | ((EH) Spiked Roller B (G_EX))          
| obj\F_BB050\f_bb.bdscript       | ((F) Shadow Stalker (Chandelier) (BB))          
| obj\F_BB060\f_bb.bdscript       | ((F) Shadow Stalker (Columns) (BB))          
| obj\F_EH100\f_eh.bdscript       | ((F) Xemnas’s dragon energy core (EH))          
| obj\F_HB030\f_hb.bdscript       | ((F) ??? (HB))          
| obj\F_HB070\f_hb.bdscript       | ((F) CoR’s droppable spike (HB))          
| obj\F_HB080\f_hb.bdscript       | ((F) CoR’s steam wheel (HB))          
| obj\F_MU030\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_PO090\f_po.bdscript       | ((PO) Bees (PO))          
| obj\F_PO090_ETC\f_po.bdscript       | ((F) Bees (ETC) (PO))          
| obj\F_PO090_TT\f_po.bdscript       | ((F) Bees (TT) (PO))          
| obj\F_TR020_CORE\f_tr.bdscript       | ()          
| obj\F_TR050\f_tr.bdscript       | ((F) MCP barrier (TR))          
| obj\F_TR150\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_TR170\f_tr.bdscript       | ((F) ??? (TR))          
| obj\F_WI010\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (WI))          
| obj\F_WI010_BOSS\f_wi.bdscript       | ((F) ??? - Path? Pyramid? Sparkle? White fire? (BOSS) (WI))          
| obj\F_WI020\f_wi.bdscript       | ((F) Burning building (WI))          
| obj\F_WI020_BOSS\f_wi.bdscript       | ((F) Burning building (BOSS) (WI))          
| obj\F_WI020_BTL\f_wi.bdscript       | ()          
| obj\F_WI320\f_wi.bdscript       | ((F) Lilliput houses 1 (WI))          
| obj\F_WI330\f_wi.bdscript       | ((F) Lilliput houses 2 (WI))          
| obj\F_WI340\f_wi.bdscript       | ((F) Lilliput houses 3 (WI))          
| obj\F_WI350\f_wi.bdscript       | ((F) Lilliput houses 4 (WI))          
| obj\F_WI380\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (WI))          
| obj\F_WI380_RTN\f_wi.bdscript       | ((F) Steamboat with Corner stone in cage (RTN) (WI))          
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
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_CM000_BTL\n_cm.bdscript       | ((N) Marluxia (BTL) (CM))          
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          
| obj\N_CM040_BTL\n_cm.bdscript       | ((N) Vexen (BTL) (CM))          
| obj\N_DC010_BTL\n_dc.bdscript       | ((N) Minnie (BTL) (DC))          
| obj\N_EX500_BTL\n_ex.bdscript       | ((N) Hayner (BTL) (EX))          
| obj\N_EX570_BTL\n_ex.bdscript       | ((N) Seifer (BTL) (EX))          
| obj\N_EX600_BTL\n_ex.bdscript       | ((N) Setzer (BTL) (EX))          
| obj\N_EX610_BTL\n_ex.bdscript       | ((N) Vivi (BTL) (EX))          
| obj\N_EX610_BTL2\n_ex.bdscript       | ((N) Vivi (BTL2) (EX))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_CLSM\n_ex.bdscript       | ((N) Pete (BTL) (CLSM) (EX))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          
| obj\N_EX940_BTL\n_ex.bdscript       | ((N) Riku (coat) (BTL) (EX))          
| obj\N_HB500_BTL\n_hb.bdscript       | ()          
| obj\N_HB530_BOSS\n_hb.bdscript       | ((N) Squall / Leon (BOSS) (HB))          
| obj\N_HB530_BTL\n_hb.bdscript       | ((N) Squall / Leon (BTL) (HB))          
| obj\N_HB530_BTL2\n_hb.bdscript       | ((N) Squall / Leon (BTL2) (HB))          
| obj\N_HB550_BOSS\n_hb.bdscript       | ((N) Cloud (BOSS) (HB))          
| obj\N_HB550_BTL\n_hb.bdscript       | ((N) Cloud (BTL) (HB))          
| obj\N_HB550_BTL2\n_hb.bdscript       | ((N) Cloud (BTL2) (HB))          
| obj\N_HB570_BOSS\n_hb.bdscript       | ((N) Tifa (BOSS) (HB))          
| obj\N_HB570_BTL\n_hb.bdscript       | ((N) Tifa (BTL) (HB))          
| obj\N_HB570_BTL2\n_hb.bdscript       | ((N) Tifa (BTL2) (HB))          
| obj\N_HB580_BOSS\n_hb.bdscript       | ((N) Yuffie (BOSS) (HB))          
| obj\N_HB580_BTL\n_hb.bdscript       | ((N) Yuffie (BTL) (HB))          
| obj\N_HB580_BTL2\n_hb.bdscript       | ((N) Yuffie (BTL2) (HB))          
| obj\N_HB590_BTL\n_hb.bdscript       | ((N) Sephiroth (BTL) (HB))          
| obj\N_HB630\n_hb.bdscript       | ((N) Sephiroth (HB))          
| obj\N_HE010_BTL\n_he.bdscript       | ((N) Hercules (BTL) (HE))          
| obj\N_HE010_BTL_CLSM\n_he.bdscript       | ((N) Hercules (BTL) (CLSM) (HE))          
| obj\N_HE030_BTL\n_he.bdscript       | ((N) Megara (Hydra battle) (BTL) (HE))          
| obj\N_HE030_BTL_DEF\n_he.bdscript       | ((N) Megara (Pete battle) (BTL_DEF) (HE))          
| obj\N_LK020_BTL\n_lk.bdscript       | ((N) Pumba (BTL) (LK))          
| obj\N_NM050_BTL\n_nm.bdscript       | ((N) Lock (BTL) (NM))          
| obj\N_NM050_BTL_TOY\n_nm.bdscript       | ((N) Lock (toy minigame) (BTL) (NM))          
| obj\N_NM060_BTL\n_nm.bdscript       | ((N) Shock (BTL) (NM))          
| obj\N_NM060_BTL_TOY\n_nm.bdscript       | ((N) Shock (toy minigame) (BTL) (NM))          
| obj\N_NM070_BTL\n_nm.bdscript       | ((N) Barrel (BTL) (NM))          
| obj\N_NM070_BTL_2\n_nm.bdscript       | ((N) Barrel (BTL2) (NM))          
| obj\N_NM070_BTL_TOY\n_nm.bdscript       | ((N) Barrel (toy minigame) (BTL) (NM))          
| obj\N_TR010_BTL\n_tr.bdscript       | ((N) Sark (BTL) (TR))          
| obj\N_TR010_BTL_L\n_tr.bdscript       | ((N) Sark (large) (BTL) (TR))          
| obj\N_WI010_BTL\n_wi.bdscript       | ((N) Pete (captain) (BTL) (WI))          
| obj\N_WI010_BTL_VS\n_wi.bdscript       | ((N) Pete (captain) (BTL_VS) (WI))          
| obj\P_BB000_BTL\p_bb.bdscript       | ((P) Beast (BTL))          
| obj\P_EX100_HTLF_BTL\p_ex.bdscript       | ((P) Vexen’s Anti-Sora (BTL))          
| obj\P_EX130\p_ex.bdscript       | ((P) Shadow Roxas)          
| obj\P_EX230\p_ex.bdscript       | ((P) Mickey (with Keyblade))          



