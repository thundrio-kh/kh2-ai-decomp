## trap_obj_set_special_command* (command)

syscall 10, 6 ; trap_obj_set_special_command (2 in, 0 out)

Set the special command for an object

#### Input parameters
| Name | Type | Description
|------|------|------------
| type   | int   | Type of command to set




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          

</details>

<details>
	<summary>Example Usage From obj\B_EX170_LAST\b_ex.bdscript</summary>
L1116:
 pushFromPAi L27786 ; ___ai 'riku detach' (L27786)
 syscall 0, 2 ; trap_puts (1 in, 0 out)
 pushFromPWp W688
 pushImm 144
 add 
 syscall 1, 102 ; trap_obj_detach (1 in, 0 out)
 pushFromPWp W688
 pushImm 12
 syscall 10, 6 ; trap_obj_set_special_command (2 in, 0 out)
 pushFromFSp 0
 syscall 1, 74 ; trap_obj_idle (1 in, 0 out)
 pushFromFSp 0
 pushFromPWp W688
 pushImm 144
 add 
 gosub 4, L1444
 pushFromPWp W688
 pushFromFSp 0
 pushImm 264
 pushImmf 0
 gosub 4, L1054
 drop 
 pushFromPWp W688
 pushFromFSp 0
 gosub 4, L4892
</details>

