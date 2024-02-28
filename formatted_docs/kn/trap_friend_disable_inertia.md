## trap_friend_disable_inertia* (friend)

`syscall 10, 28 ; trap_friend_disable_inertia (1 in, 0 out)`

Disable a friends inertia action

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


Example Usage From obj\P_EX330\p_ex.bdscript
```plaintext
L7902:
 popToSp 4
 popToSp 0
 pushFromFSp 0
 pushFromFSp 4
 pushImm 1
 gosub 4, L6585
 pushFromPWp W364
 syscall 10, 28 ; trap_friend_disable_inertia (1 in, 0 out)
 ret
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



