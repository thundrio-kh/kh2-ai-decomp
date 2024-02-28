## func_history_clear_enemy* (spawn)

`syscall 1, 44 ; func_history_clear_enemy (0 in, 0 out)`

Appears to clear out the history (cache?) of enemies in the current room.

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX240\b_ex.bdscript       | ((?) Xemnas’s dragon (Anchored))          
| obj\F_WI390\f_wi.bdscript       | ((F) Steamboat’s hook (WI))          
| obj\F_WI390_RTN\f_wi.bdscript       | ((F) Steamboat’s hook (RTN) (WI))          

</details>

<details>
	<summary>Example Usage From obj\B_EX240\b_ex.bdscript</summary>
```plaintext
L4498:
 syscall 1, 44 ; func_history_clear_enemy (0 in, 0 out)
 pushImm 152
 syscall 1, 203 ; trap_unit_enable (1 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L204
 pushFromFSp 0
 fetchValue 4
 pushImm 0
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 fetchValue 4
 gosub 4, L204
 ret
```
</details>

