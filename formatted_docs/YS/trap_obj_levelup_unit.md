## trap_obj_levelup_unit* (spawn)

`syscall 1, 291 ; trap_obj_levelup_unit (1 in, 0 out)`

Levels up the specified unit group of spawns

### Input parameters
| Name | Type | Description
|------|------|------------
| unit   | YS::UNIT_GROUP_8 *   | A unit group


### Example Usage From obj\F_CA060\f_ca.bdscript
```plaintext
L2170:
 popToSp 0
 pushFromFSp 0
 pushImm 24
 add 
 pushImm 1
 memcpy 0
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 291 ; trap_obj_levelup_unit (1 in, 0 out)
 pushFromFSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 pushFromFSp 0
 pushImm 2
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 1
 sub 
 eqz 
 jz L2249
 pushFromFSp 0
 pushFromFSp 0
 pushImm 1
 syscall 1, 39 ; trap_obj_unit_arg (2 in, 1 out)
 pushImm 1
 add 
 pushImm 1
 pushImm 0
 syscall 1, 87 ; trap_obj_effect_start_bind (4 in, 1 out)
 drop 
 jmp L2249
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\F_CA060\f_ca.bdscript       | ((F) ??? (CA))          
| obj\F_CA060_MEDAL\f_ca.bdscript       | ((F) ??? - Attackable floor? (MEDAL) (CA))          



