## trap_obj_can_see* (object)

`syscall 1, 347 ; trap_obj_can_see (2 in, 1 out)`

Checks if object can see target object

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_128   | An object
| target_obj   | YS::OBJ_128   | A target object


### Output Parameters
| Name | Type
|------|-----
| can_see   | bool   
### Example Usage From obj\B_CA010\b_ca.bdscript
```plaintext
L6358:
 pushFromFSp 64
 pushImmf 500
 subf 
 infzf 
 dup 
 jz L6375
 pushFromFSp 0
 pushFromPSp 80
 syscall 1, 347 ; trap_obj_can_see (2 in, 1 out)
 eqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          



