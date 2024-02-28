## *trap_status_force_leave_end* (status)

`syscall 1, 205 ; trap_status_force_leave_end (0 in, 0 out)`

Set the force leave flag to false

#### Input parameters
| Name | Type | Description
|------|------|------------


Example Usage From obj\B_MU120\b_mu.bdscript
```plaintext
L6971:
 popToSp 0
 pushFromFWp W4708
 pushImm 1
 sub 
 eqz 
 jz L7019
 syscall 1, 205 ; trap_status_force_leave_end (0 in, 0 out)
 pushImm 0
 popToWp W4708
 pushFromFSp 0
 syscall 1, 84 ; trap_obj_sheet (1 in, 1 out)
 pushImm 0
 syscall 1, 230 ; trap_sheet_hp_rate (2 in, 1 out)
 pushImmf 0.7
 subf 
 supzf 
 jz L7012
 pushImm 97
 syscall 1, 203 ; trap_unit_enable (1 in, 0 out)
 jmp L7017
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          



