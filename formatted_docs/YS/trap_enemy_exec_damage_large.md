## trap_enemy_exec_damage_large* (enemy)

`syscall 2, 87 ; trap_enemy_exec_damage_large (3 in, 0 out)`

executes a large amount of damage

### Input parameters
| Name | Type | Description
|------|------|------------
| enemy_obj   | YS::BTLOBJ *   | pushFromFSp: 0
| damage   | YS::DAMAGE_4 *   | pushFromFSp: 4
| power   | float   | pushImmf: 0


### Example Usage From obj\B_HE030\b_he.bdscript
```plaintext
L81:
 pushFromFWp W4212
 eqz 
 jz L301
 pushFromFSp 4
 syscall 2, 45 ; trap_damage_attack_param_id (1 in, 1 out)
 pushImm 1189
 sub 
 eqz 
 jz L165
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 pushImm 0
 syscall 1, 231 ; trap_sheet_set_min_hp (3 in, 0 out)
 pushImm 1
 popToWp W4212
 pushFromFSp 0
 pushImm 16
 add 
 pushImm 0
 memcpy 0
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 6
 pushImm 100
 syscall 1, 311 ; trap_sheet_set_element_rate (3 in, 0 out)
 pushFromFSp 0
 pushImmf 1
 pushImmf 0
 pushImmf 10
 syscall 1, 125 ; trap_obj_tex_fade_start (4 in, 0 out)
 pushFromFSp 0
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 0
 pushFromFSp 4
 pushImmf 0
 syscall 2, 87 ; trap_enemy_exec_damage_large (3 in, 0 out)
 exit
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_HE030\b_he.bdscript       | ((B) Hades (3rd & Paradox Hades Cup fight))          



