## trap_command_enable_group* (command)

`syscall 1, 366 ; trap_command_enable_group (1 in, 0 out)`

Enables a numbered command group. 0 enables everything.

#### Input parameters
| Name | Type | Description
|------|------|------------
| group   | int   | Enables a numbered command group. Only value used ingame is 0


Example Usage From obj\B_EX420\b_ex.bdscript
```plaintext
L5811:
 pushImm 0
 syscall 1, 366 ; trap_command_enable_group (1 in, 0 out)
 pushFromFSpVal 64
 pushImmf -1
 gosub32 4, L2268
 pushFromPSpVal 0
 pushImm 35
 gosub32 4, L2256
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 0
 pushImm 0
 syscall 1, 149 ; trap_obj_effect_start_bind_other (5 in, 1 out)
 drop
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\B_EX420\b_ex.bdscript       | ((B) Lingering Will)          



