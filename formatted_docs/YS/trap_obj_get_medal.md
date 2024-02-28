## trap_obj_get_medal* (special)

`syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)`

Get the current number of medals an object has

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_195 *   | An object


### Output Parameters
| Name | Type
|------|-----
| num_medals   | int   
### Example Usage From msn\CA01_MS204\ca01.bdscript
```plaintext
L106:
 gosub 12, L142
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)
 pushImm 0
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 pushFromPSp 0
 syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)
 pushImm 1
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 pushFromPSp 16
 syscall 1, 266 ; trap_obj_get_medal (1 in, 1 out)
 pushImm 2
 syscall 4, 5 ; trap_mission_set_count (2 in, 0 out)
 halt 
 jmp L106
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\CA01_MS204\ca01.bdscript       |           
| msn\CA07_MS105\ca07.bdscript       |           
| obj\B_CA050\b_ca.bdscript       | ((B) Grim Reaper)          
| obj\F_CA690_BTL\f_ca.bdscript       | ((F) Isla de Muerta’s chest (Grim Reaper) (Open) (BTL) (CA))          



