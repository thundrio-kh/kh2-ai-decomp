## trap_friend_use_item* (friend)

`syscall 10, 29 ; trap_friend_use_item (4 in, 0 out)`

Have a friend use an item

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object
| kind   | int   | ID of item to use
| target   | YS::OBJ_28   | An object
| num   | int   | How many of the item to use? 0 is the only value used by game scripts




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          
| obj\P_HE000\p_he.bdscript       | ((P) Auron)          

</details>

<details>
	<summary>Example Usage From obj\P_EH000\p_eh.bdscript</summary>
```
L7518:
 popToSp 0
 pushFromPSpVal 0
 pushImm 2
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L4255
 memcpyToSp 16, 16
 pushFromPSp 16
 pushImm 0
 syscall 10, 29 ; trap_friend_use_item (4 in, 0 out)
 ret
```
</details>

