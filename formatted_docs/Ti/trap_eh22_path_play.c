## trap_eh22_path_play* (special)

syscall 5, 32 ; trap_eh22_path_play (3 in, 0 out)

Play the specified path in the Dragon Xemnas fight

#### Input parameters
| Name | Type | Description
|------|------|------------
| dir   | bool   | Boolean that indicates directon




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          

</details>

<details>
	<summary>Example Usage From obj\B_EX330\b_ex.bdscript</summary>
L5141:
 popToSp 0
 pushImm 6
 popToWp W4256
 pushFromFSp 0
 pushImm 4
 pushImm 1
 syscall 5, 32 ; trap_eh22_path_play (3 in, 0 out)
 pushImmf 60
 gosub 4, L193
</details>

