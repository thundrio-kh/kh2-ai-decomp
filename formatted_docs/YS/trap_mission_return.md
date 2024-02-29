## trap_mission_return* (mission)

`syscall 4, 32 ; trap_mission_return (0 in, 0 out)`

Unlocks a mission and returns control/settings to normal

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From msn\HB16_MS404D\hb16.bdscript
```plaintext
L87:
 gosub 4, L109
 pushImm 42
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 pushImm 40
 syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
 pushImm 41
 syscall 1, 36 ; trap_bg_hide (1 in, 0 out)
 syscall 1, 187 ; trap_status_prize_drain_start (0 in, 0 out)
 syscall 4, 32 ; trap_mission_return (0 in, 0 out)
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| msn\HB16_MS404D\hb16.bdscript       |           
| msn\TR04_MS202\tr04.bdscript       |           



