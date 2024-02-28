## trap_friend_remove_player_attacker* (friend)

`syscall 10, 34 ; trap_friend_remove_player_attacker (2 in, 0 out)`

Remove the player attacker

#### Input parameters
| Name | Type | Description
|------|------|------------
| obj   | YS::OBJ_125   | An object
| remove_old   | bool   | Should the old attacker also be removed


Example Usage From obj\P_EX350\p_ex.bdscript
```plaintext
L8674:
 popToSp 0
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L8704
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 gosub 4, L7603
 memcpyToSp 16, 16
 pushFromPSp 16
 fetchValue 4
 pushImm 1
 syscall 10, 34 ; trap_friend_remove_player_attacker (2 in, 0 out)
 jmp L8704
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



