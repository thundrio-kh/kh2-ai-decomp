## trap_obj_set_random_pos* (position)

`syscall 1, 199 ; trap_obj_set_random_pos (4 in, 0 out)`

Sets an object to a random in bounds position (if the random location found is out of bounds, it will be moved to the closest in bounds location)

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| pos   | kn::FVector    | Base position to randomize from
| range   | float   | Determines radius of random positions to choose from
| height   | float   | Determines height of random positions to choose from


### Example Usage From ard\he05\f_he.bdscript
```plaintext
L56:
 jz L112
 pushFromPSp 0
 pushImm 25
 gosub 12, L255
 gosub 12, L277
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 147 ; trap_obj_pos (1 in, 1 out)
 memcpyToSp 16, 48
 pushFromPSp 48
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 4
 add 
 dup 
 fetchValue 0
 pushImmf 100
 subf 
 memcpy 0
 pushFromPSp 0
 pushFromPSp 16
 pushImmf 700
 pushImmf 150
 syscall 1, 199 ; trap_obj_set_random_pos (4 in, 0 out)
 gosub 12, L289
 jmp L112
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| ard\he05\f_he.bdscript       |           
| ard\he07\f_he.bdscript       |           
| ard\he11\f_he.bdscript       |           
| ard\he15\f_he.bdscript       |           
| ard\he16\f_he.bdscript       |           
| ard\he17\f_he.bdscript       |           



