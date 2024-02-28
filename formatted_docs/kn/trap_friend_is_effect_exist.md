## trap_friend_is_effect_exist* (friend)

`syscall 10, 54 ; trap_friend_is_effect_exist (2 in, 1 out)`

Checks if the effect still exists

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| effect   | yj::EFFECT_55   | An effect object


#### Return Parameters
| Name | Type
|------|-----
| is_effect_exist   | bool   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX360\p_ex.bdscript       | ((P) ??? (EX))          

</details>

<details>
	<summary>Example Usage From obj\P_EH000\p_eh.bdscript</summary>
```plaintext
L2908:
 dup 
 jz L2918
 pushFromPSpVal 0
 pushFromFSp 52
 syscall 10, 54 ; trap_friend_is_effect_exist (2 in, 1 out)
 eqzv
```
</details>

