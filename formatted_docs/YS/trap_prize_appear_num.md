## trap_prize_appear_num* (prize)

syscall 1, 342 ; trap_prize_appear_num (3 in, 0 out)

Makes a number of prizes appear at a position

#### Input parameters
| Name | Type | Description
|------|------|------------
| num   | int   | number of prizes




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          

</details>

<details>
	<summary>Example Usage From obj\B_CA050\b_ca.bdscript</summary>
L1121:
 pushFromFSp 4
 syscall 2, 92 ; trap_damage_is_finish (1 in, 1 out)
 jz L1152
 pushFromFWp W16
 jz L1150
 pushFromFSp 0
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 6
 pushImm 5
 syscall 1, 342 ; trap_prize_appear_num (3 in, 0 out)
 jmp L1150
</details>

