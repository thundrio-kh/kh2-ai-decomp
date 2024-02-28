## trap_sysobj_is_finish_blow* (object)

`syscall 10, 30 ; trap_sysobj_is_finish_blow (1 in, 1 out)`

Check if the object is in a finish blow state

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_finish_blow   | bool   
Example Usage From obj\P_EX330\p_ex.bdscript
```plaintext
L6309:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 dup 
 jz L6338
 pushFromFSp 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L209
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 syscall 10, 30 ; trap_sysobj_is_finish_blow (1 in, 1 out)
 eqzv
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



