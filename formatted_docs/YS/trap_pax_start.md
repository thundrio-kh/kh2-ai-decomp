## trap_pax_start* (animation)

`syscall 1, 138 ; trap_pax_start (4 in, 1 out)`

Starts a PAX effect

### Input parameters
| Name | Type | Description
|------|------|------------
| pax   | ryj::PAX_161 *   | A PAX effect object
| id   | int   | ID of the animation to start
| flag   | int   | Flag to set, possibly a boolean as 0 and 1 are only values used in game
| priority   | int   | Priority for the animation


### Output Parameters
| Name | Type
|------|-----
| effect   | ryj::EFFECT_145 *   
### Example Usage From magic\blizzard1\bliz.bdscript
```plaintext
L60:
 pushFromPSpVal 0
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf 3.141593
 syscall 0, 13 ; trap_vector_roty (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 pushFromFSp 68
 syscall 1, 146 ; trap_obj_hitback (3 in, 0 out)
 pushFromFSp 4
 syscall 0, 53 ; trap_effect_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 48
 pushFromPSpVal 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 32
 pushFromPSpVal 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 pushFromPSp 48
 fetchValue 4
 memcpy 0
 pushFromFSpVal 16
 pushImm 2
 pushImm 1
 pushImm 0
 syscall 1, 138 ; trap_pax_start (4 in, 1 out)
 popToSpVal 32
 pushFromFSpVal 32
 pushFromPSp 48
 syscall 0, 38 ; trap_effect_set_pos (2 in, 0 out)
 pushFromFSp 0
 pushImm 248
 gosub 24, L377
 popToSpVal 28
 pushFromFSpVal 28
 pushImmf 100
 pushImmf 0
 syscall 2, 11 ; trap_attack_set_radius (3 in, 0 out)
 pushFromFSpVal 28
 pushFromPSp 16
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 pushFromFSpVal 28
 pushFromPSp 16
 pushFromPSp 32
 pushImmf 100
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 80
 pushFromPSp 80
 pushImmf 0.5
 syscall 0, 36 ; trap_vector_mul (2 in, 1 out)
 memcpyToSp 16, 96
 pushFromPSp 96
 syscall 0, 4 ; trap_vector_add (2 in, 1 out)
 memcpyToSp 16, 112
 pushFromPSp 112
 syscall 2, 12 ; trap_attack_set_pos (2 in, 0 out)
 halt 
 pushImmf 30
 popToSp 64
 pushImm 0
 popToSp 72
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| magic\blizzard1\bliz.bdscript       |           
| magic\BLIZZARD_1\bliz.bdscript       |           
| magic\BLIZZARD_1lk\bliz.bdscript       |           
| magic\BLIZZARD_2\bliz.bdscript       |           
| magic\BLIZZARD_2lk\bliz.bdscript       |           
| magic\BLIZZARD_3\bliz.bdscript       |           
| magic\BLIZZARD_3lk\bliz.bdscript       |           
| magic\cure1\cure.bdscript       |           
| magic\CURE_1\cure.bdscript       |           
| magic\CURE_1lk\cure.bdscript       |           
| magic\CURE_2\cure.bdscript       |           
| magic\CURE_2lk\cure.bdscript       |           
| magic\CURE_3\cure.bdscript       |           
| magic\CURE_3lk\cure.bdscript       |           
| magic\LK_BLIZZARD_1\bliz.bdscript       |           
| magic\magnet1\magn.bdscript       |           
| magic\MAGNET_1\magn.bdscript       |           
| magic\MAGNET_1lk\magn.bdscript       |           
| magic\MAGNET_2\magn.bdscript       |           
| magic\MAGNET_2lk\magn.bdscript       |           
| magic\MAGNET_3\magn.bdscript       |           
| magic\MAGNET_3lk\magn.bdscript       |           
| magic\thunder1\thun.bdscript       |           
| magic\THUNDER_1\thun.bdscript       |           
| magic\THUNDER_1lk\thun.bdscript       |           
| magic\THUNDER_2\thun.bdscript       |           
| magic\THUNDER_2lk\thun.bdscript       |           
| magic\THUNDER_3\thun.bdscript       |           
| magic\THUNDER_3lk\thun.bdscript       |           



