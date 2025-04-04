## trap_event_continue_control_off* (event)

`syscall 4, 56 ; trap_event_continue_control_off (0 in, 0 out)`

Continues the current event now that control is off

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From msn\HB38_FM_MAR\ms_b.bdscript
```plaintext
TR3:
 syscall 4, 56 ; trap_event_continue_control_off (0 in, 0 out)
 pushFromPWp W0
 gosub 4, L74
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| msn\HB38_FM_MAR\ms_b.bdscript       |           
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          



