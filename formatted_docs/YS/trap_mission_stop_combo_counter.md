## trap_mission_stop_combo_counter* (mission_combocounter)

`syscall 4, 27 ; trap_mission_stop_combo_counter (0 in, 0 out)`

stops a combo counter with id 0

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\HB09_SKATE_01\hb09.bdscript       |           
| msn\TT06_LETTER_01\tt06.bdscript       |           
| msn\TT06_LETTER_02\tt06.bdscript       |           
| msn\TT06_PERFORM_01\tt06.bdscript       |           
| msn\TT06_PERFORM_02\tt06.bdscript       |           
| msn\TT06_WORK_LETTER\tt06.bdscript       |           
| msn\TT06_WORK_PERFORM\tt06.bdscript       |           

</details>

<details>
	<summary>Example Usage From msn\HB09_SKATE_01\hb09.bdscript</summary>
```
L58:
 syscall 4, 27 ; trap_mission_stop_combo_counter (0 in, 0 out)
 jmp L62
```
</details>

