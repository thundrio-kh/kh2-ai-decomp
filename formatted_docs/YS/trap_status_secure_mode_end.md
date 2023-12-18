## *trap_status_secure_mode_end* (special)

syscall 1, 264 ; trap_status_secure_mode_end (0 in, 0 out)

Turn off the secure mode flag

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\AL13_TRAP\al13.bdscript       |           
| msn\AL13_TRAP_FREE\al13.bdscript       |           
| msn\AL13_TRAP_FREE2\al13.bdscript       |           
| obj\F_EH110\f_eh.bdscript       | ((F) Rising building (EH))          

</details>

<details>
	<summary>Example Usage From msn\AL13_TRAP\al13.bdscript</summary>
L221:
 halt 
 syscall 1, 264 ; trap_status_secure_mode_end (0 in, 0 out)
 pushFromFWp W8
 pushImm 5
 sub 
 eqz 
 jz L254
</details>

