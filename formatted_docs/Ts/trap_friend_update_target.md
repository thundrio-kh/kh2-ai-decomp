## trap_friend_update_target* (friend)

`syscall 7, 19 ; trap_friend_update_target (2 in, 1 out)`

Updates the target of a friend

#### Input parameters
| Name | Type | Description
|------|------|------------
| force   | bool   | Whether to force the target update immediately


#### Return Parameters
| Name | Type
|------|-----
| is_updated   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          

</details>

<details>
	<summary>Example Usage From obj\P_EX330\p_ex.bdscript</summary>
```
L6099:
 popToSp 0
 pushFromFSp 0
 pushImm 1
 syscall 7, 19 ; trap_friend_update_target (2 in, 1 out)
 drop 
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L6141
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L928
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 6, 9 ; trap_target_dist (2 in, 1 out)
 popToSpVal 40
 jmp L6141
```
</details>

