## trap_mission_set_timer_param* (mission_timer)

`syscall 4, 17 ; trap_mission_set_timer_param (4 in, 0 out)`

sets parameters for a timer

### Input parameters
| Name | Type | Description
|------|------|------------
| start   | int   | start value for the timer
| max   | int   | max value for the timer
| warning   | int   | threshold for the timers warning state
| id   | int   | id of a timer


### Example Usage From msn\HE_COLOSSEUM_2\he_c.bdscript
```plaintext
TR3:
 pushFromPWp W0
 gosub 4, L400
 pushFromPWp W0
 fetchValue 8
 fetchValue 24
 popToSp 0
 pushFromFSp 0
 pushImm 0
 sub 
 neqz 
 jz L395
 pushFromFSp 0
 pushImm 15
 add 
 popToSp 0
 pushFromFSp 0
 pushFromFSp 0
 pushImm 0
 pushImm 0
 syscall 4, 17 ; trap_mission_set_timer_param (4 in, 0 out)
 jmp L395
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| msn\HE_COLOSSEUM_2\he_c.bdscript       |           
| msn\HE_COLOSSEUM_2_FOG\he_c.bdscript       |           
| msn\HE_COLOSSEUM_6\he_c.bdscript       |           
| msn\HE_COLOSSEUM_6_FOG\he_c.bdscript       |           
| msn\HE_COLOSSEUM_8_CEL\he_c.bdscript       |           
| msn\HE_COL_2_10\he_c.bdscript       |           
| msn\HE_COL_6_10\he_c.bdscript       |           
| msn\HE_COL_8_31\he_c.bdscript       |           
| msn\HE_COL_8_35\he_c.bdscript       |           
| msn\HE_COL_8_40\he_c.bdscript       |           
| obj\B_EX120\b_ex.bdscript       | ((B) Demyx (Only playing sitar?))          
| obj\B_EX120_HB\b_ex.bdscript       | ((B) Demyx)          
| obj\B_EX120_HB_LV99\b_ex.bdscript       | ((B99) Demyx (Limit Cut))          



