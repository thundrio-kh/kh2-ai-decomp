## trap_friend_disable_follow_player* (friend)

`syscall 10, 48 ; trap_friend_disable_follow_player (1 in, 0 out)`

Stop the friend from following the player

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object




<details>
	<summary>Appears in:</summary>
| filename | Entity (obj)
|----------|-------------
| obj\B_EX260\b_ex.bdscript       | ((B) Xemnas (Armor))          

</details>

<details>
	<summary>Example Usage From obj\B_EX260\b_ex.bdscript</summary>
```
L5725:
 popToSp 0
 pushImm 0
 gosub 12, L618
 memcpyToSp 16, 40
 pushFromPSp 40
 memcpyToSp 16, 24
 pushFromPSp 24
 fetchValue 4
 syscall 1, 94 ; trap_sysobj_is_exist (1 in, 1 out)
 jz L5762
 pushFromPSp 4
 pushFromPSp 24
 fetchValue 4
 gosub 12, L640
 pushFromPSp 4
 syscall 10, 48 ; trap_friend_disable_follow_player (1 in, 0 out)
 jmp L5762
```
</details>

