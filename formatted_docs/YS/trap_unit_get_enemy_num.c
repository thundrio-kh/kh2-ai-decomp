## trap_unit_get_enemy_num* (spawn)

syscall 1, 320 ; trap_unit_get_enemy_num (0 in, 1 out)

Get the number of enemies currently spawned

#### Input parameters
| Name | Type | Description
|------|------|------------


#### Return Parameters
| Name | Type
|------|-----
| num_enemies   | int   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\F_MU080\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU090\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU100\f_mu.bdscript       | ((F) ??? (MU))          
| obj\F_MU100_SHANG\f_mu.bdscript       | ((F) ??? (SHANG) (MU))          
| obj\F_MU100_TOWER\f_mu.bdscript       | ((F) ??? (TOWER) (MU))          
| obj\M_EX590\m_ex.bdscript       | ((M) Bulky Vendor)          
| obj\M_EX590_NM\m_ex.bdscript       | ((M) Bulky Vendor (NM))          

</details>

<details>
	<summary>Example Usage From obj\F_MU080\f_mu.bdscript</summary>
L103:
 popToSp 0
 pushFromFSp 0
 gosub 4, L128
 syscall 1, 320 ; trap_unit_get_enemy_num (0 in, 1 out)
 pushImm 0
 sub 
 eqz 
 jz L124
 pushFromFSp 0
 syscall 1, 28 ; trap_obj_leave (1 in, 0 out)
 jmp L124
</details>

