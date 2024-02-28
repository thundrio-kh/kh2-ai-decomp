## trap_mission_disable_timer* (mission_timer)

`syscall 4, 49 ; trap_mission_disable_timer (1 in, 0 out)`

turns off the display of an on screen timer

### Input parameters
| Name | Type | Description
|------|------|------------
| timer_id   | int   | id of counter


### Example Usage From msn\CA07_MS105\ca07.bdscript
```plaintext
L204:
 pushImm 0
 syscall 4, 49 ; trap_mission_disable_timer (1 in, 0 out)
 pushImm 17354
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 jmp L176
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\CA07_MS105\ca07.bdscript       |           
| msn\EH26_MS108\eh26.bdscript       |           



