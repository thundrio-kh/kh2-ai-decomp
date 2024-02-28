## trap_obj_carpet_obj_idle* (special)

`syscall 6, 62 ; trap_obj_carpet_obj_idle (1 in, 0 out)`

Change the carpet action to idle

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Example Usage From obj\B_AL020\b_al.bdscript
```plaintext
L3396:
 pushFromPWp W0
 pushImm 176
 add 
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromPWp W0
 pushImm 176
 add 
 syscall 6, 62 ; trap_obj_carpet_obj_idle (1 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_AL020\b_al.bdscript       | ((B) Jafar (Djinn))          



