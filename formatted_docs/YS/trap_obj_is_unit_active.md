## trap_obj_is_unit_active* (object)

`syscall 1, 239 ; trap_obj_is_unit_active (1 in, 1 out)`

Returns if the object's unit is active

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


### Output Parameters
| Name | Type
|------|-----
| is_unit_active   | bool   
### Example Usage From obj\F_CA060\f_ca.bdscript
```plaintext
L143:
 pushFromFSp 0
 syscall 1, 239 ; trap_obj_is_unit_active (1 in, 1 out)
 dup 
 jz L160
 pushFromFSp 0
 fetchValue 24
 pushImm 0
 sub 
 eqz 
 eqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\F_CA060\f_ca.bdscript       | ((F) ??? (CA))          
| obj\F_CA060_MEDAL\f_ca.bdscript       | ((F) ??? - Attackable floor? (MEDAL) (CA))          
| obj\F_TR080\tr_w.bdscript       | ((F) Light cycle’s wall (TR))          
| obj\F_TR090\tr_w.bdscript       | ((F) Light cycle’s wall 2 (TR))          
| obj\F_TR100\tr_w.bdscript       | ((F) Light cycle’s wall 3 (single panel) (TR))          
| obj\F_TR110\tr_b.bdscript       | ((F) Light cycle’s columns (5) (TR))          
| obj\F_TR120\tr_b.bdscript       | ((F) Light cycle’s columns (3) (TR))          
| obj\F_TR130\tr_b.bdscript       | ((F) Light cycle’s columns (1) (TR))          



