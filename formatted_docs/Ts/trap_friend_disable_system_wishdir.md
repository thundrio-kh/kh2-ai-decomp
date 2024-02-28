## trap_friend_disable_system_wishdir* (friend)

`syscall 7, 25 ; trap_friend_disable_system_wishdir (1 in, 0 out)`

Disables a friend's system wishdir used for summons

#### Input parameters
| Name | Type | Description
|------|------|------------
| friend   | kn::Friend_0 *   | A friend object


Example Usage From obj\P_EH000\p_eh.bdscript
```plaintext
L2787:
 popToSp 0
 pushFromPSpVal 0
 fetchValue 4
 pushImm 193
 pushImmf 0
 syscall 1, 11 ; trap_sysobj_motion_start (3 in, 0 out)
 pushFromFSp 0
 pushImmf 200
 pushImmf 0.1
 pushImm 1
 pushImm 10
 pushImm 9
 gosub 16, L3044
 pushFromPSpVal 0
 syscall 7, 25 ; trap_friend_disable_system_wishdir (1 in, 0 out)
 pushFromPSpVal 0
 syscall 2, 23 ; trap_btlobj_target (1 in, 1 out)
 syscall 1, 140 ; trap_target_is_exist (1 in, 1 out)
 jz L2838
 pushFromPSpVal 0
 gosub 16, L3711
 jmp L2856
```





	Appears in:
| filename | Entity (obj)
|----------|-------------
| obj\P_EH000\p_eh.bdscript       | ((P) Riku)          
| obj\P_EH000_LAST\p_eh.bdscript       | ((P) Riku (final battle))          
| obj\P_EX330\p_ex.bdscript       | ((P) Peter Pan)          



