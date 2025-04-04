## trap_obj_is_pirate_shade* (object)

`syscall 1, 40 ; trap_obj_is_pirate_shade (1 in, 1 out)`

Returns if the object is in shade

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


### Output Parameters
| Name | Type
|------|-----
| is_pirate_shade   | bool   
### Example Usage From obj\B_CA010\b_ca.bdscript
```plaintext
L1544:
 pushFromFSp 0
 fetchValue 132
 eqz 
 dup 
 jz L1557
 pushFromFSp 0
 syscall 1, 40 ; trap_obj_is_pirate_shade (1 in, 1 out)
 eqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\B_CA010\b_ca.bdscript       | ((B) Barbossa)          
| obj\B_CA020\b_ca.bdscript       | ((M) Undead Pirate A)          
| obj\B_CA030\b_ca.bdscript       | ((M) Undead Pirate B)          
| obj\B_CA040\b_ca.bdscript       | ((M) Undead Pirate C)          
| obj\B_CA040_PUB\b_ca.bdscript       | ()          



