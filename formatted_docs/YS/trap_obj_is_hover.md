## trap_obj_is_hover* (object)

`syscall 1, 208 ; trap_obj_is_hover (1 in, 1 out)`

Returns if the object is hovering

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


### Output Parameters
| Name | Type
|------|-----
| is_hover   | bool   
### Example Usage From obj\F_HB090\f_hb.bdscript
```plaintext
L442:
 pushFromFSp 0
 syscall 1, 208 ; trap_obj_is_hover (1 in, 1 out)
 jz L454
 pushFromFSp 0
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 jmp L454
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\F_HB090\f_hb.bdscript       | ((F) CoR’s whirlwind (jumpable) (HB))          
| obj\F_MU070\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (MU))          
| obj\F_MU070_BOSS\f_mu.bdscript       | ((F) Wind ride (Reaction Command) (BOSS) (MU))          



