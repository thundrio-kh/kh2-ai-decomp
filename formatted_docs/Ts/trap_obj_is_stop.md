## trap_obj_is_stop* (object)

syscall 6, 49 ; trap_obj_is_stop (1 in, 1 out)

Checks if an object is stopped

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_stop   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX170_LAST\b_ex.bdscript       | ((B) Xemnas (Final))          
| obj\B_EX170_LAST_LV99\b_ex.bdscript       | ((B99) Xemnas (Final) (Limit Cut The World of Nothing)?)          
| obj\F_HB020\f_hb.bdscript       | ((F) ??? (HB))          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          

</details>

<details>
	<summary>Example Usage From obj\B_EX170_LAST\b_ex.bdscript</summary>
L19588:
 jz L19615
 halt 
 pushFromPSpVal 0
 syscall 6, 49 ; trap_obj_is_stop (1 in, 1 out)
 eqz 
 jz L19613
 pushFromFSp 0
 pushImm 68
 add 
 dup 
 fetchValue 0
 syscall 0, 3 ; trap_frametime (0 in, 1 out)
 subf 
 memcpy 0
 jmp L19613
</details>

