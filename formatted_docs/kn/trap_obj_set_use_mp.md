## trap_obj_set_use_mp* (object)

`syscall 10, 43 ; trap_obj_set_use_mp (2 in, 0 out)`

Sets an object to use its MP

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| mp   | float   | Value to set MP to


### Example Usage From obj\P_EH000\p_eh.bdscript
```plaintext
L4060:
 popToSp 0
 pushImm 1
 popToSpVal 24
 pushFromFSp 0
 pushFromFSpVal 28
 syscall 10, 43 ; trap_obj_set_use_mp (2 in, 0 out)
 pushFromPWp W4136
 pushFromPWp W0
 gosub 4, L4080
 ret
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          



