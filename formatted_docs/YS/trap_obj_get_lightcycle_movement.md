## trap_obj_get_lightcycle_movement* (special)

`syscall 1, 269 ; trap_obj_get_lightcycle_movement (3 in, 1 out)`

Get the movement for the light cycle to head to a target

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_195 *   | An object
| target   | YS::OBJ_126 *   | An object
| range   | float   | Range to try and target the target


### Output Parameters
| Name | Type
|------|-----
| movement   | kn::FVector   
### Example Usage From obj\M_EX600_LC\m_ex.bdscript
```plaintext
L62:
 pushFromFSp 0
 gosub 4, L88
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImmf 100
 syscall 1, 269 ; trap_obj_get_lightcycle_movement (3 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 memcpyToSpVal 16, 112
 halt 
 jmp L62
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\M_EX600_LC\m_ex.bdscript       | ((M) Magnum Loader (white))          
| obj\M_EX600_LC_ATK\m_ex.bdscript       | ((M) Magnum Loader (blue))          
| obj\M_EX600_LC_CHG\m_ex.bdscript       | ((M) Magnum Loader (yellow))          
| obj\M_EX600_LC_GRD\m_ex.bdscript       | ((M) Magnum Loader (green))          



