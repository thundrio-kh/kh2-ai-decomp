## func_area_activate_unit* (spawn)

`syscall 1, 45 ; func_area_activate_unit (1 in, 0 out)`

Activates the spawn file with the passed in name.

#### Input parameters
| Name | Type | Description
|------|------|------------
| unit   | string   | name of spawn file to be activated (ie 'f01_'


Example Usage From ard\wi00\wi00.bdscript
```plaintext
TR3:
 pushImm 13318
 syscall 0, 15 ; trap_progress_check_flag (1 in, 1 out)
 jz L27
 pushFromPAi L180 ; ___ai 'c02_' (L180)
 syscall 1, 45 ; func_area_activate_unit (1 in, 0 out)
 jmp L31
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\wi00\wi00.bdscript       |           



