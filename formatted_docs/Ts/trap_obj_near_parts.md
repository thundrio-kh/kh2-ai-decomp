## trap_obj_near_parts* (bones)

`syscall 6, 23 ; trap_obj_near_parts (2 in, 1 out)`

Finds the parts of obj1 that are colliding with obj2?

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj1   | YS::OBJ_125   | An object
| obj2   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| parts_colliding   | YS::COLLISION_ELEM_0 *   
Example Usage From limit\donald\limi.bdscript
```plaintext
L1426:
 popToSp 0
 pushFromFSpVal 48
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L1527
 pushFromFSpVal 48
 gosub 4, L1528
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSpVal 48
 syscall 1, 120 ; trap_target_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 6, 23 ; trap_obj_near_parts (2 in, 1 out)
 popToSp 4
 pushFromPSpVal 0
 pushImm 664
 pushFromFSpVal 80
 pushImm 0
 syscall 2, 10 ; trap_attack_new (4 in, 1 out)
 popToSpVal 68
 pushFromFSp 4
 pushImm 0
 sub 
 msbi 
 dup 
 jz L1494
 pushFromFSpVal 68
 pushFromFSpVal 48
 gosub 4, L1528
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 2, 18 ; trap_attack_is_strike (2 in, 1 out)
 eqzv
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| limit\donald\limi.bdscript       |           
| limit\donald_wi\limi.bdscript       |           
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



