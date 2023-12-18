## trap_command_set_side_b* (command)

`syscall 1, 337 ; trap_command_set_side_b (0 in, 0 out)`

Sets the command cage to the back side

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| ard\bb03\bb.bdscript       |           
| ard\mu00\chan.bdscript       |           
| ard\mu07\limi.bdscript       |           
| msn\HB13_MS902\hb13.bdscript       |           

</details>

<details>
	<summary>Example Usage From ard\bb03\bb.bdscript</summary>
```
TR3:
 pushImm 39
 syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)
 eqz 
 jz L56
 syscall 1, 337 ; trap_command_set_side_b (0 in, 0 out)
 pushImm 38
 syscall 0, 59 ; trap_saveflag_check (1 in, 1 out)
 eqz 
 jz L39
 pushImm 17627
 syscall 1, 296 ; trap_tutorial_open (1 in, 0 out)
 jmp L44
```
</details>

