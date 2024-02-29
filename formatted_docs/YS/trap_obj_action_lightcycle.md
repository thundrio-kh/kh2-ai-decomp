## trap_obj_action_lightcycle* (special)

`syscall 1, 268 ; trap_obj_action_lightcycle (1 in, 0 out)`

Does a lightcycle specific action

### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


### Example Usage From obj\M_EX600_LC\m_ex.bdscript
```plaintext
L23:
 popToSp 0
 pushFromFSp 0
 fetchValue 4
 pushImmf 30
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 268 ; trap_obj_action_lightcycle (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L88
 memcpyToSp 16, 16
 pushFromPSp 16
 syscall 1, 201 ; trap_obj_dir (1 in, 1 out)
 memcpyToSp 16, 32
 pushFromPSp 32
 syscall 1, 79 ; trap_obj_set_dir (2 in, 0 out)
 pushFromFSp 0
 pushFromPAi L2803 ; ___ai 'choice' (L2803)
 syscall 1, 8 ; trap_obj_act_start (2 in, 0 out)
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\M_EX600_LC\m_ex.bdscript       | ((M) Magnum Loader (white))          
| obj\M_EX600_LC_ATK\m_ex.bdscript       | ((M) Magnum Loader (blue))          
| obj\M_EX600_LC_CHG\m_ex.bdscript       | ((M) Magnum Loader (yellow))          
| obj\M_EX600_LC_GRD\m_ex.bdscript       | ((M) Magnum Loader (green))          



