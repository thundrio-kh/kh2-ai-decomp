## trap_obj_shadow_move_end* (movement)

`syscall 1, 105 ; trap_obj_shadow_move_end (1 in, 0 out)`

Ends the kind of movement shadows do where they sink into the floor

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


Example Usage From obj\B_EX210\b_ex.bdscript
```plaintext
L4961:
 popToSp 0
 pushFromFSp 0
 pushImm 3
 syscall 1, 71 ; trap_obj_reset_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 71 ; trap_obj_reset_flag (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 105 ; trap_obj_shadow_move_end (1 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 pushImm 162
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\M_EX020\m_ex.bdscript       | ((M) Shadow)          
| obj\M_EX020_NM\m_ex.bdscript       | ((M) Shadow (NM))          
| obj\M_EX020_NM_RAW\m_ex.bdscript       | ((M) Shadow (NM) (RAW))          
| obj\M_EX020_RAW\m_ex.bdscript       | ((M) Shadow (RAW))          
| obj\M_EX020_WI\m_ex.bdscript       | ((M) Shadow (WI))          
| obj\M_EX020_WI_RAW\m_ex.bdscript       | ((M) Shadow (WI) (RAW))          
| obj\M_EX420\m_ex.bdscript       | ((M) Neoshadow)          
| obj\M_EX420_NM\m_ex.bdscript       | ((M) Neoshadow (NM))          



