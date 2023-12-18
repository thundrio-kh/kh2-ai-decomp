## trap_unit_enable* (spawn)

`syscall 1, 203 ; trap_unit_enable (1 in, 0 out)`

Enable a unit group so it can spawn

#### Input parameters
| Name | Type | Description
|------|------|------------
| id   | id   | Unit group ID




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\MU02_MS103B\mu02.bdscript       |           
| msn\MU07_MS106\mu07.bdscript       |           
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX240\b_ex.bdscript       | ((?) Xemnas’s dragon (Anchored))          
| obj\B_EX300\b_ex.bdscript       | ((?) Xemnas armor - ???)          
| obj\B_EX330\b_ex.bdscript       | ((F) Xemnas’s dragon (Flying))          
| obj\B_MU100\b_mu.bdscript       | ((B) Shan-Yu)          
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\F_CA050\f_ca.bdscript       | ((F) Explosive barrel (CA))          
| obj\F_EH040\f_eh.bdscript       | ((F) White and green beam (EH))          
| obj\F_EH100\f_eh.bdscript       | ((F) Xemnas’s dragon energy core (EH))          
| obj\F_TR160\f_tr.bdscript       | ((F) WARNING message (TR))          
| obj\F_WI390\f_wi.bdscript       | ((F) Steamboat’s hook (WI))          
| obj\F_WI390_RTN\f_wi.bdscript       | ((F) Steamboat’s hook (RTN) (WI))          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_HERCULES\n_ex.bdscript       | ((N) Pete (BTL_HERCULES) (EX))          
| obj\N_EX760_BTL_MEGARA\n_ex.bdscript       | ((N) Pete (BTL_MEGARA) (EX))          

</details>

<details>
	<summary>Example Usage From msn\MU02_MS103B\mu02.bdscript</summary>
```
L204:
 pushImm 417
 syscall 1, 203 ; trap_unit_enable (1 in, 0 out)
 jmp L229
```
</details>

