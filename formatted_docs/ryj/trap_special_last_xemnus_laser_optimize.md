## trap_special_last_xemnus_laser_optimize* (special)

`syscall 8, 6 ; trap_special_last_xemnus_laser_optimize (0 in, 0 out)`

Adds the dome effect (dark globe) during the final xemnas laser attack

#### Input parameters
| Name | Type | Description
|------|------|------------




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          

</details>

<details>
	<summary>Example Usage From obj\B_EX170_LAST\b_ex.bdscript</summary>
```plaintext
L15024:
 pushFromFSp 0
 pushImm 226
 gosub 12, L13716
 eqz 
 jz L15062
 pushFromFSp 0
 pushImm 1
 syscall 1, 151 ; trap_obj_motion_check_trigger (2 in, 1 out)
 jz L15047
 syscall 8, 6 ; trap_special_last_xemnus_laser_optimize (0 in, 0 out)
 jmp L15047
```
</details>

