## trap_friend_get_target_last_position* (friend)

`syscall 10, 8 ; trap_friend_get_target_last_position (1 in, 1 out)`

Get the last position of the friends target

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


#### Return Parameters
| Name | Type
|------|-----
| last_pos   | kn::FVector *   
Example Usage From obj\P_EX350\p_ex.bdscript
```plaintext
L8852:
 pushFromPSpVal 0
 fetchValue 4
 pushImm 203
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPSpVal 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 13 ; trap_sysobj_motion_push (3 in, 0 out)
 pushFromPSpVal 0
 pushImm 1
 pushImm -1
 gosub 48, L8984
 jz L8983
 pushFromPSpVal 0
 syscall 10, 8 ; trap_friend_get_target_last_position (1 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 memcpyToSp 16, 112
 pushFromPSp 160
 pushImmf 0
 pushImmf 0
 pushImmf 0
 pushImmf 1
 gosub 48, L987
 pushFromPSpVal 0
 pushImm 162
 pushFromPSp 160
 syscall 1, 83 ; trap_obj_apply_bone_matrix (3 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 memcpyToSp 16, 160
 pushFromPSp 112
 pushFromPSp 160
 syscall 0, 5 ; trap_vector_sub (2 in, 1 out)
 memcpyToSp 16, 176
 pushFromPSp 176
 memcpyToSp 16, 144
 pushImmf 1
 syscall 0, 17 ; trap_random_getf (1 in, 1 out)
 pushImmf 0.5
 subf 
 infzf 
 jz L8969
 pushFromPSpVal 0
 pushFromPSp 160
 pushFromPSp 144
 gosub 48, L9066
 jmp L8977
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



