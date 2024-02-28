## trap_friend_is_moveonly* (friend)

`syscall 10, 37 ; trap_friend_is_moveonly (1 in, 1 out)`

Checks if the friend is moveonly

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


#### Return Parameters
| Name | Type
|------|-----
| is_moveonly   | bool   
Example Usage From obj\P_EX330\p_ex.bdscript
```plaintext
L9007:
 dup 
 jz L9016
 pushFromFSp 0
 syscall 10, 37 ; trap_friend_is_moveonly (1 in, 1 out)
 eqz 
 eqzv
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



