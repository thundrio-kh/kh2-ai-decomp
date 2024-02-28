## trap_obj_shadow_move_start* (movement)

`syscall 1, 104 ; trap_obj_shadow_move_start (1 in, 0 out)`

Starts the kind of movement shadows do where they sink into the floor

#### Input parameters
| Name | Type | Description
|------|------|------------
| unk1   | unknown   | pushFromFSp: 0


Example Usage From obj\B_EX210\b_ex.bdscript
```plaintext
L4817:
 pushFromFSp 0
 pushImm 5
 syscall 1, 71 ; trap_obj_reset_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 1
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 pushImm 3
 syscall 1, 70 ; trap_obj_set_flag (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 104 ; trap_obj_shadow_move_start (1 in, 0 out)
 pushImm 1
 popToSpVal 108
 ret
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



