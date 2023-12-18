## trap_friend_follow_enemy* (friend)

`syscall 10, 21 ; trap_friend_follow_enemy (1 in, 0 out)`

Have a friend follow an enemy

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_LK020\p_lk.bdscript       | ((P) Donald (LK))          

</details>

<details>
	<summary>Example Usage From obj\P_LK020\p_lk.bdscript</summary>
```
L2181:
 pushFromPSpVal 0
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 eqz 
 syscall 7, 19 ; trap_friend_update_target (2 in, 1 out)
 drop 
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L2207
 pushFromPSpVal 0
 syscall 10, 21 ; trap_friend_follow_enemy (1 in, 0 out)
 jmp L2207
```
</details>

