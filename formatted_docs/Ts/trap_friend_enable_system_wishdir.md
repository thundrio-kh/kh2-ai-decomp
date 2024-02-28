## trap_friend_enable_system_wishdir* (friend)

`syscall 7, 24 ; trap_friend_enable_system_wishdir (1 in, 0 out)`

Enables a friend's system wishdir used for summons

### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


### Example Usage From obj\P_EH000\p_eh.bdscript
```plaintext
L3932:
 popToSp 0
 pushFromFSp 0
 gosub 4, L3956
 pushFromPSpVal 0
 syscall 7, 24 ; trap_friend_enable_system_wishdir (1 in, 0 out)
 pushFromPSpVal 0
 fetchValue 4
 pushImmf 0
 syscall 1, 20 ; trap_sysobj_fadein (2 in, 0 out)
 pushFromFSp 0
 gosub 4, L3970
 ret
```


### Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



