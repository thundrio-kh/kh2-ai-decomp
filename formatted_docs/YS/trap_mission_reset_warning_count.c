## trap_mission_reset_warning_count* (mission_counter)

syscall 4, 58 ; trap_mission_reset_warning_count (1 in, 0 out)

Reset the warning flag for a counter

#### Input parameters
| Name | Type | Description
|------|------|------------
| counter_id   | int   | id of a counter




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\N_CM020_BTL\n_cm.bdscript       | ((N) Lexaeus (BTL) (CM))          

</details>

<details>
	<summary>Example Usage From obj\N_CM020_BTL\n_cm.bdscript</summary>
L5144:
 pushFromFSp 0
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L5241
 gosub 4, L4390
 jz L5238
 pushFromFWp W0
 gosub 4, L3953
 popToSp 4
 pushFromFWp W0
 pushFromFWp W4
 gosub 4, L3953
 gosub 4, L5242
 pushImm 0
 syscall 4, 58 ; trap_mission_reset_warning_count (1 in, 0 out)
 pushImm 0
 syscall 4, 50 ; trap_mission_warning_count (1 in, 0 out)
 pushFromFWp W0
 pushImm 72
 add 
 pushFromFWp W4
 gosub 4, L3953
 cfti 
 pushImmf 15
 divf 
 citf 
 memcpy 0
</details>

