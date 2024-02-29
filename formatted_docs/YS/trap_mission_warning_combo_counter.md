## trap_mission_warning_combo_counter* (mission_combocounter)

`syscall 4, 52 ; trap_mission_warning_combo_counter (1 in, 0 out)`

sets a warning state for the specified combo counter

### Input parameters
| Name | Type | Description
|------|------|------------
| id   | int   | id of a combo counter


### Example Usage From msn\HB09_SKATE_01\hb09.bdscript
```plaintext
L64:
 popToSp 4
 popToSp 0
 pushFromFSpVal 0
 pushFromFSp 4
 syscall 4, 30 ; trap_mission_get_max_combo_counter (0 in, 1 out)
 syscall 4, 37 ; trap_score_update (3 in, 1 out)
 jz L85
 pushImm 0
 syscall 4, 52 ; trap_mission_warning_combo_counter (1 in, 0 out)
 jmp L85
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| msn\HB09_SKATE_01\hb09.bdscript       |           
| msn\TT06_PERFORM_02\tt06.bdscript       |           



