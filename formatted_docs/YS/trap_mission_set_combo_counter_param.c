## trap_mission_set_combo_counter_param* (mission_combocounter)

syscall 4, 51 ; trap_mission_set_combo_counter_param (4 in, 0 out)

Set parameters for the combo counter

#### Input parameters
| Name | Type | Description
|------|------|------------
| id   | int   | id of a combo counter




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\HB09_SKATE_01\hb09.bdscript       |           
| msn\TT06_PERFORM_02\tt06.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\HB09_SKATE_01\hb09.bdscript</summary>
L190:
 pushFromFSp 0
 fetchValue 0
 syscall 4, 36 ; trap_score_score (1 in, 1 out)
 pushFromFSp 4
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 pushImm 0
 pushImm 0
 pushFromFSp 0
 fetchValue 0
 syscall 4, 36 ; trap_score_score (1 in, 1 out)
 pushImm 1
 add 
 pushImm 0
 syscall 4, 51 ; trap_mission_set_combo_counter_param (4 in, 0 out)
</details>

