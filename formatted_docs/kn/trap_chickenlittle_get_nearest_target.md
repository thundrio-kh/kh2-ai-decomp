## trap_chickenlittle_get_nearest_target* (special)

syscall 10, 51 ; trap_chickenlittle_get_nearest_target (4 in, 0 out)

Have chicken little target the nearest enemy

#### Input parameters
| Name | Type | Description
|------|------|------------
| h   | float   | Height to look for targets




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\P_EX350\p_ex.bdscript</summary>
L584:
 popToSp 0
 popToSp 4
 popToSp 8
 pushFromFSp 8
 pushFromFSp 4
 pushFromFSp 0
 pushImm 0
 gosub 8, L636
 popToSp 12
 pushFromFSp 12
 pushImm 256
 add 
 pushImm 1
 memcpy 0
 pushFromPSp 16
 pushFromFSp 8
 fetchValue 4
 gosub 12, L2852
 pushFromPSp 16
 pushFromFSp 12
 fetchValue 48
 pushImmf 120
 pushImmf 60
 syscall 10, 51 ; trap_chickenlittle_get_nearest_target (4 in, 0 out)
 ret
</details>

