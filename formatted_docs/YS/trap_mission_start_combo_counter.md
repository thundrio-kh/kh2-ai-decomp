## trap_mission_start_combo_counter* (mission_combocounter)

`syscall 4, 25 ; trap_mission_start_combo_counter (1 in, 0 out)`

adds and starts a combo counter that is id 0

### Input parameters
| Name | Type | Description
|------|------|------------
| time   | float   | time to start the combo counter at


### Example Usage From msn\TT06_PERFORM_01\tt06.bdscript
```plaintext
L33:
 pushImmf 0
 syscall 4, 25 ; trap_mission_start_combo_counter (1 in, 0 out)
 jmp L73
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\TT06_PERFORM_01\tt06.bdscript       |           
| msn\TT06_PERFORM_02\tt06.bdscript       |           
| msn\TT06_WORK_PERFORM\tt06.bdscript       |           



