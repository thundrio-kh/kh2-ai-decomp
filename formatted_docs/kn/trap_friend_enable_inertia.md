## trap_friend_enable_inertia* (friend)

`syscall 10, 27 ; trap_friend_enable_inertia (1 in, 0 out)`

Enable the inertia action for a friend

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          

</details>

<details>
	<summary>Example Usage From obj\P_EX330\p_ex.bdscript</summary>
```plaintext
L7882:
 popToSp 0
 pushFromPWp W364
 syscall 10, 27 ; trap_friend_enable_inertia (1 in, 0 out)
 pushFromFSp 0
 gosub 4, L6483
 ret
```
</details>

