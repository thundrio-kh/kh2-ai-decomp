## trap_obj_act_start_pri* (action)

`syscall 1, 167 ; trap_obj_act_start_pri (2 in, 0 out)`

Starts an action (with priority?)

### Input parameters
| Name | Type | Description
|------|------|------------
| act   | YS::ACT_86 *   | An action object
| unk2   | string   | A label for an action


### Example Usage From obj\B_EX210\b_ex.bdscript
```plaintext
L3972:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromPAi L6378 ; ___ai 'rush_start' (L6378)
 syscall 1, 167 ; trap_obj_act_start_pri (2 in, 0 out)
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX210\b_ex.bdscript       | ((M) Luxord’s card (attack))          
| obj\F_WI390\f_wi.bdscript       | ((F) Steamboat’s hook (WI))          
| obj\F_WI390_RTN\f_wi.bdscript       | ((F) Steamboat’s hook (RTN) (WI))          
| obj\M_EX800\m_ex.bdscript       | ((M) Bolt Tower)          
| obj\M_EX800_DC\m_ex.bdscript       | ((M) Bolt Tower (DC))          
| obj\M_EX800_MU\m_ex.bdscript       | ((M) Bolt Tower (MU))          
| obj\M_EX800_MU_RAW\m_ex.bdscript       | ((M) Bolt Tower (MU) (RAW))          
| obj\M_EX800_RAW\m_ex.bdscript       | ((M) Bolt Tower (RAW))          
| obj\M_EX900\m_ex.bdscript       | ((M) Assassin)          
| obj\M_EX910\m_ex.bdscript       | ((M) Samurai)          
| obj\M_EX930\m_ex.bdscript       | ((M) Dancer)          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          



