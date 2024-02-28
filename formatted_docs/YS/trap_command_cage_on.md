## trap_command_cage_on* (command)

`syscall 1, 117 ; trap_command_cage_on (0 in, 0 out)`

Turns on temporary barriers, like those used during the escape from Hades sequence.

### Input parameters
| Name | Type | Description
|------|------|------------


### Example Usage From msn\HB16_MS404B\hb16.bdscript
```plaintext
L33:
 pushImm 21
 syscall 1, 37 ; trap_bg_show (1 in, 0 out)
 pushImm 8077
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 syscall 1, 117 ; trap_command_cage_on (0 in, 0 out)
 jmp L65
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\HB16_MS404B\hb16.bdscript       |           
| msn\HB16_MS404C\hb16.bdscript       |           
| msn\HB16_MS404D\hb16.bdscript       |           
| msn\HB24_CONFINE\hb24.bdscript       |           
| msn\HB24_CONFINE_2\hb24.bdscript       |           
| msn\HB25_CONFINE_1\hb25.bdscript       |           
| msn\HB25_CONFINE_2\hb25.bdscript       |           
| msn\HB25_CONFINE_3\hb25.bdscript       |           
| msn\HE05_MS102\he05.bdscript       |           
| msn\TT40_KINOKO_AXE\kino.bdscript       |           



