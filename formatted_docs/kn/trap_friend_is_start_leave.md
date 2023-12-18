## trap_friend_is_start_leave* (friend)

syscall 10, 42 ; trap_friend_is_start_leave (1 in, 1 out)

Checks if the friend has started the leave action

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


#### Return Parameters
| Name | Type
|------|-----
| is_start_leave   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          

</details>

<details>
	<summary>Example Usage From obj\P_EX360\p_ex.bdscript</summary>
L1237:
 dup 
 jz L1246
 pushFromPSpVal 60
 syscall 10, 42 ; trap_friend_is_start_leave (1 in, 1 out)
 eqz 
 eqzv
</details>

