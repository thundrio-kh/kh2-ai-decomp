## trap_target_searcher_get_target_num* (target)

syscall 6, 22 ; trap_target_searcher_get_target_num (4 in, 1 out)

Return the index number of a target within a position and a direction

#### Input parameters
| Name | Type | Description
|------|------|------------
| is_history   | bool   | Unknown purpose, only value used in game is 0


#### Return Parameters
| Name | Type
|------|-----
| target_num   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\mulan\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\mulan\limi.bdscript</summary>
L921:
 popToSp 0
 pushFromPWp W16
 fetchValue 0
 pushFromFSp 0
 pushImm 254
 pushImmf 0
 syscall 2, 47 ; trap_limit_motion_start (4 in, 1 out)
 drop 
 pushFromPWp W16
 pushImm 152
 add 
 gosub 4, L1036
 pushFromPWp W16
 pushImm 152
 add 
 pushImmf 0
 pushImmf 2000
 gosub 4, L1046
 pushFromPWp W16
 pushImm 152
 add 
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushFromFSp 0
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 pushImm 0
 syscall 6, 22 ; trap_target_searcher_get_target_num (4 in, 1 out)
 popToSp 4
 pushFromFSp 4
 pushFromPAi L6003 ; ___ai 'frametan enemy num' (L6003)
 syscall 0, 0 ; trap_puti (2 in, 0 out)
 pushFromFSp 4
 pushImm 0
 sub 
 eqz 
 jz L1012
 pushFromFSp 0
 gosub 4, L1061
 jmp L1031
</details>

