## trap_friend_follow_player* (friend)

`syscall 10, 20 ; trap_friend_follow_player (1 in, 0 out)`

Have a friend follow the player

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\P_EX330\p_ex.bdscript</summary>
```plaintext
L6080:
 pushFromPWp W364
 gosub 4, L6099
 pushImm 0
 sub 
 eqz 
 jz L6098
 pushFromPWp W364
 syscall 10, 20 ; trap_friend_follow_player (1 in, 0 out)
 halt 
 jmp L6080
```
</details>

