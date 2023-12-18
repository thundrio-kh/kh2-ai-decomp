## *trap_status_force_leave_start* (status)

syscall 1, 204 ; trap_status_force_leave_start (0 in, 0 out)

Set the force leave flag to true

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_MU120\b_mu.bdscript       | ((B) Storm Rider)          
| obj\B_NM000\b_nm.bdscript       | ((B) Oogie Boogie)          
| obj\N_EX760_BTL\n_ex.bdscript       | ((B) Pete (BTL))          
| obj\N_EX760_BTL_WILLY\n_ex.bdscript       | ((N) Pete (BTL_WILLY) (EX))          

</details>

<details>
	<summary>Example Usage From obj\B_MU120\b_mu.bdscript</summary>
L3824:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 gosub 4, L5403
 syscall 1, 24 ; trap_area_area (0 in, 1 out)
 pushImm 8
 sub 
 eqz 
 jz L3861
 pushFromPAi L14988 ; ___ai 'disable_zone?' (L14988)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushImm 97
 syscall 1, 202 ; trap_unit_disable (1 in, 0 out)
 pushImm 98
 syscall 1, 202 ; trap_unit_disable (1 in, 0 out)
 syscall 1, 204 ; trap_status_force_leave_start (0 in, 0 out)
 jmp L3861
</details>

