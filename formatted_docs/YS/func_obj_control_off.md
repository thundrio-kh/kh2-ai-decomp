## func_obj_control_off* (object)

`syscall 1, 42 ; func_obj_control_off (1 in, 0 out)`

Turns off control of the object running this function.

#### Input parameters
| Name | Type | Description
|------|------|------------
| type   | int   | Unknown purpose. Possible values 0 or 1




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| msn\TT12_WORK_BOX\tt12.bdscript       |           
| obj\B_EX140\b_ex.bdscript       | ((B) Xigbar)          
| obj\B_EX140_LV99\b_ex.bdscript       | ((B99) Xigbar (Limit Cut))          
| obj\B_EX150\b_ex.bdscript       | ((B) Luxord (WORKS! can’t be killed, or paused))          
| obj\B_EX150_LV99\b_ex.bdscript       | ((B99) Luxord (Limit Cut))          
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\B_EX180\b_ex.bdscript       | ((?) Xemnas’s dragon (Throne))          
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          
| obj\B_EX370\b_ex.bdscript       | ((B) Zexion (Absent Silhouette))          
| obj\F_EH070\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (right) (EH))          
| obj\F_EH080\f_eh.bdscript       | ((F) Xemnas’s dragon core cylinder (left) (EH))          
| obj\M_EX950\m_ex.bdscript       | ((M) Gambler)          

</details>

<details>
	<summary>Example Usage From msn\TT12_WORK_BOX\tt12.bdscript</summary>
```
L61:
 pushImm 0
 syscall 1, 42 ; func_obj_control_off (1 in, 0 out)
 pushImm 0
 pushImm L108
 pushImm 0
 pushImm 0
 syscall 0, 9 ; trap_thread_start (4 in, 1 out)
 drop 
 jmp L83
```
</details>

