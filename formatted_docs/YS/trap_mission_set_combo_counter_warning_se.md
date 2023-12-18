## trap_mission_set_combo_counter_warning_se* (mission_combocounter)

`syscall 4, 53 ; trap_mission_set_combo_counter_warning_se (2 in, 0 out)`

Set the sound effect that will play when the combo counter reaches the warning value

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
```
L221:
 pushImm 10
 pushImm 0
 syscall 4, 53 ; trap_mission_set_combo_counter_warning_se (2 in, 0 out)
 ret
```
</details>
