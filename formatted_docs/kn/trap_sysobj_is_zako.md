## trap_sysobj_is_zako* (object)

`syscall 10, 17 ; trap_sysobj_is_zako (1 in, 1 out)`

Check if the object is a non-boss enemy

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Output Parameters
| Name | Type
|------|-----
| is_zako   | bool   
### Example Usage From obj\P_EH000\p_eh.bdscript
```plaintext
L4280:
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 syscall 10, 17 ; trap_sysobj_is_zako (1 in, 1 out)
 dup 
 jnz L4298
 pushFromFSp 0
 fetchValue 4
 syscall 10, 18 ; trap_sysobj_is_boss (1 in, 1 out)
 neqzv
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EH000_SIDECAR\p_eh.bdscript       | ((P) Riku riding sidecar)          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



