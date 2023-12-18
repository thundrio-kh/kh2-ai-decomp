## trap_obj_is_action_air* (object)

syscall 1, 224 ; trap_obj_is_action_air (1 in, 1 out)

Returns if the object is currently in the air performing an action

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125 *   | An object


#### Return Parameters
| Name | Type
|------|-----
| is_action_air   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\M_EX690\m_ex.bdscript       | ((M) Lance Soldier)          
| obj\M_EX690_HB\m_ex.bdscript       | ((M) Lance Warrior)          

</details>

<details>
	<summary>Example Usage From obj\M_EX690\m_ex.bdscript</summary>
L390:
 pushFromFSp 0
 syscall 1, 224 ; trap_obj_is_action_air (1 in, 1 out)
 jz L399
 halt 
 jmp L390
</details>

