## tarp_friend_is_equiped_ability* (friend)

`syscall 10, 24 ; tarp_friend_is_equiped_ability (2 in, 1 out)`

Returns if a party member has an equipped ability. "tarp" typo comes directly from the games source code

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| id   | int   | Ability ID


#### Return Parameters
| Name | Type
|------|-----
| is_equipped   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          

</details>

<details>
	<summary>Example Usage From obj\P_EH000\p_eh.bdscript</summary>
```plaintext
L378:
 dup 
 jz L389
 pushFromPWp W0
 pushImm 152
 syscall 10, 24 ; tarp_friend_is_equiped_ability (2 in, 1 out)
 eqzv
```
</details>

