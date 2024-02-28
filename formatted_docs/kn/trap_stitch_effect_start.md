## trap_stitch_effect_start* (special)

`syscall 10, 12 ; trap_stitch_effect_start (8 in, 1 out)`

Start a stitch effect

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| id   | int   | ID of effect to start
| obj   | YS::OBJ_125   | An object
| bone   | int   | Bone ID
| motion   | int   | Motion set ID. -1 is used in game AI
| use_bone_rotation   | bool   | Should bone rotation be used
| flag   | int   | Flag argument for effect
| priority   | int   | Priority of effectt


### Output Parameters
| Name | Type
|------|-----
| effect   | unknown   
### Example Usage From obj\N_HB040_BTL\n_hb.bdscript
```plaintext
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
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\N_HB040_BTL\n_hb.bdscript       | ((N) Stitch (BTL) (HB))          



