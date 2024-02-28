## trap_obj_search_by_serial* (object)

`syscall 1, 143 ; trap_obj_search_by_serial (2 in, 0 out)`

Searches for an existing object with the given serial number (a value set in a spawn)

### Input parameters
| Name | Type | Description
|------|------|------------
| data   | memory   | variable/stack location where the object will be stored
| serial   | int   | Serial number to search


### Example Usage From ard\he03\he_t.bdscript
```plaintext
L134:
 pushFromPSp 32
 pushFromFSp 0
 syscall 1, 143 ; trap_obj_search_by_serial (2 in, 0 out)
 pushFromPSp 32
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L154
 pushFromPSp 32
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 jmp L154
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| ard\he03\he_t.bdscript       |           
| ard\tt10\tt_m.bdscript       |           
| msn\AL14_MS_O\al14.bdscript       |           
| msn\AL14_MS_S\al14.bdscript       |           
| msn\CA09_MEDAL\ca_m.bdscript       |           
| msn\CA10_MEDAL\ca_m.bdscript       |           
| msn\CA12_MEDAL\ca_m.bdscript       |           
| msn\CA13_MEDAL\ca_m.bdscript       |           
| msn\CA14_MEDAL\ca_m.bdscript       |           
| msn\CA15_MEDAL\ca_m.bdscript       |           
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\F_BB100\f_bb.bdscript       | ((F) Minigame’s lamp (BB))          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_NM130\f_nm.bdscript       | ((F) ??? (NM))          
| obj\F_TT110\f_tt.bdscript       | ((F) Dog’s sack (TT))          
| obj\F_WI310\f_wi.bdscript       | ((F) ??? (WI))          
| obj\M_EX210\m_ex.bdscript       | ((M) Air Pirate)          
| obj\M_EX210_HB\m_ex.bdscript       | ((M) Aerial Viking)          
| obj\M_EX650\m_ex.bdscript       | ((M) Cannon Gun)          
| obj\M_EX650_HB\m_ex.bdscript       | ((M) Camo Cannon)          
| obj\M_EX650_TR\m_ex.bdscript       | ((M) Cannon Gun (TR))          
| obj\N_BB050_BTL\n_bb.bdscript       | ((N) Cogsworth (BTL) (BB))          
| obj\N_BB060_BTL\n_bb.bdscript       | ((N) Lumière (BTL) (BB))          
| obj\N_BB070_BTL\n_bb.bdscript       | ((N) Mrs. Potts (BTL) (BB))          



