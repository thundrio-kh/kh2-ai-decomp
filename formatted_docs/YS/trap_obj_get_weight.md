## trap_obj_get_weight* (object)

`syscall 1, 310 ; trap_obj_get_weight (1 in, 1 out)`

Returns the defined weight of an object

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_133 *   | An object


### Output Parameters
| Name | Type
|------|-----
| weight   | float   
### Example Usage From msn\TR07_MS203\tr07.bdscript
```plaintext
L240:
 pushFromPSp 0
 gosub 32, L268
 jz L257
 pushFromFSp 108
 pushFromPSp 0
 syscall 1, 310 ; trap_obj_get_weight (1 in, 1 out)
 addf 
 popToSp 108
 jmp L240
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| msn\TR07_MS203\tr07.bdscript       |           



