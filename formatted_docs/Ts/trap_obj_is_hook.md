## trap_obj_is_hook* (object)

`syscall 6, 61 ; trap_obj_is_hook (1 in, 1 out)`

Checks if an object script execution is a hook?

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Output Parameters
| Name | Type
|------|-----
| is_hook   | bool   
### Example Usage From obj\P_EH000\p_eh.bdscript
```plaintext
L493:
 dup 
 jz L502
 pushFromPWp W0
 syscall 6, 61 ; trap_obj_is_hook (1 in, 1 out)
 eqz 
 eqzv
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          



