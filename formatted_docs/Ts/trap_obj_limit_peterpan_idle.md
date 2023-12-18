## trap_obj_limit_peterpan_idle* (special)

syscall 6, 40 ; trap_obj_limit_peterpan_idle (1 in, 0 out)

Set the peterpan limit action to idle

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From obj\P_EX330\p_ex.bdscript</summary>
L2529:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L2575
 pushImm 0
 popToSpVal 88
 pushFromPSpVal 20
 syscall 1, 127 ; trap_obj_act_clear (1 in, 0 out)
 pushImm 0
 popToSpVal 360
 pushFromPSpVal 48
 pushImm 470
 pushImm 471
 pushImm 482
 gosub 4, L2835
 pushFromPSpVal 4
 syscall 6, 40 ; trap_obj_limit_peterpan_idle (1 in, 0 out)
 pushFromPSpVal 20
 syscall 10, 3 ; trap_friend_start_limit (1 in, 0 out)
 ret
</details>

