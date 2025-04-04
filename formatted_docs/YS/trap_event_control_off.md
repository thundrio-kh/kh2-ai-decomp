## trap_event_control_off* (event)

`syscall 1, 293 ; trap_event_control_off (0 in, 0 out)`

Turns off player control for an event

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From msn\TT02_MS201\save.bdscript
```plaintext
L52:
 pushImm 32
 syscall 0, 57 ; trap_saveflag_set (1 in, 0 out)
 syscall 1, 293 ; trap_event_control_off (0 in, 0 out)
 pushImm 1
 popToWp W12
 jmp L66
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| msn\TT02_MS201\save.bdscript       |           
| msn\TT32_MS303\tt32.bdscript       |           
| obj\F_AL030\f_al.bdscript       | ((F) ??? (AL))          



