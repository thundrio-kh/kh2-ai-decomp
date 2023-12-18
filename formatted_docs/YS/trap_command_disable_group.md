## trap_command_disable_group* (command)

`syscall 1, 365 ; trap_command_disable_group (1 in, 0 out)`

Disables a numbered command group

#### Input parameters
| Name | Type | Description
|------|------|------------
| group   | int   | Values used by Lingering Will are 1 and 2




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          

</details>

<details>
	<summary>Example Usage From obj\B_EX420\b_ex.bdscript</summary>
```
L4680:
 popToSp 0
 gosub32 4, L4674
 eqz 
 jz L4722
 pushImm 21627
 syscall 4, 4 ; trap_mission_information (1 in, 0 out)
 pushImm 1
 popToWp W12
 pushFromFSp 0
 gosub32 4, L4723
 pushImm 1
 syscall 1, 365 ; trap_command_disable_group (1 in, 0 out)
 pushImm 72
 pushImm L5760
 pushFromFSp 0
 gosub32 4, L2321
 drop 
 jmp L4722
```
</details>

