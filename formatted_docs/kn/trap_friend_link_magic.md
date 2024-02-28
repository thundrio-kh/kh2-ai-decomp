## trap_friend_link_magic* (friend)

`syscall 10, 58 ; trap_friend_link_magic (3 in, 0 out)`

Links magic to a friend

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| magic   | YS::MAGIC_7 *   | A magic object
| buffer   | data   | Uninitialized data




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          

</details>

<details>
	<summary>Example Usage From obj\P_EH000\p_eh.bdscript</summary>
```
L208:
 popToSp 0
 gosub 4, L228
 popToSp 4
 pushFromFSp 0
 pushFromFSp 4
 fetchValue 52
 pushFromFSp 4
 syscall 10, 58 ; trap_friend_link_magic (3 in, 0 out)
```
</details>

