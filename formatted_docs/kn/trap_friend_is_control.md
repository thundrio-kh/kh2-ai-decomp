## trap_friend_is_control* (friend)

`syscall 10, 36 ; trap_friend_is_control (1 in, 1 out)`

Returns if the friend has control

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


### Output Parameters
| Name | Type
|------|-----
| has_control   | bool   
### Example Usage From obj\P_EX330\p_ex.bdscript
```plaintext
L8995:
 popToSp 0
 syscall 1, 244 ; trap_status_is_battle (0 in, 1 out)
 dup 
 jz L9007
 pushFromFSp 0
 syscall 10, 36 ; trap_friend_is_control (1 in, 1 out)
 eqzv
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          
| obj\P_EX350\p_ex.bdscript       | ((P) Chicken Little)          



