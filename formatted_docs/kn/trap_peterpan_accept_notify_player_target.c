## trap_peterpan_accept_notify_player_target* (special)

syscall 10, 26 ; trap_peterpan_accept_notify_player_target (1 in, 0 out)

Accept a notify player target

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From obj\P_EX330\p_ex.bdscript</summary>
L6806:
 popToSp 0
 pushImm 0
 popToSpVal 28
 pushImm 0
 popToSpVal 32
 pushFromFSp 0
 syscall 10, 26 ; trap_peterpan_accept_notify_player_target (1 in, 0 out)
 ret
</details>

