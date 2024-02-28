## trap_obj_each_all* (object)

`syscall 1, 331 ; trap_obj_each_all (1 in, 1 out)`

returns each instance of an object to the top of the stack?

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_132 *   | An object?


### Output Parameters
| Name | Type
|------|-----
| obj_list   | list of objects   
### Example Usage From msn\TT04_MS301\tt04.bdscript
```plaintext
L214:
 popToSp 0
 pushFromFSpVal 4
 syscall 1, 331 ; trap_obj_each_all (1 in, 1 out)
 popToSpVal 4
 pushFromFSpVal 4
 pushImm 0
 sub 
 neqz 
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\TT04_MS301\tt04.bdscript       |           
| msn\TT05_MS403\tt05.bdscript       |           
| msn\TT05_MS404\tt05.bdscript       |           
| obj\F_EH050\f_eh.bdscript       | ((F) Floating building 1 (EH))          
| obj\F_EH060\f_eh.bdscript       | ((F) Floating building 2 (EH))          
| obj\P_EH000_SIDECAR\p_eh.bdscript       | ((P) Riku riding sidecar)          



