## trap_command_limit_trinity_commbo_start* (special)

syscall 6, 43 ; trap_command_limit_trinity_commbo_start (1 in, 0 out)

Start one of the three parts of the trinity limit combo

#### Input parameters
| Name | Type | Description
|------|------|------------
| n   | int   | number, 0 1 or 2




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| limit\trinity\limi.bdscript       |           
| limit\trinity_wi\limi.bdscript       |           

</details>

<details>
	<summary>Example Usage From limit\trinity\limi.bdscript</summary>
L962:
 pushFromFSp 0
 gosub 4, L1120
 pushFromFSp 0
 gosub 4, L7814
 jz L979
 pushImm 0
 syscall 6, 43 ; trap_command_limit_trinity_commbo_start (1 in, 0 out)
 jmp L979
</details>

