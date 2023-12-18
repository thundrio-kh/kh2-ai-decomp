## trap_friend_is_control* (friend)

`syscall 10, 36 ; trap_friend_is_control (1 in, 1 out)`

Returns if the friend has control

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


#### Return Parameters
| Name | Type
|------|-----
| has_control   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\P_EX330\p_ex.bdscript</summary>
```
L8995:
 popToSp 0
 syscall 1, 244 ; trap_status_is_battle (0 in, 1 out)
 dup 
 jz L9007
 pushFromFSp 0
 syscall 10, 36 ; trap_friend_is_control (1 in, 1 out)
 eqzv
```
</details>

