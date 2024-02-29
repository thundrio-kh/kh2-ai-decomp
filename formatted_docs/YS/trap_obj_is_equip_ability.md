## trap_obj_is_equip_ability* (object)

`syscall 1, 343 ; trap_obj_is_equip_ability (2 in, 1 out)`

Returns if the object has the specified ability equipped

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object
| ability_id   | int   | ID of an ability


### Output Parameters
| Name | Type
|------|-----
| is_equip_ability   | bool   
### Example Usage From magic\CURE_1\cure.bdscript
```plaintext
L488:
 pushFromFSp 20
 pushImm 114
 syscall 1, 343 ; trap_obj_is_equip_ability (2 in, 1 out)
 dup 
 jz L506
 pushFromFSp 20
 pushFromPSpVal 44
 syscall 1, 130 ; trap_obj_cmp (2 in, 1 out)
 eqz 
 eqzv
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| magic\CURE_1\cure.bdscript       |           
| magic\CURE_1lk\cure.bdscript       |           
| magic\CURE_2\cure.bdscript       |           
| magic\CURE_2lk\cure.bdscript       |           
| magic\CURE_3\cure.bdscript       |           
| magic\CURE_3lk\cure.bdscript       |           



