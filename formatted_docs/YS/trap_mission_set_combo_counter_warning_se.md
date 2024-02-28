## trap_mission_set_combo_counter_warning_se* (mission_combocounter)

`syscall 4, 53 ; trap_mission_set_combo_counter_warning_se (2 in, 0 out)`

Set the sound effect that will play when the combo counter reaches the warning value

### Input parameters
| Name | Type | Description
|------|------|------------
| num   | int   | id of sound effect to play. ID of 10 is used in game
| id   | int   | id of a combo counter


### Example Usage From msn\HB09_SKATE_01\hb09.bdscript
```plaintext
L221:
 pushImm 10
 pushImm 0
 syscall 4, 53 ; trap_mission_set_combo_counter_warning_se (2 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\HB09_SKATE_01\hb09.bdscript       |           
| msn\TT06_PERFORM_02\tt06.bdscript       |           



