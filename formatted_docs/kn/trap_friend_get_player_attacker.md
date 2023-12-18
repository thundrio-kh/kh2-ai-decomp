## trap_friend_get_player_attacker* (friend)

`syscall 10, 33 ; trap_friend_get_player_attacker (1 in, 1 out)`

Get a enemy attacking the player and if the argument is true also stop the enemy attacking the player

#### Input parameters
| Name | Type | Description
|------|------|------------
| should_remove_player_attacker   | bool   | If the player attacker should be removed


#### Return Parameters
| Name | Type
|------|-----
| obj   | YS::OBJ_125   


<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          

</details>

<details>
	<summary>Example Usage From obj\P_EX350\p_ex.bdscript</summary>
```
L8205:
 popToSp 4
 popToSp 0
 pushImm 0
 syscall 10, 33 ; trap_friend_get_player_attacker (1 in, 1 out)
 pushImm 0
 sub 
 neqz 
 jz L8232
 pushFromFSp 4
 pushImm 4
 gosub 4, L7732
 popToSp 4
 jmp L8232
```
</details>

