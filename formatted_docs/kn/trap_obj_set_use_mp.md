## trap_obj_set_use_mp* (object)

syscall 10, 43 ; trap_obj_set_use_mp (2 in, 0 out)

Sets an object to use its MP

#### Input parameters
| Name | Type | Description
|------|------|------------
| mp   | float   | Value to set MP to




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          

</details>

<details>
	<summary>Example Usage From obj\P_EH000\p_eh.bdscript</summary>
L4060:
 popToSp 0
 pushImm 1
 popToSpVal 24
 pushFromFSp 0
 pushFromFSpVal 28
 syscall 10, 43 ; trap_obj_set_use_mp (2 in, 0 out)
 pushFromPWp W4136
 pushFromPWp W0
 gosub 4, L4080
 ret
</details>

