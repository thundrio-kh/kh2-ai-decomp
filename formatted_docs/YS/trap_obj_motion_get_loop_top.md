## trap_obj_motion_get_loop_top* (motion)

`syscall 1, 68 ; trap_obj_motion_get_loop_top (2 in, 1 out)`

Returns the position matrix offset value of a motion set entry, this value is taken from the raw motion header

### Input parameters
| Name | Type | Description
|------|------|------------
| motion   | YS::MOTION_289   | A motion set
| id   | int   | ID of a specific motion set entry


### Output Parameters
| Name | Type
|------|-----
| position_matrix_offset   | int   
### Example Usage From obj\M_EX020\m_ex.bdscript
```plaintext
L2835:
 popToSp 0
 pushFromFSp 0
 gosub 8, L1845
 pushImm 1
 popToWp W0
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 161
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushImm -1
 syscall 1, 68 ; trap_obj_motion_get_loop_top (2 in, 1 out)
 popToSp 8
 pushImmf 0
 popToSp 4
```


### Appears in:
| filename | Entity Name (obj)
|----------|-------------
| obj\M_EX020\m_ex.bdscript       | ((M) Shadow)          
| obj\M_EX020_NM\m_ex.bdscript       | ((M) Shadow (NM))          
| obj\M_EX020_NM_RAW\m_ex.bdscript       | ((M) Shadow (NM) (RAW))          
| obj\M_EX020_RAW\m_ex.bdscript       | ((M) Shadow (RAW))          
| obj\M_EX020_WI\m_ex.bdscript       | ((M) Shadow (WI))          
| obj\M_EX020_WI_RAW\m_ex.bdscript       | ((M) Shadow (WI) (RAW))          
| obj\M_EX420\m_ex.bdscript       | ((M) Neoshadow)          
| obj\M_EX420_NM\m_ex.bdscript       | ((M) Neoshadow (NM))          
| obj\M_EX990\m_ex.bdscript       | ((M) Dusk)          



