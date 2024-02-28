## trap_unit_disable* (spawn)

`syscall 1, 202 ; trap_unit_disable (1 in, 0 out)`

Disable a unit group from being able to spawn

### Input parameters
| Name | Type | Description
|------|------|------------
| id   | id   | Unit group ID


### Example Usage From msn\MU02_MS103B\mu02.bdscript
```plaintext
TR3:
 gosub 4, L329
 pushImm 417
 syscall 1, 202 ; trap_unit_disable (1 in, 0 out)
 pushImmf 50
 pushImm 0
 syscall 4, 8 ; trap_mission_set_gauge (2 in, 0 out)
 pushImmf 1
 syscall 1, 249 ; trap_status_set_prize_ratio (1 in, 0 out)
 pushImm 0
 pushImm L337
 pushImm 0
 pushImm 0
 syscall 0, 9 ; trap_thread_start (4 in, 1 out)
 drop 
 pushFromPWp W0
 gosub 4, L341
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| msn\MU02_MS103B\mu02.bdscript       |           
| msn\MU03_MS104\mu03.bdscript       |           
| msn\MU07_MS106\mu07.bdscript       |           
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX240\b_ex.bdscript       | ((?) Xemnas’s dragon (Anchored))          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_PO030\f_po.bdscript       | ((F) ??? (PO))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_HB550_BOSS\n_hb.bdscript       | ((N) Cloud (BOSS) (HB))          
| obj\N_HB550_BTL\n_hb.bdscript       | ((N) Cloud (BTL) (HB))          



